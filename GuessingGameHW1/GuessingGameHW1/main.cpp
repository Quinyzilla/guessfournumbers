//
//  main.cpp
//  GuessingGameHW1
//
//  Created by whitney hopperstad on 8/28/19.
//  Copyright © 2019 whitney hopperstad. All rights reserved.
//

#include <iostream>
#include <string> //string
#include <time.h> //random numbers
#include <stdlib.h> //random numbers
#include "functions.h" //link to .h file

using namespace std;

void guessingGame(int []); //function

int main() {
    
    srand(time(NULL)); //randomize numbers
    int userGuess[4]; //array for user guesses

    cout << "Lets play a guessing game!" << endl;
    cout << "Enter four numbers between 1 - 10" << endl;
    for(int i = 0; i < 4; i++){ //loop to into user guess into array
        cin >> userGuess[i]; //read user guess into array
    } //end for loop
    
    guessingGame(userGuess); //call to function
    
    return 0;
} //end main
