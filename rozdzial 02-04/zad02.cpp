#include <iostream>
///Modify the program above to ask the user to enter floating-point values
/// and store them in double variables. Compare the outputs of the two pro-
/// grams for some inputs of your choice. Are the results the same? Should
/// they be? Whatâs the difference?

using namespace std;

int main()
{
    double val1, val2;
    cout << "Enter the first value!" << endl;
    cin >> val1;
    cout << "Enter the second value!" << endl;
    cin >> val2;

    if (val1 > val2){

        cout<< " First value is bigger than second value"<< endl;
    }
    else{
         cout<< " Second value is bigger than first value"<< endl;
    }
    cout<< " The sum of values is: "<< val1+ val2<< endl;
    cout<< " The difference between values is: "<< val1 - val2<< endl;
    cout<< " The product between values is: "<< val1 * val2<< endl;
    if (val2 > 0.0){
    cout<< " The product between values is: "<< val1 / val2<< endl;
    }
    else{
        cout<< " Error ! You can't divide by 0 !!"<<endl;
        return 1;
    }

    return 0;
}
