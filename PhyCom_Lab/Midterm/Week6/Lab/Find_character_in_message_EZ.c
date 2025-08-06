#include <stdio.h>

char convert_lower(char t) {
  
  if (t >= 65 && t <= 90) {
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

int main() {
  char sentences[301], target;
  int idx[301], n = 0;

  scanf("%[^\n] %c", sentences, &target);

  for (int i = 0; i < len_str(sentences); i++) {
    if (convert_lower(sentences[i]) == convert_lower(target)) {
      idx[n] = i + 1;
      n++;
    }
  }

  if (n == 0) {
    printf("Not found.");
    return 0;
  }

  printf("There is/are %d \"%c\" in the above sentences.\nPosition: ", n, target);
  
  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      printf("%d", idx[i]);
      break;
    }

    printf("%d, ", idx[i]);
  }

  return 0;
}
