#include <iostream>

using namespace std ;

class Time
{
private:
     int hour,minute,second;
public:
    Time () //constructor
    {
        hour=6;
        minute=10;
        second=30;

    }
void get()
{
        cout<<"Enter the time"<<endl;
        cout<<"Hour: ";
        cin>>hour;
        cout<<"Minutes: ";
        cin>>minute;
        cout<<"Seconds: ";
        cin>>second;
}
  Time add (Time);


void display ()
{
    cout << "hour is :" << hour<<endl<< "minutes is : "<<minute<<endl<< "second is :" << second << endl ;
}
  ~ Time () {} ;
};

Time Time :: add (Time t2)
{
    second += t2.second;
    minute += (second/60)+t2.minute;
    hour   +=(minute/60) +t2.hour;
    second  = second%60;
    minute  = minute%60;
    return *this ;
}


int main()
{
    Time t1,t2,t3;
    t2.get();
    t3 = t1.add(t2);
    t3.display();



    return 0;
}
