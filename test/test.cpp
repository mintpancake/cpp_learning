#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a[] = {1, 100};
    int *p = a;
    int *q = a + 1;
    cout << *p << *q << endl;
    swap(p, q);
    cout << *q << *p << endl;
    return 0;
}