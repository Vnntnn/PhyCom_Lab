#include <stdio.h>
#include <string.h>

int convert_time(int min, int sec) { return min * 60 + sec; }

int main() {
  long int user_time_min = 0;
  int user_time_sec = 0, num_songs = 0;

  scanf("%ld.%d %d", &user_time_min, &user_time_sec, &num_songs);

  int total_user_time = convert_time(user_time_min, user_time_sec);

  char song_names[num_songs][51];
  int song_durations[num_songs];
  int total_queue_time = 0;

  for (int i = 0; i < num_songs; i++) {
    song_names[i][0] = '\0';
    song_durations[i] = 0;
  }

  for (int i = 0; i < num_songs; i++) {
    int order, min, sec;
    char name[51];

    scanf(" Queue#%d <|> %[^<] <|> %d.%d", &order, name, &min, &sec);

    int duration = convert_time(min, sec);

    strcpy(song_names[order - 1], name);
    song_durations[order - 1] = duration;
    total_queue_time += duration;
  }

  if (total_queue_time > 0) {
    int remainder = total_user_time % total_queue_time;
    if (remainder != 0) total_user_time = remainder;
  }

  int remaining_time = total_user_time;

  for (int i = 0; i < num_songs; i++) {
    remaining_time -= song_durations[i];

    if (remaining_time <= 0) {
      printf("Song Order: %d\n", i + 1);
      printf("Song Name: %s\n", song_names[i]);

      if (remaining_time == 0) printf("Song Process: Complete\n");

      else 
      {
        int percentage = ((remaining_time + song_durations[i]) * 100) / song_durations[i];
        if (percentage < 1) percentage = 1;
        printf("Song Process: %d%%", percentage);
      }

      break;
    }
  }

  return 0;
}