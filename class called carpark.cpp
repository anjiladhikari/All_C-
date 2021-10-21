#include <iostream>

using namespace std;
class carpart
{
    int car_id,  charge_per_hour ;
    float time;
public:
    void set_data()
    {
        cout << " enter the car ID    ";
        cin >> car_id ;
        cout << " enter the  time you had parked  ";
        cin >>  time  ;
        cout << " enter  cost of per hour parked   "<<endl;
        cin >>  charge_per_hour ;
    }
   void  show_data ()
    {

        cout << "car ID :"<<car_id<<endl<<"time of parked:"<<time<<endl<< "charge per hour cost is: "<<charge_per_hour<<endl<<"total cost is:"<< (charge_per_hour*time)<<endl;

    }
};

int main()
{
    carpart s1;
    s1.set_data();
    s1.show_data();
    return 0;
}
