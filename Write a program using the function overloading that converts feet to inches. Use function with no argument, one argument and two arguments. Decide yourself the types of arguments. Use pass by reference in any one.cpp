#include <iostream>

using namespace std;
void convert ();
void convert  (float);
void convert (float , float );
int main()
{
    float feet,converted_to_inch;
   cout << "Enter the feet" << endl ;
    cin>> feet;
    convert(feet);
    converted_to_inch =feet*12;
    convert (feet , converted_to_inch );
    return 0;
}
void convert (float infeet)
{
    float in_inch;
   in_inch = infeet * 12 ;
    cout << "in inch is :"<<in_inch<<endl;
}
void convert (float income , float converted )
{
   cout<<"the inch of given feet is ::"<< converted;
}
