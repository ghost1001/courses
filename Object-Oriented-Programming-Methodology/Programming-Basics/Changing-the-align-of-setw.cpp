/* By default, output is right-justified in its field. You can left-justify text output using the
manipulator setiosflags(ios::left). (For now, don’t worry about what this new notation
means.) Use this manipulator, along with setw(), to help generate the following output:
Last name  First name  Street address     Town        State
---------------------------------------------------------
Jones      Bernard     109 Pine Lane      Littletown  MI
O’Brian    Coleen      42 E. 99th Ave.    Bigcity     NY
Wong       Harry       121-A Alabama St.  Lakeville   IL  */
/* Name : Bibek Joshi */

#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	cout << "Welcome To the City Database" << '\n';
	cout << setw(15) << setiosflags(ios::left)<< "Last name" 
       << setw(16) << "First name" 
       << setw(21) << "Street Address" 
       << setw(16) << "Town" 
       << setw(10) << "State" << '\n';
	 
  cout << "-------------------------------------------------------------------------------" << '\n';
  //First Data	 
	cout << setw(15) << "Jones" 
       << setw(16) << "Bernard" 
       << setw(21) << "109 Pine Lane" 
       << setw(16) << "LittleTown" 
       << setw(10) << "MI" << '\n';
  //Second Data

	cout << setw(15) << "O'Brian" 
       << setw(16) << "Coleen" 
       << setw(21) << "42 E. 99th Ave." 
       << setw(16) << "Bigcity" 
       << setw(10) << "NY" << '\n';

	//Third Data
	cout << setw(15) << "Wong" 
       << setw(16) << "Harry" 
       << setw(21) << "121-A Alabama St." 
       << setw(16) << "Lakeville" 
       << setw(10) << "IL" << '\n';
	
 return 0;

}
