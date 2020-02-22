#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, div1 = 0, div2 = 0;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "Divisor 1: ";
    cin >> div1;
    cout << "Divisor 2: ";
    cin >> div2;
    cout << "M " << div1 << ' ' << div2 << endl;
    for (int i = a; i < b; i++)
    {
        cout << i << ' ';
        if (i % div1 == 0)
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
        if (i % div2 == 0)
        {
            cout << '1';
        }
        else
        {
            cout << '0';
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
