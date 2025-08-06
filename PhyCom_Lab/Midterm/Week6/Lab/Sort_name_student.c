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

int main() {
  char students[20][61];

  for (int i = 0; i < 20; i++) {
    scanf(" %[^\n]", students[i]);
  }

  for (int i = 0; i < 20; i++) {
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

  for (int i = 0; i < 19; i++) {
    for (int j = i + 1; j < 20; j++) {
      if (str_cmp(students[i], students[j]) > 0) {
        char temp[61];
        str_cpy(temp, students[i]);
        str_cpy(students[i], students[j]);
        str_cpy(students[j], temp);
      }
    }
  }

  for (int i = 0; i < 20; i++) {
    printf("%s\n", students[i]);
  }

  return 0;
}
