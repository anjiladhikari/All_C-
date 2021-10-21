#include <iostream>

using namespace std;

class employee
{
    int employee_id ,year;
    float total_bonus, total_overtime ;
public:
    void set_para(int id,float bonus,float overtime,int yr)
    {
        id=employee_id;
        bonus= total_bonus;
        overtime=total_overtime;
        yr = year;

    }
     void display_report()
     {
         cout<<" Employee with"<< employee_id<<" has received Rs :"<<total_bonus<<"as bonus and "<<endl;
         cout<<"  had worked  hours as a over time in  year"<<year<<endl;
     }
};

int main()
{

    int n;

    cout<<"Enter number of employees:- "; cin>>n;

     employee e[n];

int eid,yr; float bons,overt;

cout<<"Enter the following information of employees "<<endl;

for(int i = 0;i<n;i++){

cout<<"Employee Id:- "; cin>>eid;

cout<<"Bonus:- "; cin>>bons;

cout<<"Over Time:- "; cin>>overt;

cout<<"Year:- "; cin>>yr;

e[i].set_para(eid,bons,overt,yr);

}

cout<<endl<<"REPORT "<<endl;

for(int i = 0;i<n;i++){

e[i].display_report();

}

return 0;

}
