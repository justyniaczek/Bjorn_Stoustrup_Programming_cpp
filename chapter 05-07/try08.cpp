#include <iostream>

using namespace std;

double estimate_speed(double road, double time){
    double speed;
    speed= road/time;
    if (speed> 90){
    cout<< "speed: "<<speed<<endl;
    cout<< "Estimation failed; speed is too big"<<endl;
    return 0;
    }
 if (speed< 90){
    cout<<"speed: "<< speed<<endl;
    cout<< "Estimation succeded; speed looks ok"<<endl;

    return 0;
}
}
double estimate_fly_speed(double road, double time){
    double speed;
    speed= road/time;
    double max_plane_speed =621;
    if (speed> max_plane_speed){
    cout<< "speed: "<<speed<<endl;
    cout<< "Estimation failed; speed is too big"<<endl;
    return 0;
    }
 if (speed< max_plane_speed){
    cout<<"speed: "<< speed<<endl;
    cout<< "Estimation succeded; speed looks ok"<<endl;

    return 0;
}
}
int main()
{
    double NY_to_Denver = 1795.0;
    double London_to_Nice = 869.;
    double time = 15.33;
    double fly_time =3.45;

    cout<< " Driving by car\n Time in hours "<< time<<endl;
    cout<< " Road from NY to Denver (in miles):"<<NY_to_Denver<< endl;
    estimate_speed(NY_to_Denver, time);
    cout<< " Road from London to Nice (in miles) : "<< London_to_Nice<<endl;
    estimate_speed(London_to_Nice, time);

    cout<< "Traveling by plane\n Time in hours: "<< fly_time<<endl;
    cout<< " Road from NY to Denver (in miles):"<<NY_to_Denver<< endl;
    estimate_fly_speed(NY_to_Denver, time);
    cout<< " Road from London to Nice (in miles) : "<< London_to_Nice<<endl;
    estimate_fly_speed(London_to_Nice, time);



    return 0;
}
