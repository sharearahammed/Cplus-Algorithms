#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int arr[]= {1,12,100,2,5,3,10};
    int i,j,size =7;
    for(i = 0; i<size-1 ; i++)
    {
        for(j = 0; j<size-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;

            }

        }

    }
    cout<<"After sorting : "<<endl;
    for(i=0 ; i < size; i++)
    {
        cout<<"  " <<arr[i];
    }
    cout<<endl;


    getch();
}
