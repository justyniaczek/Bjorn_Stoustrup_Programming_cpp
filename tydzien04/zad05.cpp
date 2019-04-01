#include "std_lib_facilities.h"

using namespace std;

int main()
{while (cin) {
        string y;
        cin >> y;
        stringstream ss {y};
        ss.unsetf(ios::dec);
        int liczba;
        ss>>liczba;
        cout<< showbase;
        if(y[0]=='0'){
            if(y[1]=='x'){
               cout<< hex<<liczba <<"hexadecimal converts to: "<< dec<< liczba;
            }
            else{
                cout<< oct<< liczba<< " octadecimal converts to: "<< dec<< liczba;
            }
        }

        else{

          cout<< liczba<< "decimal converts to: "<< dec<< liczba;
        }

    }
    return 0;
}
