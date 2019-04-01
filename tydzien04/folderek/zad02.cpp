#include <iostream>
#include <fstream>
#include "std_lib_facilities.h"


using namespace std;
void merged(ifstream& ifs, vector<string>& v)
{
    ifs.exceptions(ifs.exceptions()|ios_base::badbit);
    for (string s; ifs >> s; ) v.push_back(s);
    if (ifs.eof()) return;
}
int main()
try{
    cout<< " Otwieram plik 1\n";
    string iname;
    cin>> iname;
    ifstream ist {iname};
   // if(!ist) error(" Blad przy otwieraniu pliku")<<endl;
    cout<<"Otwieram plik 2\n";
    string iname2;
    cin>> iname2;
    ifstream ifs{iname2};
  //  if (!ist) error(" Blad przy otwieraniu pliku")<<endl;

    vector<string> merge_words;

     merged(iname, merge_words);
     merged(iname2, merge_words);

      for (string w : merge_words){
        cout << w << " "<<endl;}

}
catch(exception& e) {
    cerr << "Error: " << e.what();
    return 1;
}
catch(...) {
    cerr << "oops.\n";
    return 2;
}
