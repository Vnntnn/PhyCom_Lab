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

void swap(char a[61], char b[61]) {
  char temp[61];
  str_cpy(temp, a);
  str_cpy(a, b);
  str_cpy(b, temp);
}

int partition(char arr[][61], int low, int high) {
  char pivot[61];
  str_cpy(pivot, arr[high]);
  int i = low - 1;
  for (int j = low; j < high; j++) {
    if (str_cmp(arr[j], pivot) <= 0) {
      i++;
      swap(arr[i], arr[j]);
    }
  }
  swap(arr[i + 1], arr[high]);
  return i + 1;
}

void quick_sort(char arr[][61], int low, int high) {
  if (low < high) {
    int pi = partition(arr, low, high);
    quick_sort(arr, low, pi - 1);
    quick_sort(arr, pi + 1, high);
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

  quick_sort(students, 0, n - 1);

  for (int i = 0; i < n; i++) {
    printf("%s\n", students[i]);
  }

  return 0;
}
