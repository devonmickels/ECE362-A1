/*
Names: Hannah Mortimer
	Devon Mickels
Date: January 08 2020
Professor: Schubert
Class: ECE 362
Assignment: 1 - Arguments/MQG
*/


#include <stdio.h>
#include <string.h>
#include "arrays.h"

int numOfQueues = 0;
int numOfRequests = 0;
int minInt = 0;
int maxInt = 0;


// Main method that will run and do shit
int main(int argc, char const *argv[]) {

  if(argc > 1){
    //Use the in line cmd prompts

    //We want to start looping through all of the arguments, scanning for '-''s
    //From there, we want to check if the value after the - is a q, r, min or max
    //If we find one of these values, the numeric value in the next argument goes with it

    for(int i = 0; i < argc; i++){
      if(strcmp(argv[i], "-q") == 0){
        printf("-q @ pos %d\n", i);
      }
    }

  }else{
    //Prompt the user for additional input

    ptrIntArray test = createQueue(5, 0, 20);
    for(int i = 0; i < 5; i++){
      printf("%d-", test->values[i]);
    }

  }

  return 0;
}
