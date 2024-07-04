// Program for Number Guessing Game
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){

    // We have seeded the random number generator.
    int seed_value=time(0);
    srand(seed_value);
    
    //This will generate the random number between 1 to 100.
    int number_to_guess = rand() % 100 + 1 ; 

    // Description of the Game.
    cout<<"/***********  NUMBER GUESSING GAME  ************/\n"<<endl;
    cout<<"Welcome to Number Guessing Game."<<endl;
    cout<<"1. Start Game"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"NOTE: During the game if you want to exit press Ctrl + C.\n"<<endl;
    cout<<"/************  END OF THE GAME  **************/"<<endl;
    int choice;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    while(choice){
        int user_guess;
        cout<<"Enter your guessed number: "<<endl;
        cin>>user_guess;
        
        //using conditions to forecast the result
        if(user_guess>number_to_guess-10 && user_guess<number_to_guess)
            cout<<"You are close to the number. Try again."<<endl;
        else if(user_guess<number_to_guess+10 && user_guess>number_to_guess)
            cout<<"You are close to the number. Try again."<<endl;
        else if(user_guess<number_to_guess)
            cout<<"Your guess is too low. Try again."<<endl;
        else if(user_guess>number_to_guess)
            cout<<"Your guess is too high. Try again."<<endl;
        else if(user_guess==number_to_guess){
            cout<<"Bravo! You guessed the exact number."<<endl;
            break;
        }
    }
    return 0;
}