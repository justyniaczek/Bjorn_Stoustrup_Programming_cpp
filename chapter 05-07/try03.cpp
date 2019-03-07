#include "std_lib_facilities.hpp"


using namespace std;
int area(int length, int width) {
    if (length<=0 || width <=0) error(" non-positive area() argument");
    return length*width;
}
int framed_area(int x, int y) {
    int frame_width = 2;
    if(x - frame_width<=0|| y-frame_width<=0)
        error(" non-positive area() argument called by framed_area()");
    return area(x- frame_width,y-frame_width);
}

int main()
try{
    cout << "Enter two values: " << endl;
    int x, y;
    cin>> x;
    cin>> y;
    int area1= area(x,y);
    cout<< "Area1: "<< area1<<endl;
    int area2;
    area2 = area(2, 10);
    cout<< "Area2 for values 2, 10 : " <<area2<<endl;
    double ratio1 = (double)area1/area2;
    cout<< "Ratio of area1 and area2: " << ratio1;

    return 0;
}
catch(exception &e){
    cerr<<"Error:" << e.what()<<endl;
}
catch(...){
    cerr<<" Oops.. Something is wrong."<<endl;
}
