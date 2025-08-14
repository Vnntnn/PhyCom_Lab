#include <stdio.h>

char to_upper(char t) {
  if (t >= 'a' && t <= 'z') {
    t -= 32;
  }
  return t;
}

char to_lower(char t) {
  if (t >= 'A' && t <= 'Z') {
    t += 32;
  }
  return t;
}

int len_str(char* t) {
  int n = 0;
  while (t[n] != '\0') {
    n++;
  }
  return n;
}

int str_cmp(char* t1, char* t2) {
  int i = 0;
  while (t1[i] != '\0' && t2[i] != '\0') {
    if (t1[i] != t2[i]) {
      return (unsigned char)t1[i] - (unsigned char)t2[i];
    }
    i++;
  }
  return (unsigned char)t1[i] - (unsigned char)t2[i];
}

void str_cpy(char* og, char* nw) {
  int i = 0;
  while (nw[i] != '\0') {
    og[i] = nw[i];
    i++;
  }
  og[i] = '\0';
}

void merge(char arr[][61], int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;

  char L[n1][61], R[n2][61];

  for (int i = 0; i < n1; i++)
    str_cpy(L[i], arr[l + i]);
  for (int j = 0; j < n2; j++)
    str_cpy(R[j], arr[m + 1 + j]);

  int i = 0, j = 0, k = l;
  while (i < n1 && j < n2) {
    if (str_cmp(L[i], R[j]) <= 0) {
      str_cpy(arr[k], L[i]);
      i++;
    } else {
      str_cpy(arr[k], R[j]);
      j++;
    }
    k++;
  }

  while (i < n1) {
    str_cpy(arr[k], L[i]);
    i++;
    k++;
  }

  while (j < n2) {
    str_cpy(arr[k], R[j]);
    j++;
    k++;
  }
}

void merge_sort(char arr[][61], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}

int main() {
  int n;
  scanf("%d", &n);

  char students[n][61];

  for (int i = 0; i < n; i++) {
    scanf(" %[^\n]", students[i]);
  }

  for (int i = 0; i < n; i++) {
    int first = 1;
    for (int j = 0; j < len_str(students[i]); j++) {
      if (students[i][j] == ' ') {
        first = 1;
      } else if (first) {
        students[i][j] = to_upper(students[i][j]);
        first = 0;
      } else {
        students[i][j] = to_lower(students[i][j]);
      }
    }
  }

  merge_sort(students, 0, n - 1);

  for (int i = 0; i < n; i++) {
    printf("%s\n", students[i]);
  }

  return 0;
}
