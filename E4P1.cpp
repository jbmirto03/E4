/**********************************************************************************************************
PROBLEM 1: Write a C++ program using functions that will display the calculator menu. The program will
prompt the user to choose the operation choice (from 1 to 5). Then it asks the user to input two integer
vales for the calculation. See the sample below.

MENU:
 1. Add
 2. Subtract
 3. Multiply
 4. Divide
 5. Modulus
 
Enter your choice: 1
Enter your two numbers: 12 15
Result: 27

Continue? y

The program also asks the user to decide whether he/she wants to continue the operation. If he/she input
‘y’, the program will prompt the user to choose the operation gain. Otherwise, the program will terminate.
/*********************************************************************************************************/

#include <iostream>
#include <conio.h>
  
using namespace std;

// This void function displays the menu, no return value is expected
void calculatormenu()	{
	cout << "MENU:\n" 
		 << "\t1.Add\n" // \t is responsible for moving the text on the next "tabbed" space
		 << "\t2.Subtract\n"
		 << "\t3.Multiply\n"
		 << "\t4.Divide\n"
		 << "\t5.Modulus\n" << endl;
}

// This function is responsible for the Addition operation
int Add(int a, int b)	{
	return(a + b); 
}

// This function is responsible for the Subtraction operation
int Subtract(int a, int b)	{
	return(a - b); 
}

// This function is responsible for the Multiplication operation
int Multiply(int a, int b)	{
	return(a * b); 
}

// This function is responsible for the Division operation
int Divide(int a, int b)	{
	return(a / b); 
}

// This function is responsible for the Modulus operation
int Modulus(int a, int b)	{
	return(a % b); 
}

// This is the main function
int main()
{
	int choice, integer1, integer2; 
	char confirm;
	bool coaster = false; // Boolean condition for do-while loop

	do	{
		calculatormenu(); // Calls function from void calculatormenu(); to run
		cout << "Enter your choice (1-5): "; 	cin >> choice; // Picks from the choices given
		cout << "Enter your two integer numbers: ";		cin >> integer1 >> integer2;	cout << endl; // Accepts integer inputs only

		switch(choice)	{ // Switch condition for selecting the choice
 			case 1:
				cout << "Result: " << Add (integer1, integer2); // Calls function from int Add()
				break;
 		
			case 2: 
				cout << "Result: " << Subtract (integer1, integer2); // Calls function from int Subtract()
				break;
 		
			case 3:
				cout << "Result: " << Multiply (integer1, integer2); // Calls function from int Multiply()
				break;
 		
			case 4:
				cout << "Result: " << Divide (integer1,integer2); // Calls function from int Divide()
				break;
 
 			case 5:
				cout << "Result: " << Modulus (integer1, integer2); // Calls function from int Modulus()
				break;
 
 			default:
				cout << "Invalid ";
				break;
    	}
	
		cout << "\n\nContinue? Y or N? ";	cin >> confirm;
	
		switch(confirm)	{ // Switch condition for user to confirm if he/she wants to continue using the calculator program
			case 'Y': // Uppercase
 			case 'y': // Lowercase
 				 cout << endl;
				break;
 
			default:
 				cout << "\nThank you!";
				coaster = true; // Aborts the loop
				break;
		}
       	
	} while (!coaster); // Repeats the process inside the braces provided the coaster boolean's declared value is in tact
  
  	_getch();
	return 0;
}
