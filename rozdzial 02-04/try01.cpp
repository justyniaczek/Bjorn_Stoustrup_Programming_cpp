#include <iostream>

using namespace std;

int main()
{
    double age;
    int months;
    string name;
    cout << "Please enter your name !" << endl;
    cin>> name;
        cout << "Please enter your age !" << endl;
    cin>> age;
    months = age *12;
    age= months/12.;
    cout<< " Enter your name in months"<<endl;

    cout<< " Hi "<< name<< " you have "<< months<<" months"<<endl;
    cout<< "You are " << age << " years old"<<endl;
    return 0;
}
