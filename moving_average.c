#include "moving_average.h"
/*
 * moving_average.c
 *
 *  Created on: Oct 16, 2013
 *      Author: C15Gared.Chapman
 */

// Moving average function
char getAverage(char array[]){
	int additionResult = 0;
	int count = 0;
	int average = 0;

	while(count < N_AVG_SAMPLES){
        additionResult = additionResult + array[count];
        count++;
    }

	average = additionResult/N_AVG_SAMPLES ;

	return average;
}

// Array functions
char max(char array[], char arrayLength){

	int step = 0;
	int max = 0;

	while (step < arrayLength-1) {

		if(array[step] > max) {
			max = array[step];
		}

        step++;
	}

	return max;
}

char min(char array[], char arrayLength) {

	int step = 0;
	int min = 0xFF;

	while (step < arrayLength-1) {

		if (array[step] < min) {
			min = array[step];
		}

		step++;

	}

	return min;
}

char getRange(char array[],char arrayLength) {

	char range = max(array, arrayLength) - min(array, arrayLength);

	return range;
}


