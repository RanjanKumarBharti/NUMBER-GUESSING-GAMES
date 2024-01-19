#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
 srand((unsigned int) time(NULL));
 int num = (rand() % 100)+1;
int guess = 0;
do
{
 cout<<"Enter guessing number (1-100) :";
 cin>>guess;

 if(guess > num){
    cout<<"Guess lower!" <<endl;
 }
 else if(guess < num ){
    cout<<"Guess higher!" <<endl;
 }
 else{
    cout<<" You won! " << endl;
 }
 
} while (guess != num);
    
 return 0;
}