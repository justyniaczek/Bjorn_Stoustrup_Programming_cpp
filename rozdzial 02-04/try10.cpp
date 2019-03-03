#include <iostream>

using namespace std;
int square(int x){
    int z=0;

    for (int i=1; i<=x;i++){
        z+=x;
    }
    cout<< z<<endl;
    return z;
}
int main()
{   int x;
    cout << "Enter your value!" << endl;
    cin>> x;
    square(x);

    return 0;
}
