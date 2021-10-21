#include <iostream>

using namespace std;

float salary_change (double=18000 , float=0.12);

int main()
{
    double sal_Chief_executive=35000 ,sal_Information_officer=25000 , sal_System_analyst= 24000 ,sal_Programmer=18000 ,a;

   float Chief_inc = 0.9 , inc_Information_officer = 0.10,inc_sal_System_analyst = 0.12,inc_sal_Programmer = 0.12;

  a= salary_change (sal_Chief_executive  , Chief_inc);

   cout << "the monthaly salary of the Chief executive officer is :: "<< a<<endl;

   a=salary_change (sal_Information_officer  , inc_Information_officer);
cout << "the monthaly salary of the information officer  is :: "<< a<<endl;
  a= salary_change (sal_System_analyst );
cout << "the monthaly salary of the system analyst is :: "<< a<<endl;
  a= salary_change ();
cout << "the monthaly salary of the programmer :: "<< a<<endl;
  return 0;
}

float salary_change (double sum , float inc)
{

    float increased ;
   increased = sum * inc + sum;


  return  increased ;

}
