#include <stdio.h>

char to_lower(char t) {
  if (t >= 'A' && t <= 'Z') {
    t += 32;
  }
  return t;
}

int linear_search(char arr[], int n, char c) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == c) {
      return i;
    }
  }
  return -1;
}

int main() {
  int num;
  scanf("%d", &num);

  char t[num], s_char[27];
  int cnt[27], s_char_cnt = 0;

  for (int i = 0; i < 27; i++) {
    s_char[i] = 0;
    cnt[i] = 0;
  }

  for (int i = 0; i < num; i++) {
    scanf(" %c", &t[i]);
    t[i] = to_lower(t[i]);
  }

  for (int i = 0; i < num; i++) {
    int idx = linear_search(s_char, s_char_cnt, t[i]);
    if (idx == -1) {
      // add new char
      s_char[s_char_cnt] = t[i];
      cnt[s_char_cnt] = 1;
      s_char_cnt++;
    } else {
      cnt[idx]++;
    }
  }

  for (int i = 0; i < s_char_cnt; i++) {
    printf("%c: %d\n", s_char[i], cnt[i]);
  }

  return 0;
}
