/* When a value is smaller than a field specified with setw(), the unused locations are, by
default, filled in with spaces. The manipulator setfill() takes a single character as an
argument and causes this character to be substituted for spaces in the empty parts of a
field. Rewrite the WIDTH program so that the characters on each line between the location
name and the population number are filled in with periods instead of spaces, as in
Portcity.....2425785*/
/*Name : Bibek Joshi*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	long pop1=2425785L, pop2=47L, pop3=9761L; //Definng the population
	cout << setw(8) << "Location" << setfill('.') << setw(12) << "Population" << endl;			//Printing Heading
	cout << setw(8) << "Portcity" << setw(12) << pop1 << endl;							//Printing portcity
	cout << setw(8) << "Hightown" << setw(12) << pop2 << endl;							//Printing Hightown
	cout << setw(8) << "Lowville" << setw(12) << pop3 << endl;							//printing Lowville
  return 0;
	
}
