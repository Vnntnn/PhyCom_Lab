#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swap(char name[]);
void str_to_lower(char name[]);
int cmpname(const char o_name[], const char s_name[]);

int main() {
  char names[2][102];

  scanf("%[^\n]\n", names[0]);
  scanf("%[^\n]", names[1]);

  swap(names[0]);
  swap(names[1]);
  
  printf("*** Results ***\n");
  printf("%s\n%s\n***************\n", names[0], names[1]);

  char lower0[102], lower1[102];
  strcpy(lower0, names[0]);
  strcpy(lower1, names[1]);
  str_to_lower(lower0);
  str_to_lower(lower1);

  if (cmpname(lower0, lower1) == 1)
    printf("Both strings are the same.");
  else
    printf("Both strings are not the same.");

  return 0;
}

void swap(char name[]) {
  for (int i = 0; name[i] != '\0'; i++) {
    if (isupper((unsigned char)name[i])) {
      name[i] = tolower((unsigned char) name[i]);
    }
    else if (islower((unsigned char)name[i])) {
      name[i] = toupper((unsigned char) name[i]);
    }
  }
}

void str_to_lower(char name[]) {
  for (int i = 0; name[i] != '\0'; i++) {
    name[i] = tolower((unsigned char) name[i]);
  }
}

int cmpname(const char o_name[], const char s_name[]) {
  if (strcmp(o_name, s_name) == 0)
    return 1;
  else
    return 0;
}
