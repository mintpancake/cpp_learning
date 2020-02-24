#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    char s = '\000', c = '\000';
    cin >> s >> k;
    if (s == 'd')
    {
        k = -k;
    }
    while (true)
    {
        cin >> c;
        if (c == '!')
        {
            cout << c;
            break;
        }
        if (!(c >= 65 && c <= 90 || c >= 97 && c <= 122))
        {
            cout << c;
            continue;
        }
        if (c >= 65 && c <= 90)
        {
            c = (((c - 65 + k) % 26) + 26) % 26 + 97;
            cout << c;
        }
        else
        {
            c = (((c - 97 + k) % 26) + 26) % 26 + 65;
            cout << c;
        }
    }
    cout << endl;
    return 0;
}
