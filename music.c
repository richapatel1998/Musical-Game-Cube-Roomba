/*
 * music.c
 *
 *  Created on: Apr 11, 2018
 *      Author: rppatel
 */


#include "open_interface.h"
#include "music.h"

void load_songs(){

unsigned char gameCubenumberofNotes = 27; 
//E   B    E  A   D   A   C#  G#  D#  A   F#  C#  G#  C#  D   G | C   F   A#   F   C   A   E   B  G# 
  unsigned char gameCubenotes[27]     = {64, 71, 76, 81, 86, 81, 85, 80, 75, 81, 78, 73, 68, 73, 74, 79, 84, 89, 94, 89, 84, 93, 88, 83, 92,0, 64};
  unsigned char gameCubeduration[27] = {8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 18, 8, 18};

    oi_loadSong(RANDOM_SONG, gameCubenumberofNotes, gameCubenotes, gameCubeduration);
    oi_play_song(RANDOM_SONG);
}

