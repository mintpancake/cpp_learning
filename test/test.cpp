#include <iostream>
#include <sstream>
//#include <string>
using namespace std;

struct aaa
{
    string word;
    int num;
};

int main()
{
    aaa w[100] = {};
    int n = 0;
    istringstream fin("Hello, where are you going to? Are you going to school to … say hello?");
    string s;
    while (fin >> s)
    {
        string s_c = "";
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] >= 'A' && s[i] < 'Z')
            {
                s_c += char(s[i] - 'A' + 'a');
            }
            else if (s[i] >= 'a' && s[i] < 'z')
            {
                s_c += s[i];
            }
        }
        if (s_c == "")
            continue;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (w[i].word == s_c)
            {
                flag = true;
                w[i].num++;
                n--;
            }
        }
        if (flag == false)
        {
            w[n].word = s_c;
            w[n].num = 1;
        }
        ++n;
    }
    for (int i = 0; i < n; i++)
    {
        cout << w[i].word << ' ' << w[i].num << endl;
    }
}
