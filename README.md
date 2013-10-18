movingchaperage
===============

This program takes a given stream of numbers, then takes a group of numbers dependent on N_AVG_SAMPLES (initialized so that all except the last 
number are zero(the last number is the first of the stream).  Then, the average is taken of this set(eg. {0,0,0,4}=1
Then, that number is moved into the next slot of the array and the next number in the stream takes its place.  This 
process continues until the antire stream has passed through this small array, outputting each average.

The program also finds the highest number, lowest numberm, and the range between them in the set and outputs them
as well. 
