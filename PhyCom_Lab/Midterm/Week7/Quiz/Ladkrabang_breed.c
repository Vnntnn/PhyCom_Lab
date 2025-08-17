#include <math.h>
#include <stdio.h>

int main() {
  int n;
  char names[3][20];

  scanf("%d %s %s %s", &n, names[0], names[1], names[2]);

  double fcnt = 0, scnt = 0, tcnt = 0;

  double oils[n][3];
  for (int i = 0; i < n; i++) {
    scanf("%lf %lf %lf", &oils[i][0], &oils[i][1], &oils[i][2]);
    fcnt += oils[i][0];
    scnt += oils[i][1];
    tcnt += oils[i][2];
  }

  double u_o = 5.5, u_tw = 5.5, u_th = 5.5;
  if (names[0][0] == 'N') u_o = 6.6;
  if (names[1][0] == 'N') u_tw = 6.6;
  if (names[2][0] == 'N') u_th = 6.6;

  printf("%s: %.0lf refills\n", names[0], ceil(fcnt / u_o));
  printf("%s: %.0lf refills\n", names[1], ceil(scnt / u_tw));
  printf("%s: %.0lf refills", names[2], ceil(tcnt / u_th));

  return 0;
}
