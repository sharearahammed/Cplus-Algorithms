#include<iostream>
#include<conio.h>
using namespace std;


void merge (int arr[],int l,int m, int r)
{
    int i = l;
    int j = m+1;
    int k = l;
    int temp[7];
    while(i<=m && j<=r)
    {
        if(arr[i]<arr[j])
        {
            temp [k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp [k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=m)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int p =l; p<=r; p++)
    {
        arr[p]=temp[p];
    }

}



void mergeSort(int arr[],int l, int r)
{
    if(l<r)
    {
        int m =(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }

}



int main()
{
    cout<<"Enter 7 numbers : ";
    int myarr[7];
    for(int i = 0; i < 7; i++)
    {
        cin>>myarr[i];
    }
    cout<<endl;
    cout<<"Before sorting : ";
    for(int i=0; i<7; i++)
    {
        cout<<"   " <<myarr[i];
    }
    cout<<endl;
    cout<<"After Sorting : ";
    mergeSort(myarr,0,6);
    for(int i = 0; i<7; i++)
    {
        cout<<"  "<<myarr[i];
    }




    getch();
}
