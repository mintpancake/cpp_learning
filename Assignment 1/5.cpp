#include <iostream>
#include <limits>
using namespace std;

int main()
{
    double xMax = numeric_limits<double>::lowest(),
           yMax = numeric_limits<double>::lowest(),
           xMin = numeric_limits<double>::max(),
           yMin = numeric_limits<double>::max(),
           xAABB = 0.0, yAABB = 0.0, widthAABB = 0.0, heightAABB = 0.0;
    char type = '\000';
    while (true)
    {
        cin >> type;
        if (type == 'R')
        {
            double x = 0.0, y = 0.0, width = 0.0, height = 0.0;
            cin >> x >> y >> width >> height;
            if ((x + width / 2) > xMax)
            {
                xMax = x + width / 2;
            }
            if ((x - width / 2) < xMin)
            {
                xMin = x - width / 2;
            }
            if ((y + height / 2) > yMax)
            {
                yMax = y + height / 2;
            }
            if ((y - height / 2) < yMin)
            {
                yMin = y - height / 2;
            }
        }
        else if (type == 'C')
        {
            double x = 0.0, y = 0.0, radius = 0.0;
            cin >> x >> y >> radius;
            if ((x + radius) > xMax)
            {
                xMax = x + radius;
            }
            if ((x - radius) < xMin)
            {
                xMin = x - radius;
            }
            if ((y + radius) > yMax)
            {
                yMax = y + radius;
            }
            if ((y - radius) < yMin)
            {
                yMin = y - radius;
            }
        }
        else if (type == 'P')
        {
            int n = 0;
            double x = 0.0, y = 0.0;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cin >> x >> y;
                if (x > xMax)
                {
                    xMax = x;
                }
                if (x < xMin)
                {
                    xMin = x;
                }
                if (y > yMax)
                {
                    yMax = y;
                }
                if (y < yMin)
                {
                    yMin = y;
                }
            }
        }
        else if (type == '#')
        {
            break;
        }
    }
    xAABB = (xMin + xMax) / 2;
    yAABB = (yMin + yMax) / 2;
    widthAABB = xMax - xMin;
    heightAABB = yMax - yMin;
    cout << xAABB << ' ' << yAABB << ' ' << widthAABB << ' ' << heightAABB << endl;
    return 0;
}
