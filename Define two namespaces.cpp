#include <iostream>
using namespace std;
 namespace square
 {
  int num ;

double fun ( double ) ;

 }

 namespace cube
 {
     int num ;

 double fun (double);
 }

int main()
{
    cout<<"enter the number for square"<<endl;
    cin>>cube::num;
    cout<<"enter the number for cube"<<endl;
   cin>>square::num;

   square :: fun(cube::num);
   cube  :: fun(square::num);
    return 0;
}
double square :: fun(double a)
{

    a = num * num ;
    cout << "the square of a number which is given to cube function is  ::" <<a << endl;
}
double cube :: fun(double a)
{

    a = num * num *num ;
    cout <<"the cube of a number which is given to square function is  ::"<< a <<endl;
}

