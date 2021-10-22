#include <iostream>
using namespace std;
class example
{
private:
    int num;
public:
     static int a ;
    example():num(0){};
void get_data()
{
    cout << " Enter the value of the  "<<++a<<" object "<<endl;
    cin  >> num ;
}
friend bool operator>(example c,example d);
friend bool operator<(example c,example d);
friend bool operator==(example c,example d);
friend bool operator>=(example c,example d);
friend bool operator<=(example c,example d);
friend bool operator!=(example c,example d);


};
int example :: a ;
bool operator>(example c,example d)

 {

        return (c.num > d.num);
}
bool operator<(example c,example d)

 {

        return (c.num < d.num);
}
bool operator==(example c,example d)

 {

        return (c.num ==d.num);
}

bool operator>=(example c,example d)

 {

        return (c.num >= d.num);
}
bool operator<=(example c,example d)

 {

        return (c.num <= d.num);
}
bool operator!=(example c,example d)

 {

        return (d.num != c.num);
}

int main()
{
    example e1,e2,e3;
    e1.get_data();
    e2.get_data();

    if (e1>e2)
    {
        cout << "e1 object number is grater than e2 OBJECT NUMBER"<< endl;
    }
    else
    {
        cout << "e2 object number is GREATER than e1"<< endl;
    }

    if (e1<e2)
    {
        cout << "e2 object number is GRETER  than e1"<< endl;
    }
    else
    {
        cout << "e1 object number is GREATER than e2"<< endl;
    }
   if (e1==e2)
    {
        cout << "e1 object number is equal to  e2 object number"<< endl;
    }
    else
    {
        cout << "e2 object number is NOT EQUAL e1"<< endl;
    }

    if (e1>=e2)
    {
        cout << "e1 object number is grater than e2 or equal"<< endl;
    }
    else
    {
        cout << "e2 object number is GREATER  than e1 OR EQUAL "<< endl;
    }
   if (e1<=e2)
    {
        cout << "e1 object number is less than or equal e2 object number "<< endl;
    }
    else
    {
        cout << "e2 object number is LESS than e1 OR EQUAL"<< endl;
    }
    if (e1!=e2)
    {
        cout << "e1 object number is not equal to  e2 object number "<< endl;
    }
    else
    {
        cout << "e2 object number EQUAL TO  e1OBJECT NUMBER "<< endl;
    }

    return 0;
}
