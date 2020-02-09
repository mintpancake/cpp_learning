#include <iostream>
using namespace std;

int main()
{
  double sum = 0.0, in;
  int n = 0;
  while (1)
  {
    cin >> in;
    if (in == -1)
      break;
    sum += in;
    n++;
  }
  cout << sum / n;
  return 0;
}
