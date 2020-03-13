// sum of n Concecutive numbers

#include<iostream>
using namespace std;

int sumof(int a, int b);

int main()
{
    cout<<sumof(1,10);
    return 0;
}

int sumof(int a, int b)
{
    if (b>=a)
        return(sumof(a,b-1)+b);
}
