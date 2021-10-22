#include <iostream>

using namespace std;

class date
{
private :
    int year,month,day;
public :
    date (): year (0),month(0),day (0){};
    void set_date ()
    {
        cout << "Enter date yyyy-mm(1 to 12)-dd(1 to 31)"<<endl;
        cin >>year>>month>>day ;
    }
     void data ()
    {
        cout << "the date yyyy-mm-dd  is:"<<endl;
        cout << "year:" <<year<<endl<< "month:" <<month<<endl<<"day is :"<<day <<endl;
    }
   date operator ++()
    {

        ++ day ;
        ++ month;
        ++year;

    }
     void date_after_pre ()
    {
        cout << "the date yyyy-mm-dd after pre increment is:"<<endl;
        if (day>30)
        {
           month ++ ;
        }
        if( month > 12)
        {
           year ++;
        }
        day =day%30;
       month =month%12;
        cout << "year:" <<year<<endl<< "month:" <<month<<endl<<"day is :"<<day <<endl;
    }
    void operator ++(int )
    {
        day++ ;
        month++;
     year ++;


    }

     void date_after_post ()
    {
        cout << "the date yyyy-mm-dd after post increment is:"<<endl;
        if (day>30)
        {
           month ++ ;
        }
        if( month > 12)
        {
           year ++;
        }
        day =day%30;
       month =month%12;
        cout << "year:" <<year<<endl<< "month:" <<month<<endl<<"day is :"<<day <<endl;
    }

};

int main()
{
    date d ;
    d.set_date();
    d.data();
    ++d ;
    d.date_after_pre();
    d++;
    d.date_after_post ();
    return 0;
}
