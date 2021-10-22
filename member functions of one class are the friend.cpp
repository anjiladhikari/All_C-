#include <iostream>

using namespace std;
class ccs2;//PRE DECLERATION
class ccs1
{
 private:
    int x , y ;
 public:
    ccs1(): x(0) ,y(0) {} ;
void get_data()
    {
        cout<< "enter the x and y of 1st class"<<endl;
        cin>> x>>y;
    }
   void add (ccs1 , ccs2 );
   void sub (ccs1 ,ccs2 );
   void mult (ccs1 ,ccs2 );
   void div (ccs1 ,ccs2 );
} ;
class ccs2
{
 private:
    int x,y;
 public:
    ccs2():x(0),y(0) {};
void get_data()
    {
        cout<< "enter the x and y of 2nd class"<<endl;
        cin>> x>>y;
    }

   friend class ccs1;
};

void ccs1 :: add (ccs1 a, ccs2 b)
{
    cout<< "sum is :"<<a.x+b.x<<","<<a.y+b.y<<endl;
}
void ccs1 :: sub (ccs1 a,ccs2 b )
{
      cout<< "substraction is :"<<a.x-b.x<<","<<a.y-b.y<<endl;
}
void ccs1 :: mult (ccs1 a,ccs2 b)
{
    cout<< "multiplaction is :"<<a.x*b.x<<","<<a.y*b.y<<endl;
}
void ccs1 :: div (ccs1 a,ccs2 b)
{
    cout<< "division is  :"<< (float) (a.x/b.x)<<","<< (float) a.y/b.y<<endl;
}

int main()
{
    ccs1 p;
    p.get_data();
    ccs2 q;
    q.get_data();
    p.add(p,q);
    p.sub (p,q);
    p.mult (p,q);
   p.div (p,q);
    return 0;
}

