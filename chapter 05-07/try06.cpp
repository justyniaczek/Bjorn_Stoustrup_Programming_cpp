#include <iostream>

using namespace std;

int main()
{
    double sum =0;
     double high_temp = 70.7;
     double low_temp= -98.6;
    int no_of_temps = 0;

    cout<< " Input temperatures: "<<endl;
    for (double temp; cin>> temp; ){
        ++no_of_temps;
        sum +=temp;
        if(temp >high_temp) high_temp = temp;
        if(temp<low_temp) low_temp = temp;
    }
    cout<< "High temperature: "<< high_temp <<endl;
    cout<< "Low temperature: "<< low_temp<< endl;
    cout<< " Average temperature: "<< sum/no_of_temps<<endl;

    return 0;
}
