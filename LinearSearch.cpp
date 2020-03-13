#include<iostream>
using namespace std;

void Linear_Search(int A[],int length,int item)  // Linear Search or Sequential search.
{
    int flag = 1, i;
    for(i=0;i<length-1;i++)
    {
        if(A[i]==item)
        {
            flag = 0;
            cout<<"Search is Successful.";
        }
    }
    if(flag==1)
        cout<<"Item not found.";
}

int main()
{
    int B[]={1,2,3,4,5,6,7,8,9,100,95,93,67};
    Linear_Search(B,13,10);
    return 0;
}

