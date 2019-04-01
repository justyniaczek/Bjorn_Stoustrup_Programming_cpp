#include "std_lib_facilities.h"

using namespace std;

int main()
{
    double liczba= 1234567.89;
    cout << defaultfloat<<setprecision(9)<<liczba<<"\t"
        <<fixed<<liczba<<"\t"
        <<scientific<<liczba<<endl;
        cout<< "Najbardziej przyjaznym zapisem dla uzytkownika jest defaultfloat - przecietnemu uzytkownikowi nie bedzie odpowiadal zapis naukowy"<<endl;
    return 0;
}
