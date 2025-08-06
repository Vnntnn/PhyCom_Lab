#include <stdio.h>
#include <math.h>

int main() {
  char p1, p2;
  int s1, s2;

  scanf("%c%d %c%d", &p1, &s1, &p2, &s2);

  printf("%.0f", pow(2, s2 - s1));
  
  return 0;
}
