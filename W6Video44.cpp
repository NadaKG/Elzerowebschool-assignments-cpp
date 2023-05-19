#include <iostream>
#include <array>
using namespace std;

int main ()
{
  // Game Guess the Number 
  int seq[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };
  int points = 0;
  int answer[3];
  cout << "Sequence 1: \n";
  cout << " 1 | 2 | 3 | ?? \n";
  cin >> answer[0];

  cout << "Sequence 2: \n";
  cout << " 5 | 6 | 7 | ?? \n";
  cin >> answer[1];

  cout << "Sequence 3: \n";
  cout << " 9 | 10 | 11 | ?? \n";
  cin >> answer[2];

  if(answer[0] == seq[0][3])
  points++;
  if(answer[1] == seq[1][3])
  points++;
  if(answer[2] == seq[2][3])
  points++;

cout << "Your Points are: " << points << " Of 3\n";

if (points == 3){
  cout << " Congratzzz \n";
}
else {
  cout << "Try Again \n ";
  cout << "Sequence 1: \n";
  cout << " 1 | 2 | 3 | ?? \n";
  cin >> answer[0];

  cout << "Sequence 2: \n";
  cout << " 5 | 6 | 7 | ?? \n";
  cin >> answer[1];

  cout << "Sequence 3: \n";
  cout << " 9 | 10 | 11 | ?? \n";
  cin >> answer[2];
  cout << "Your Points are: " << points << " Of 3\n";
  cout << " Congratzzz \n";
}
}