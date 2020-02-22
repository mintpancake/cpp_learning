#include <iostream>
using namespace std;

int main()
{
    int yNum = 0, zNum = 0;
    int yShowed = 0, zShowed = 0; //count how many ys and zs showed
    bool mode = false;            //whether to print y or z
    cin >> yNum >> zNum;
    for (int i = 0; i < (yNum + zNum); i++)
    {
        if (yShowed == yNum) //check if all ys have been showed
        {
            mode = true;
        }
        else if (zShowed == zNum) //check if all zs have been showed
        {
            mode = false;
        }
        if (mode == false)
        {
            cout << 'y';
            yShowed++;
        }
        else if (mode == true)
        {
            cout << 'z';
            zShowed++;
        }
        mode = !mode;
    }
    cout << endl;
    return 0;
}
