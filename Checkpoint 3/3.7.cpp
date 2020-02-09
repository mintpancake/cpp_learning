#include <iostream>
using namespace std;

int main()
{
  int input = 0, a, b, c, d, e;
  cin >> input;
  e = input % 10;
  d = (input % 100) / 10;
  c = (input % 1000) / 100;
  b = (input % 10000) / 1000;
  a = (input % 100000) / 10000;
  cout << a << ',' << b << ',' << c << ',' << d << ',' << e << endl;
  return 0;
}
