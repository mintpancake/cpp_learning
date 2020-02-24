#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    char s = '\000', c = '\000';
    cin >> s >> k;
    if (s == 'd')
    {
        k = -k; //change sign according to s
    }
    while (true)
    {
        cin >> c;
        if (c == '!')
        {
            cout << c;
            break;
        }
        if (!(c >= 65 && c <= 90 || c >= 97 && c <= 122)) //whether c is an letter
        {
            cout << c;
            continue;
        }
        if (c >= 65 && c <= 90) //whether c is a uppercase letter
        {
            c = (((c - 65 + k) % 26) + 26) % 26 + 97; //transform c
            cout << c;
        }
        else //c is a lowercase letters
        {
            c = (((c - 97 + k) % 26) + 26) % 26 + 65; //transform c
            cout << c;
        }
    }
    cout << endl;
    return 0;
}
