/*
 * moving_average.h
 * Author: Todd Branchflower
 * Date: 11 Oct 2013
 * Description: Functions to update and monitor a moving average
 */

#ifndef _MOVINGAVERAGES_HEADER_H_
#define _MOVINGAVERAGES_HEADER_H_

#define N_AVG_SAMPLES 4

// Moving average function
char getAverage(char array[]);

// Array functions
char max(char array[],char arrayLength);
char min(char array[],char arrayLength);
char getRange(char array[],char arrayLength);

#endif
