#include <iostream>
using namespace std;

int main()
{
  int x = 0;
  cin >> x;
  if (x % 2 == 1 || x % 2 == -1)
    cout << x << " is odd" << endl;
  else
    cout << x << " is even" << endl;
}
