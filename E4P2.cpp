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

void swapping(int &x, int &y)	{	// Function responsible for swapping variables a and b
	int temp;	// Temporary storage for value
	temp = x;
	x = y;
	y = temp;
}

void display(int *array, int size)	{	// Function responsible for 
	for(int a = 0; a < size; a++)	{
		cout << array[a] << " ";
	}
}

void selectionSort(int *array, int size)	{	// Function responsible for selection sorting
	int a, b, minimum;
	for(int a = 0; a < size - a; a++)	{ // Loop responsible 
		minimum = a;	// Get index of minimum data
		for(int b = a + 1; b < size; b++)
			if(array[b] < array[minimum])
			minimum = b;
		swap(array[a], array[minimum]);	// Swaps the value of the two parameters
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
