#include <iostream>

using namespace std;
class Department_store
{
private:
    int  Department_id ;
    char Department_name ;
public:
    Department_store()
    {
        cout << "constructor is called " << endl ;
        Department_id = 0 ;
        Department_name ;
       // Department_id ++  ;
    }


    void get_data ()
    {
        cout << " enter the name of the department store  "<< endl;
        cin >>  Department_name  ;
        cout << "enter the department id "<<endl; ;
        cin >> Department_id ;
    }

~Department_store()
{

        cout<< "Object n goes out of scope "<<endl;

    }
};
int main()
{
    Department_store d1 ;
    d1.get_data();


}
