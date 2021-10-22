#include <iostream>

using namespace std;
//class co2;
class co1
{
private:
    int x,y,z;
public:
   co1():x(0),y(0),z(0){};
   void get_data()
   {
       cout<< "enter the value of x y z of 1st coordinate "<<endl;
       cin>> x>>y>>z;
   }

   friend co1 operator +(co1,co1);
};

 co1 operator +(co1 a,co1 b)
 {
     cout << "sum is :"<<(a.x+b.x)<< ","<< a.y+b.y<< ","<< a.z+b.z <<endl;

 }
int main()
{
    co1 obj1,obj2,obj3;
    obj1.get_data();
    obj2.get_data();
    obj3 = obj1+obj2;
    return 0;
}
