#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

double hexagon_area(double a){

double area = (3* pow(a, 2)* sqrt(3))/2;
cout<< "Powierzchnia szeciokata: "<<area;
return area;
}

int main()
{
    double a;
    cout<< " Wpisz dlugosc boku szesciokata: "<<endl;
    cin>> a;
    hexagon_area(a);
    return 0;
}
