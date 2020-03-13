#include<iostream>
using namespace std;

void BubbleSort(int A[],int length);

int main()
{
    int B[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    BubbleSort(B,20);
    for(int i=0;i<20;i++)
        cout<<B[i]<<" ";

    cout<<endl;
    int C[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,20,19};
    BubbleSort(C,20);
    for(int i=0;i<20;i++)
        cout<<C[i]<<" ";
    return 0;
}

void BubbleSort(int A[],int length)
{
    int flag=0;
    for(int rounds=0;rounds<length;rounds++)
    {
        flag=0;
        for(int j=0;j<length-1;j++)
        {
            if(A[j]>A[j+1])
            {
                flag=1;
                int temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
        }
        if(flag==0)
        {
            cout<<"Number Of Rounds: "<<rounds<<endl;
            return;
        }
    }


}

