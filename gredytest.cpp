#include<iostream>
#include<conio.h>
using namespace std;

class activity
{
public :
    int id;
    int start_time;
    int finish_time;

};

int main()
{
    activity a[100];
    int n;
    cout<<"Enter the number of Activity : " ;
    cin>>n;
    int id,s_time,f_time;
    for(int i = 0; i<n ; i++)
    {
        cout<<"ID : ";
        cin>>id;
        cout<<"start Time : ";
        cin>>s_time;
        cout<<"Finish time : ";
        cin>>f_time;
        a[i].id=id;
        a[i].start_time=s_time;
        a[i].finish_time=f_time;

    }
    cout<<endl<<endl;
    cout<<"********* There are All Activity Details *********  ";
    for(int i = 0;i<n;i++)
    {
        cout<<endl;
        cout<<">>ID : "<<a[i].id<<endl;
        cout<<"Start time : "<<a[i].start_time<<"   ";
        cout<<"Finish time : "<<a[i].finish_time;
    }
    activity value;
    for(int j=1;j<n;j++)
    {
        value = a[j];
        int hole = j;

        while(hole>0 && a[hole-1].finish_time>value.finish_time)
        {
            a[hole] =a[hole-1];
            hole--;
        }
        a[hole]=value;
    }




    getch();
}
