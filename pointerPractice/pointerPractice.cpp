#include <iostream>
#include <iomanip>


void swapping_values(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
	return;
}

int main ()
{
	int swap_1 = 5;
	int swap_2 = 10;

	// before pointer swap
	std::cout << "Column 1" << std::setw(15) << "Column 2" << std::endl;
	std::cout << swap_1 << std::setw(15) << swap_2 << std::endl;

	// initializing pointer values
	int* value_1;
	int* value_2;

	// assigning pointers to values
	value_1 = &swap_1;
	value_2 = &swap_2;

	// swapping the 2 value function
	swapping_values(value_1, value_2);

	std::cout << "\n\nSwapped Columns:" << std::endl;

	// after pointer swap
	std::cout << "Column 1" << std::setw(15) << "Column 2" << std::endl;
	std::cout << swap_1 << std::setw(15) << swap_2 << std::endl;

	return 0;
}