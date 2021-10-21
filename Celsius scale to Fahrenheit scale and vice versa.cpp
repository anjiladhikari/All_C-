#include <iostream>

using namespace std;

class Celsius
{
private:
    int temp_in_c;

public:
    float toFahrenheit(int temp)
    {
        temp_in_c = temp ;
        float a;
        a= temp*(9.0/5.0) + 32.0 ;
        return a;
    }

 };

class fahrenheit
{
private:
    int temp_in_f;

public:
    float tocelsius (int temp)
    {
        float a ;
        temp_in_f = temp ;
        a = (temp - 32.0 )* (5.0/9.0);
        return a ;
    }
};

int main()
{
    Celsius temp1 ;
    int temp3 ;

    cout << "enter the value in celsius " ;
    cin>> temp3 ;
    cout<<"the temp of celsius in the fahrenhiet is "<<temp1.toFahrenheit(temp3)<<endl;

    fahrenheit temp2;
    int temp4 ;
    cout << "enter the value in fahrenheit" ;
    cin >> temp4 ;
    cout <<"the temp of fahrenhiet in the celsius is "<<temp2.tocelsius(temp4) ;
    return 0 ;

}
