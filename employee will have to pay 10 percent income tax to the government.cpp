#include <iostream>

using namespace std;

inline void shownetsal (long);

int main()
{
    long salary ;

    cout << "Enter your salary"<< endl;
    cin >> salary;
    shownetsal( salary);

}
void shownetsal(long  salary)
{
     float tax ;
    tax = salary * 0.1 ;
    salary = salary - tax ;
    cout << "your net salarry is "<< salary<<endl<<"tax taken by government is "<< tax<<endl;
}
