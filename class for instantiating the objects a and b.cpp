#include <iostream>

using namespace std;
class ccs1
{
 private:
    int x,y;
 public:
    static int  a;
    ccs1():x(0),y(0){};
  void  get_data()
    {
        cout<< "enter the x and y of  " << ++a << " class"<<endl;
        cin>> x>>y;
    }
    friend void add (ccs1,ccs1);
    friend void sub (ccs1,ccs1);
    friend void mult (ccs1,ccs1);
    friend void div (ccs1,ccs1);
};
int ccs1:: a;


void add (ccs1 a, ccs1 b)
{
    cout<< "sum is :"<<a.x+b.x<<","<<a.y+b.y<<endl;
}
void sub (ccs1 a,ccs1 b )
{
      cout<< "substraction is :"<<a.x-b.x<<","<<a.y-b.y<<endl;
}
void mult (ccs1 a,ccs1 b)
{
    cout<< "multiplaction is :"<<a.x*b.x<<","<<a.y*b.y<<endl;
}
void div (ccs1 a,ccs1 b)
{
    cout<< "division is  :"<< (float) (a.x/b.x)<<","<< (float) a.y/b.y<<endl;
}

int main()
{
    ccs1 p,q;
    p.get_data();
    q.get_data();
    add(p,q);
    sub (p,q);
    mult (p,q);
    div (p,q);
    return 0;
}

