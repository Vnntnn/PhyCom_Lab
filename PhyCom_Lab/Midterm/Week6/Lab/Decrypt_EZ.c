#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define SHIFT 5
#define ALPHABET_LEN 26

int find_index(char c, const char *text) {
  for (int i = 0; i < ALPHABET_LEN; i++) {
    if (text[i] == c)
      return i;
  }
  return -1;
}

int main() {
  char sentences[201];
  const char text[] = "aiwgzvfuthsojlkdecnmrqpyxb";

  scanf("%[^\n]", sentences);

  int i = 0;
  while (sentences[i] != '\0') {

    char ch = sentences[i];
    if (ch == ' ') {
      printf(" ");
      i++;
      continue;
    }

    if (!isalpha(ch)) {
      i++;
      continue;
    }

    char lower = tolower(ch);
    int idx = find_index(lower, text);
    if (idx == -1) {
      i++;
      continue;
    }

    int dec_idx = (idx - SHIFT);
    if (dec_idx < 0)
      dec_idx += ALPHABET_LEN;
    char dec_char = text[dec_idx];

    (isupper(ch)) ? printf("%c", toupper(dec_char)) : printf("%c", dec_char);
    i++;
  }
  return 0;
}