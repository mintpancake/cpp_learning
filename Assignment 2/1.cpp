#include <iostream>

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------

//   Write your function definitions here






//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
	const int SIZE = 8;
	int arr1[SIZE]{};
	int arr2[SIZE]{};
	int arr3[SIZE]{};

	// read and store three list of integers to arr1, arr2, arr3
	// each array is of size given by SIZE
	read_lists(arr1, arr2, arr3, SIZE);

	// display all integers that appear in every one of the three arrays
	// arr1, arr2, arr3
	// each array is of size given by SIZE
	display_common_integers(arr1, arr2, arr3, SIZE);

	return 0;
}
