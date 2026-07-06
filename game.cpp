#include<bits/stdc++.h>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time(0)));
    int randomNum=rand()%100 + 1;
    int guess=0;
    int attempts=0;
    cout<<"Welcome to the Number Guessing game!"<<endl;
    cout<<"I have Chosen a number from 1 to 100, can you guess it?"<<endl;
    do{
        cout<<"Enter your Guess: "<<endl;
        cin>>guess;
        ++attempts;
        if(guess<randomNum){
            cout<<"Too low! Try again."<<endl;
        }else if(guess>randomNum){
            cout<<"Too high! Try again."<<endl;
        }else{
            cout<<"Congratulations! You Guessed the Number in "<<attempts<<" attempts."<<endl;
        }
    }while(guess!=randomNum);
    return 0;
}
