#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double cosApprox(int, int);
double fac(double); //calculate factorial

int main()
{
    int x = 0, n = 0;
    cin >> x >> n;
    cout << fixed << setprecision(15)
         << "cos(x) by cmath: " << cos(x) << endl
         << "Taylor series approximation:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << i << ' ' << cosApprox(x, i) << endl;
    }
    return 0;
}

double cosApprox(int x, int n)
{
    double result = 0.0;
    for (int i = 0; i <= n; i++) //perform Taylor series approximation
    {
        result += pow(-1, i) / fac(2 * i) * pow(x, 2 * i);
    }
    return result;
}

double fac(double n)
{
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
