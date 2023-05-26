#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 20, -20, 13, 30, -30, 40};
    int nsize = size(nums);
    //App 1 => count positive and even numbers only
   /* int i = 0;
    int results = 0;
    while ( i < nsize)
    {
         if(nums[i] > 0 && nums[i] % 2 == 0)
         {
            results += nums[i];
         }
         i++;
    }
    cout << results << "\n"; */



 // 2nd APP => Guess the Number game

   /* int guessNum = 4;
    int tries = 0;

    cout <<"Guess a number between 1 and 10" <<"\n";

    int guess;
    cin >> guess;

    for(; tries < 2; tries++)
    {
        if(guess == guessNum)
        {
            cout << " You Are Right!\n";
            break;
        }
        else
        {
            cout << "Wrong, Try again\n";
        }
        cin >> guess;
      
        if(tries == 1){
            cout << "You Are Out Of Trials";
            break;
        }



// Elzero solution

  int guessNumber = 7;
  int guessTries = 0;
  int choose;
  cout << "Please Guess The Number Between 1 & 10\n";

  while (true) // ====>NOTE: hena ola true 3shan mfesh shart mo3ayn kda kda hn end el loop lma 3dd l trials y5las b if
  {
    cin >> choose;
    if (choose == guessNumber)
    {
      cout << "Great, Correct Guess\n";
      break;
    }
    else
    {
      cout << "Sorry, Wrong Guess\n";
      guessTries++;
    }
    if (guessTries == 3)
    {
      cout << "Sorry, You Failed. The Number Is: " << guessNumber << "\n";
      break;
    }
  }
    }     
    */



    // 3rd app Reversed number
    int vals[4];
    cout <<"Type Numbers To Reverse\n";
    int i = 0;
    for(; i < 4; i++)
        cin >> vals[i];
    
    for(i = 3; i >= 0; i--)
    cout << vals[i] <<"\n";
    
    }