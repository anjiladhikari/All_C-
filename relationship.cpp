#include <iostream>

using namespace std ;
class testing
{
private :
    int a ;
    const int b ;
public :
    testing () : b (10)
    {
        a = 20;
    }

    void show  () const // constant function
    {
        //cout << ++a ;
        cout << b<<endl;

    }
    void display ()
    {
        cout << ++a<<endl ;
        //cout << ++b;
    }


};

int main()
{
    const testing t1;
    testing t2 ;
    t1.show();//constant object calling constant function
  //  t1.display();//constant object calling non constant function
    t2.show();//non constant object calling constant function
    t2.display();//non constant object calling non constant function



    return 0;
}
