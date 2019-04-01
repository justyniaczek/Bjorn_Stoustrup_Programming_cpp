#include <iostream>
#include "std_lib_facilities.h"

using namespace std;

void counter_ints(istream& ist, vector<int>& v){

    for (int i; ist >> i; ) v.push_back(i);
    if (ist.eof()) return;
    else{ist.clear();
    string discard;
    ist >> discard;
    counter_ints(ist, v);}
}

int main()
try{
    int ile=0;
    cout<< " Wpisz nazwe pliku\n";
    string fname;
    cin>> fname;
    ifstream ist {fname};
    if(!ist) error(" Blad przy otwieraniu pliku");

    vector<int> ints;
    counter_ints(ist, ints);

    for(int i=0; i< ints.size();i++){
            ile=ile+ints[i];
    }

    cout<< "Suma int  w w tekscie to: "<< ile<< endl;

    return 0;
}
catch(exception& e){
cerr<< "Error:"<< e.what()<<endl;
}
catch(...){
cerr<< " Unkown error"<<endl;
}
