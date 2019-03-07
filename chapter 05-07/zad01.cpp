#include "std_lib_facilities.hpp"
#include <vector>
using namespace std;

int main()

    try{
    ///1 ERROR: Cout << "Success!\n";
    cout<< "1: Success!\n"<<endl;

    ///2 ERROR: cout << "Success!\n;
    cout<< "2: Success!\n"<<endl;

    ///3 ERROR: cout << "Success" << !\n"
    cout<< "Success!\n";

    ///4 ERROR: cout << success << '\n';
     cout<< "4: Success!\n";
    ///5 ERROR: string res ="7";
    string res ="SEVEN";

    ///5 ERROR: vector<int> v(10); v[5] = res;
     vector<string> v(10); v[5] = "res"; cout << "Success!\n";

    ///6 ERROR: vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
     vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";

    ///7 ERROR: if (cond) cout << "Success!\n"; else cout << "Fail!\n";
    if (cin) cout << "Success!\n"; else cout << "Fail!\n";

   /// 8 ERROR:  bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
   bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";

    /// 9 ERROR:  string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
      string s = "ape"; string c = "fool"; if (c.lenght()>s.length()) cout << "Success!\n";

  ///10 ERROR: string s = "ape"; if (s=="fool") cout << "Success!\n";
   string s = "ape"; if (s=="ape") cout << "Success!\n";

  ///11  ERROR: string s = "ape"; if (s=="fool") cout < "Success!\n";
   string s = "ape"; if (s=="ape") cout << "Success!\n";

  ///12 ERROR: string s = "ape"; if (s+"fool") cout < "Success!\n";
  string s = "ape"; if (s=="ape") cout << "Success!\n";

  ///13  ERROR: vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
vector<char> v(5); for (int i=0; i<v.size(); i++)  cout << "Success!\n";

///14 ERROR: vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
 vector<char> v(5); for (int i=0; i<v.size(); ++i)  cout << "Success!\n";

 ///15 ERROR: string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
string s = "Success!\n"; for (int i=0; i<s.length(); ++i) cout << s[i];

///16  ERROR: if (true) then cout << "Success!\n"; else cout << "Fail!\n";
 if (true)  cout << "Success!\n"; else cout << "Fail!\n";

///17 ERROR: x int x = 2000; char c= static_cast<char>(x); cout<< c;if (c==2000) cout << "Success!\n";
int x = 2000; int c= x;  if (c==2000) cout << "Success!\n";

 /// 18 ERROR string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
  string s = "Success!\n"; for (int i=0; i<s.length(); ++i) cout << s[i];

 /// 19 ERROR: vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
  vector<int> v(5); for (int i=0; i<v.size(); ++i)  cout << "Success!\n";

 /// 20 ERROR: int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
 int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";

 /// 21 ERROR int x = 2;double d = 5/(x– 2);if (d==2*x+0.5) cout << "Success!\n";
 double x = 2;double d = 5/(x - 1);if (d==2*(x+0.5)) cout << "Success!\n";

/// 22  ERROR: string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
string s = "Success!\n";for (int i=0; i<=s.length(); ++i) cout << s[i];

///23  ERROR: int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
int i=0; int j=0; while (i<10) ++i; if (j<i) cout << "Success!\n";

///24 ERROR int x = 4;int y = x-2;double d = 5/y;if (d==2*x+0.5) cout << "Success!\n";
double x = 4; double d = 5/ (x-1);if (d!=2*(x+ 0.5)) cout << "Success!\n";

 ///25 ERROR cin << "Success!\n";
cout << "Success!\n";

    return 0;
}
catch (exception &e){
    cerr<< "error: " <<e.what()<<endl;
    return 1;
}
catch(...){
    cerr<< " OOPS "<<endl;
    return 2;
}
