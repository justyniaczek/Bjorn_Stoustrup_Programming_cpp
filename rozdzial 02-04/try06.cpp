#include <iostream>

using namespace std;

int main()
{
    double yen_to_dollars= 0.009028;
    double euro_to_dollars = 1.141625;
    double pounds_to_usd = 1.33054;

    double value =1;
    char unit = ' ';
     cout<< "Please enter a currency followed by a unit (y - yen; e- euro; p - pounds):\n";
    cin>> unit;
     if(unit == 'y'){
        cout<< " Enter the value"<<endl;
        cin>> value;
        cout<< " Yen -> Dollars:  "<<value * yen_to_dollars<<endl;
     }
    else if(unit== 'e'){
        cout<< " Enter the value"<<endl;
                cin>> value;

        cout<< " Euro -> Dollars: "<<value * euro_to_dollars<<endl;
    }
    else if( unit== 'p' ){
        cout<< " Enter the value"<<endl;
                cin>> value;

        cout << " Pounds -> Dollars:  "<<value * pounds_to_usd<<endl;
    }
    return 0;
}
