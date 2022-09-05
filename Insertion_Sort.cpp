#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int arr[]={3,2,6,4,8,9,45};
for(int i = 1 ; i < 7 ; i++){
    int value = arr[i];
    int hole = i;

    while(hole>0 && arr[hole-1]>value){
        arr[hole] = arr[hole-1];
        hole--;
    }
    arr[hole]=value;
}
cout<<"Sorted array : "<<endl;
for(int i = 0; i < 7; i++){
    cout<<"  "<<arr[i];
}


getch();
}
