#include <stdio.h>

const int MAX_INT_LENGTH = 101; // string length for representing 100 digits

///////// DO NOT MODIFY ANYTHING ABOVE THIS LINE /////////


//
// AddTwoBigNumbers: to sum up two big numbers represented as digits in a char clear_char_array
//
// input:  char bigN[], char bigM[]:  two large numbers
// output the sum as a big number in the input array char sum[]
void AddTwoBigNumbers(char bigN[], char bigM[], char sum[])
{

}


///////// DO NOT MODIFY ANYTHING BELOW THIS LINE /////////

// Function: main function
// ==============================================================
int main()
{
  char bignum[2][MAX_INT_LENGTH]; // bignum[0] and bignum[1] are to store the digits of the two input number
  char sum[MAX_INT_LENGTH+1];     // to store the sum of the two big numbers

  // read in two numbers
  scanf("%s", bignum[0]);
  scanf("%s", bignum[1]);

  // calculate sum of the two numbers
  AddTwoBigNumbers(bignum[0], bignum[1], sum);

  // display the sum on screen
  printf("%s\n", sum);


  return 0;
}
