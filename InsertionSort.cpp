#include<iostream>
using namespace std;

void InsertionSort(int A[],int length)
{
    for(int i=1;i<length;i++)
    {
        int Min=i;
        for(int j=i-1;j>=0;j--)
        {
            if(A[Min]<A[j])
            {
                int temp=A[Min];
                A[Min]=A[j];
                A[j]=temp;
                Min=j;
            }
        }
    }
}

int main()
{
    int B[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    InsertionSort(B,20);
    for(int k=0;k<20;k++)
    {
        cout<<B[k]<<" ";
    }
}

