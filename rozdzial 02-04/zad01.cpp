#include <iostream>

///Write a program that prompts the user to enter two integer values. Store
/// these values in int variables named val1 and val2. Write your program to
/// determine the smaller, larger, sum, difference, product, and ratio of these
/// values and report them to the user.

using namespace std;

int main()
{
    int val1, val2;
    cout << "Enter first value!" << endl;
    cin >> val1;
    cout << "Enter second value!" << endl;
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
    if (val2 > 0){
    cout<< " The product between values is: "<< val1 / val2<< endl;
    }
    else{
        cout<< " Error ! You can't divide by 0 !!"<<endl;
        return 1;
    }

    return 0;
}
