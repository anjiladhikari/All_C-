#include <iostream>

using namespace std;
void temp_set( int *a, int*b);

int main()
{
    int temp1,temp2;
    cout << "enter the value of two temp"<<endl;
    cin >> temp1 >> temp2 ;
    temp_set(&temp1 , &temp2 ) ;

    cout << temp1<<endl<<temp2;

}

 void temp_set(int &temp1, int  &temp2 )
{int *a,*b;
  if (temp1>temp2)
  {
    a= & temp1 ;
    a= 100 ;
  }
  else
  b= & temp2 ;
  b= 100;

}
