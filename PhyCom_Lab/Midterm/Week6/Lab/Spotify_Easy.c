#include <stdio.h>
#include <string.h>

int convert_time(int min, int sec) { return min * 60 + sec; }

void read_song(int *order, char name[], int *duration) {
  int min, sec;
  scanf(" Queue#%d <|> %[^<] <|> %d.%d", order, name, &min, &sec);
  *duration = convert_time(min, sec);
}

int sum_durations(const int durations[], int n) {
  if (n == 0)
    return 0;
  return durations[0] + sum_durations(durations + 1, n - 1);
}

int find_song_index(const int durations[], int n, int remaining_time) {
  if (n == 0)
    return -1;
  if (remaining_time - durations[0] <= 0)
    return 0;
  int idx =
      find_song_index(durations + 1, n - 1, remaining_time - durations[0]);
  return (idx == -1) ? -1 : idx + 1;
}

int get_remaining_time(const int durations[], int idx, int total_time) {
  if (idx == 0)
    return total_time - durations[0];
  return get_remaining_time(durations + 1, idx - 1, total_time - durations[0]);
}

void print_song_process(int song_duration, int remaining_time) {
  if (remaining_time == 0) {
    printf("Song Process: Complete\n");
  } else {
    int percentage = ((remaining_time + song_duration) * 100) / song_duration;
    if (percentage < 1)
      percentage = 1;
    printf("Song Process: %d%%", percentage);
  }
}

int main() {
  long int user_time_min = 0;
  int user_time_sec = 0, num_songs = 0;

  scanf("%ld.%d %d", &user_time_min, &user_time_sec, &num_songs);

  int total_user_time = convert_time(user_time_min, user_time_sec);

  char song_names[num_songs][51];
  int song_durations[num_songs];
  for (int i = 0; i < num_songs; i++) {
    song_names[i][0] = '\0';
    song_durations[i] = 0;
  }

  for (int i = 0; i < num_songs; i++) {
    int order;
    char name[51];
    int duration;
    read_song(&order, name, &duration);
    strcpy(song_names[order - 1], name);
    song_durations[order - 1] = duration;
  }

  int total_queue_time = sum_durations(song_durations, num_songs);

  if (total_queue_time > 0) {
    int remainder = total_user_time % total_queue_time;
    if (remainder != 0)
      total_user_time = remainder;
  }

  int idx = find_song_index(song_durations, num_songs, total_user_time);

  if (idx != -1) {
    int rem_time = get_remaining_time(song_durations, idx, total_user_time);
    printf("Song Order: %d\n", idx + 1);
    printf("Song Name: %s\n", song_names[idx]);
    print_song_process(song_durations[idx], rem_time);
  }

  return 0;
}