#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{

//#####################################################################

	// VECTOR 1
	
	// declaring and initializing vector type and values
	vector<double> vectorName = { 1, 2, 4, 6 };

	// for loop and declaring iterator variable
	// iterator variable i inititalize to the beginning of the vector
	for(vector<double>::iterator i = vectorName.begin();

		// initializing i to stop at the end of the vector and to increment the i variable
		i != vectorName.end(); i++)

		{
			// pointing to the i vector
			// cout << *i << endl;
			
		}
	// pointing to the 3rd index of vectorName
	// cout << vectorName[2] << endl;

//#####################################################################

	// VECTOR 2
	
	// declaring and ititializing vectorName2 with string variables
	vector<string> vectorName2 = { "A", "List", "of", "strings" };

	// for loop to declare and initialize an iterator variable to vectorName2
	// assigning i to the beginning of vectorName2
	for(vector<string>::iterator i = vectorName2.begin();

		// iterator is not equal to the end of the vector; and increment iterator variable until end
		i != vectorName2.end(); i++)

		{
			// pointing to the iterator variable
			// to print out all of the iterated variables
			// cout << *i << endl;
		}
	// pointing to the 3rd index of vectorName2
	// cout << vectorName2[2] << endl;

//#####################################################################

	// VECTOR 3

	// declaring and initializing listOfInt vector
	vector<int> listOfInt = { 665, 2345, 4965, 3 };

	// for loop to assign n variable to each element in vector
	// assigning n equal to the beginning of listOfInt
	for(vector<int>::iterator n = listOfInt.begin();

		// assigning n NOT equal to the end of the vector
		n != listOfInt.end(); n++)

		{
			// pointing to all n elements in vector
			//cout << *n << endl;
		}

	// pointing to 2 separate elements and subtracting the interger values
	// cout << listOfInt[0] - listOfInt[2] << endl;

//#####################################################################

	// VECTOR 4

	vector<float> practiceVector = { 20.45, 24.55, 99.45, 23.66 };

	for (vector<float>::iterator element = practiceVector.begin();
		element != practiceVector.end(); element++)

		{
			cout << *element << endl;
	
		}
		
	float x=20.45; 

	if(find(practiceVector.begin(),practiceVector.end(), x) != practiceVector.end())
	{
		cout << "Welp, found it!" << endl;
	} else {
		cout << "something went wrong" << endl;
	}
}
