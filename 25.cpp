#include <iostream>
using namespace std;

int addbyone(int &xref);

int main()
{
    int x = 100;
    int y = addbyone(x);
    printf("x=%d\n", x);
    return 0;
}

int addbyone(int &xref)
{
    xref++;
    printf("xref=%d\n",xref);
    return xref;
}

