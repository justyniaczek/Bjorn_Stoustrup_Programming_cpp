#include "std_lib_facilities.hpp"

using namespace std;

int factorial(int x){
    long int silnia =1;
    for(int i=x;i>1;i--){
            silnia*=i;
    }
return silnia;
}

int permutation( int x, int y){
    int silnia_x, silnia_c, c, wynik;
    c=x-y;
    silnia_x= factorial(x);
    silnia_c = factorial(c);
    wynik = silnia_x/silnia_c;
    cout<< "Permutation P ( x, y ) =  "<<wynik<<endl;

    return wynik;
}

int combination(int x, int y){
    int licznik =permutation(x,y);
    int mianownik = factorial(y);
    int c = licznik / mianownik;
    cout<< "Combination C( x, y ) = "<< c<<endl;
return c;
}

int main()
 try {
    long int x,y;
    char wybor;
    cout << "This program computes permutation and combination. Enter two values  "<<endl;
    cin>>x;
    cin>>y;
    if(x< 0|| y<0)error("Bad values, input positive values");

    cout << "Choose permutation ( p) or combination (c)"<<endl;
    cin>> wybor;

    switch(wybor){
    case('p'):
        permutation(x,y);
        break;
    case('c'):
       permutation(x,y);
       break;
    default:error("Bad input  !");
    break;
    }

cout<< "Computation ended succesfully !"<<endl;
return 0;
    }
catch(exception &e){
    cerr<< " Error !!"<< e.what()<<endl;
    return 1;
    }
    catch(...){
    cout<< " OOPS, something went wrong.."<<endl;
    }
