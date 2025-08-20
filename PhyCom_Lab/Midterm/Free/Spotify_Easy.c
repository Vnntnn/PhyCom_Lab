#include <stdio.h>
#include <string.h>

int main() {
  long int min, queues, sec;

  scanf("%ld.%ld", &min, &sec);
  scanf("%ld", &queues);

  int listen_time = sec + (min * 60);
  int original_listen_time = listen_time;

  char queue_song[queues][51], song_name[51];
  long int song_duration[queues], total_play_time = 0;

  for (int i = 0; i < queues; i++) {
    int song_duration_min, song_duration_sec, queue_num;
    scanf(" Queue#%d <|> %[^<] <|> %d.%d", &queue_num, song_name, &song_duration_min, &song_duration_sec);
    song_duration[queue_num - 1] = song_duration_sec + (song_duration_min * 60);
    total_play_time += song_duration[queue_num - 1];
    strcpy(queue_song[queue_num - 1], song_name);
  }

  listen_time %= total_play_time;
  long int last_queue_listen = 0, idx = 0;

  if (listen_time == 0) {
    if (original_listen_time == 0) {
      idx = 0;
      last_queue_listen = 1;
    } else {
      idx = queues - 1;
      last_queue_listen = 100;
    }
  } else {
    while (listen_time > song_duration[idx]) {
      listen_time -= song_duration[idx];
      idx++;
    }
    last_queue_listen = (listen_time * 100) / song_duration[idx];
  }

  long int final_queue = (last_queue_listen == 0 && listen_time > 0) ? 1 : last_queue_listen;

  printf("Song Order: %d\nSong Name: %s\n", (int) idx + 1, queue_song[idx]);
  if (final_queue == 100) printf("Song Process: Complete"); 
  else printf("Song Process: %ld%%", final_queue);
  printf("\n");

  return 0;
}