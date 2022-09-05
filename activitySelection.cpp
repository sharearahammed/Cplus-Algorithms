#include <iostream>
#include<conio.h>
using namespace std;

class activity
{
public:
    int id;
    int start_time;
    int finish_time;

};


int main()
{
    activity a[100];
    int n;
    cout<<"Enter the number of activity : ";
    cin>>n;

    cout<<"Enter activities details : ";
    cout<<" "<<endl;
    int id,s_time,f_time;

    for(int i = 0; i<n; i++)
    {

        cout<<"ID: ";
        cin>>id;
        cout<<"Start time: ";
        cin>>s_time;
        cout<<"Finish time: ";
        cin>>f_time;
        a[i].id = id;
        a[i].start_time = s_time;
        a[i].finish_time =f_time;

    }
    cout<<endl<<endl;
    cout<<"********* There are All activity Details *********  ";
    for(int i=0; i<n; i++)
    {

        cout<<endl;
        cout<<"Activity "<<i+1<<endl<<"Details : "<<endl;

        cout<<"ID :"<<a[i].id<<endl;

        cout<<"Start time :"<<a[i].start_time;

        cout<<"  Finish Time :"<<a[i].finish_time;
    }
    cout<<endl<<endl<<endl;
    cout<<"********* All activity Details are Sorted by Finish Time*********  ";
    cout<<endl;

    activity value;

    for(int j = 1 ; j < n ; j++)
    {
        value = a[j];
        int hole = j;
        while(hole>0 && a[hole-1].finish_time>value.finish_time)
        {
            a[hole]=a[hole-1];
            hole--;
        }

        a[hole]=value;
    }


    for(int i=0; i<n; i++)
    {

        cout<<endl;
        cout<<"Activity "<<i+1<<endl<<"Details : "<<endl;

        cout<<"ID :"<<a[i].id<<endl;

        cout<<"Start time :"<<a[i].start_time<<"    ";

        cout<<" Finish Time :"<<a[i].finish_time;
    }

    cout<<endl;
    cout<<endl<<endl;
    cout<<"********Activity Selection******** " <<endl;


    int activity_id[100];
    activity_id[0]= a[0].id;
    int track=0;
    int current=0;

    for(int i = current; i<n; i++)
    {
        while(a[current].finish_time <= a[i+1].start_time && i+1<n)
        {
            track ++ ;
            activity_id[track] = a[i+1].id;
            current = i+1;
            break;
        }
    }

    cout<<endl<<endl;
    //cout<< "track = " << treak << " and current = " << current << '\n';
    cout << "The list of activity id is: " ;
    for(int i=0; i<=track ; i++)
    {
        cout <<activity_id[i]<<' ';
    }


    getch();

}



