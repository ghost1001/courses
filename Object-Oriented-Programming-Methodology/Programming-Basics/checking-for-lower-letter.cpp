/*A library function, islower(), takes a single character (a letter) as an argument and
returns a nonzero integer if the letter is lowercase, or zero if it is uppercase. This func-
tion requires the header file CTYPE.H. Write a program that allows the user to enter a let-
ter, and then displays either zero or nonzero, depending on whether a lowercase or
uppercase letter was entered. */
/*Question from book Object-Oriented Programming in C++,
Fourth Edition By "Robert Lafore" */
/* Name: Bibek Joshi  */
/*Jul 13 2015 */

#include <iostream>
#include <ctype.h>						//for islower()
using namespace std;
int main(void)
{
	char character = '0';					//Defining Character
	cout << "Please enter the character: ";
	cin >> character;							//Taking input character
	if(islower(character))				//Checking for lower letter
	{
		cout << "0\n";
	}
	else
	{
		cout << "1\n";
	}
	return 0;
}
