#include <stdio.h>

int find_sum(int arr[]);
double find_avg(int arr[]);
int find_equal(int f_arr[], int s_arr[]);
int find_win(int farr[], int sarr[]);

int find_sum(int arr[]) {
  int sum = 0;
  for (int i = 0; i < 7; i++) sum += arr[i];
  return sum;
}

double find_avg(int arr[]) {
  double avg = 0;
  for (int i = 0; i < 7; i++) avg += arr[i];
  return avg / 7;
}

int find_equal(int f_arr[], int s_arr[]) {
  int cnt = 0;
  for (int i = 0; i < 7; i++) if (f_arr[i] == s_arr[i]) cnt++;
  return cnt;
}

int find_win(int farr[], int sarr[]) {
  int cnt = 0;
  for (int i = 0; i < 7; i++) if (farr[i] < sarr[i]) cnt++;
  return cnt;
}

int main() {
  char names[2][201];
  int nums[2][7];

  for (int i = 0; i < 2; i++) {
    scanf(" %[^\n]", names[i]);
    for (int j = 0; j < 7; j++) {
      scanf("%d", &nums[i][j]);
    }
  }

  int e = find_equal(nums[0], nums[1]);
  int win0 = find_win(nums[0], nums[1]);
  int win1 = find_win(nums[1], nums[0]);
  for (int i = 0; i < 2; i++) {
    printf("%s: %d minutes, average %d minutes/day\n", names[i], find_sum(nums[i]), (int)find_avg(nums[i]));
  }
  printf("Faster days - %s: %d, %s: %d, Equal: %d\n", names[0], win0, names[1], win1, e);
  return 0;
}