#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[] = {4,2,6,5,9,45,100};
    int size = 7;
    for(int i = 0 ; i < size ; i++)
    {
        int min_index = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
    }
    cout<<"Sorting array : "<<endl;
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"  "<<arr[i];
    }



    getch();
}
