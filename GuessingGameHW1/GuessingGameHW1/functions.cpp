#include <iostream>
#include <string> //string
#include <time.h> //random number
#include <stdlib.h> //random number
#include "functions.h" //connect with .h file

using namespace std;

void guessingGame(int userGuessArr[]){ //function
    
    //declare variables
    int randNums[4];
    int correctGuess = 0;
    string userExit = " ";
    
    while(userExit != "No" && userExit != "no"){ //run code till user doesnt want to play
        
    for(int i = 0; i < 4;i++){ //for loop to get random numbers
        randNums[i] = (rand() % 9) + 1; //generate random number and put in random numbers array list
    } //end for loop

    do{ //do loop to keep user guessing
        correctGuess = 0; //reset correct guess amount
    for(int i = 0; i <= 3;i++){ //start for loop
      for(int j = 0; j <= 3;j++){ //start for loop
        if(userGuessArr[j] == randNums[i]){ //check elements in arrays
            correctGuess = correctGuess + 1; //add count to correct guess total
            break; //stop if correct number is found
        } //end if statement
      } //end for loop
    } // end for loop
        if(correctGuess != 4){ //if user is missing a number it will have them guess again
            cout << correctGuess << " of your guesses were correct!" << endl;
            cout << "Try again" << endl;
            cout << "Heres a little hint! One Number is... " << randNums[0] << endl; //hint for user 
            for(int i = 0; i < 4; i++){ //loop to into user guess into array
                cin >> userGuessArr[i]; //read user guess into array
            } //end for loop
        } // end if statement
    }while(correctGuess != 4); //end do loop when user corrects all the numbers
    
                cout << "Congrats! You guessed correctly! Play again?" << endl;
                cin >> userExit; //take user input
        cin.ignore(); //ignore
        if(userExit == "Yes" || userExit == "yes"){ //check to see if user wants to play again
                    cout << "Lets play a guessing game!" << endl; //output to user
                    cout << "Enter four numbers between 1 - 10" << endl; //output to user
                    for(int i = 0; i < 4; i++){ //loop to into user guess into array
                        cin >> userGuessArr[i]; //read user guess into array
                    } //end for loop
        } //end if statement
    } //end while loop
} // end function
