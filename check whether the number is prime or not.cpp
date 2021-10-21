#include <iostream>

using namespace std ;

class prime_num
{
    int num ;
public :
   void prime_ch ()
    {
        char a  ;
        int i  ,flag = 0 ;


        do{
            cout<< "enter the number " ;
            cin >> num;
            for(i=2; i<=num/2; ++i)
    {

        if(num%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
      cout<< "is a prime number."<<endl;
    else
        cout<<" is not a prime number."<<endl;



            cout << "if you want add any others number then type y  if not type any key"<<endl;
            cin >> a ;
        }while ( a == 'y') ;


    }
};

int main()
{
    prime_num a ;
    a.prime_ch() ;

}
