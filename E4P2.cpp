/*****************************************************************************************************
PROBLEM 2: Create a C++ functional program that sorts n number of elements using either selection or
bubble sort.

Selection Sorting…

Enter the array size: 5
Enter the 5 elements:
100 50 22 101 200

Your data: 100 50 22 101 200

After using selection or bubble sort…

Sorted data: 22 50 100 101 200
*****************************************************************************************************/

#include <iostream>
#include <conio.h>

using namespace std;

void display(int *array, int size)	{	// Function responsible for displaying the array
	for(int a = 0; a < size; a++)	{
		cout << array[a] << " ";
	}
}

void selectionSort(int *array, int size)	{	// Function responsible for selection sorting
	
	int a, b, minimum, temp;
	
	for(a = 0; a < size - 1; a++)	{
		minimum = a;	// Gets index of the minimum data
		
		for(b = a + 1; b < size; b++)	{
			if(array[b] < array[minimum])	{
				minimum = b;
			}
		}
		
		if (minimum != a)	{
			temp = array[a];
			array[a] = array[minimum];
			array[minimum] = temp;
		}
	}
}

int main()	// Function for the main process
{
	int number;
	
	cout << "Selection sorting...\n" << endl
		 << "Enter the array size: ";
	cin >> number;
   
	int arr[number];	// Creates an integer array with the inputted n number of elements as array size
	
	cout << "Enter the " << number << " elements: \n" << endl;
	
	for(int a = 0; a < number; a++)	{	// Loop for storing values in the the array
    	cin >> arr[a];
	}
   
	cout << "\nYour data: ";
	display(arr, number);	// Calls the function labeled "display" to run the process defined inside it
   
	selectionSort(arr, number);	// Calls the function labeled "selectionSort" to sort the input using the technique said
	
	cout << "\n\nAfter using selection or bubble sort...\n\n" << "Sorted data: ";
	display(arr, number);	// Calls the function labeled "display," this time with sorted data thanks to the last called function
	
	_getch();
	return 0;
}
