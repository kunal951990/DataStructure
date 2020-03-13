#include<iostream>
using namespace std;

void Binary_Search(int A[],int length,int item)  // Binary Search
{
    int l,u;
    l=0; u=length-1;
    while(l<=u)
    {
        int m=(l+u)/2;
        if(item==A[m])
        {
            cout<<"Search is successful.";
            return;
        }
        else if(item>A[m])
            l=m+1;
        else
            u=m-1;
    }
    cout<<"Item not found.";
}

int main()
{
    int B[]={1,2,3,4,5,6,7,8,9,10,95,97,99};
    Binary_Search(B,13,95);
    return 0;
}

