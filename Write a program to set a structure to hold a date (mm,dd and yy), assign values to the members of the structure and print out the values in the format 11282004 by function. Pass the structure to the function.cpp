#include <iostream>

using namespace std;

struct date
{
    int mm , dd , yy;
};

void show (struct date );

struct date dt ;

int main()
{
    cout << " enter the date  in the formate of the mm/dd/yy "  << endl;
    cin  >> dt.mm >> dt.dd >> dt.yy ;
    show(dt);
}

void show (struct date )
{
cout << "the date is "<< dt.mm <<"/"<< dt.dd<< "/" <<dt.yy;
}
