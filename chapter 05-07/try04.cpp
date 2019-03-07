#include <iostream>

using namespace std;

int main()
try{
    cout<< " Input two positive values: "<<endl;
    int x, y ;
    cin>> x;
    cin>> y;
    if(x <0 || y<0)error("Wrong values !")
   else (cout<<x << y);
    return 0;
}

///COMPILER RESPONDS THAT 'ERROR' WAS NOT DECLARED IN THIS SCOPE
///COMPLIER RESPONDS " EXPECTED CATCH AT THE END OF INPUT "
