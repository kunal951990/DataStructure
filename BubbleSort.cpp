#include<iostream>
using namespace std;

void BubbleSort(int A[],int length);

int main()
{
    int B[] = {23,21,34,65,43,12};
    BubbleSort(B,6);
    for(int i=0;i<6;i++)
        cout<<B[i]<<" ";
    return 0;
}

void BubbleSort(int A[],int length)
{
    for(int round=0;round<length;round++)
        for(int j=0;j<length-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }


}
