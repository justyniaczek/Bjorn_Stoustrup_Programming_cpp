#include <iostream>

using namespace std;

int main()
{
    int birth_year =1997;
    int actual_year =2019;
    cout<< "In decimal: "<<birth_year
    <<"\tIn hexadecimal: " << hex<< birth_year<<" base: "<<dec<<birth_year
    <<"\tIn octal: "<< oct<< birth_year<<" base: "<<dec<< birth_year
    <<"\t Age: "<<dec<<actual_year-birth_year<<endl;
  /*
    int a,b,c;
    cin>> a>> oct>>b>>hex>>c>>d;
    cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;
    */
    double digit = 1234567.89;
    cout<< defaultfloat <<digit<<endl;
    cout<<fixed<<digit<<endl;
    cout<<scientific<<digit;
    cout<< " Najlepsza prezentacja liczby dla przecietnego uzytkownika jest fixed";

    return 0;
}
