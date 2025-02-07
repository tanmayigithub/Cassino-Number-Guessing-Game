#include <iostream> 
#include <string>
#include <cstdlib> 
#include <ctime> 
using namespace std;

void rules (); //Rules of the game

int main ()
{ 
string Name;
int Amount;
int BiddingAmount;
int Guess;
int Dice;
char Choice;

srand(time(0));

cout<<"****************CASSINO*********************";

cout << "\nEnter Player Name: ";
getline(cin, Name);

cout << "\nDeposit Your Amount: $";
cin >> Amount;

do {
system("CLS");
rules();
do { cout << "\nWelcome " << Name << " Are You Ready To Play?

" << "\n\n";

cout << "Enter Bid Amount: $";
cin >> BiddingAmount;

if (BiddingAmount > Amount)
cout << "You Can not Bid More Than Current Amount\n"

<<

"\nRe-enter Amount: ";

}
while (BiddingAmount > Amount);

do { cout << "Guess The Number Between 1 To 10 :";
cin >> Guess;

if (Guess <= 0 || Guess > 10)

cout << "\nNumber Sholud Be Between 1 To 10\n" <<
"\nGuess Numer Again: ";

}
while (Guess <= 0 || Guess > 10);

Dice = rand() % 10 + 1;

if (Dice == Guess)
{
cout << "\n YAAA!!! YOU WON " << BiddingAmount * 10 <<

"$";

Amount = Amount + BiddingAmount * 10;
}
else
{
cout << "Sorry You Lose " << BiddingAmount<< "$\n";
Amount = Amount - BiddingAmount;
}

cout << "\nThe Winning Number Was: " << Dice << "\n";

cout << "\n" << Name << ", Your Remaining Amount Is " << Amount

<< "$\n";

if (Amount == 0)

{
cout << "\nSorry You Don't Have Money To Play \n";
break;
}

cout << "\nYou Want To Play Again Press (y/n)? ";
cin >> Choice;
}
while (Choice == 'Y' || Choice == 'y'); //Choice of pressing the keys in the
game

cout <<
"\n****************************************************************
******************************\n";
cout << "Thanks For Playing Game Again Your Current Amount Is " <<
Amount << "$";
cout <<
"\n****************************************************************
******************************\n";

return 0;
}

void rules() //Rules of the Game
{
system("CLS");

cout <<
"\n****************************************************************
*******************************\n";
cout << "\t\t\tRules of the Game";
cout <<
"\n****************************************************************
*******************************\n";
cout << "\n1. Choose Number Between 1 To 10";
cout << "\n2. Winning Amount Will Be 10 Times Of Bidding Amount";
cout << "\n3. Lose Amount Will Be Biding Amount";
cout << "\n4. You Can also Leave A Game Any Time";
cout <<
"\n****************************************************************
*******************************\n";
}
