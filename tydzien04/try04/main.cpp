#include "std_lib_facilities.h"

using namespace std;

struct Point{
    int x;
    int y;
};
/*
void fill_from_file(vector<Point>& points, string& name)
{
    ifstream ist {name};
    ist.exceptions(ist.exceptions()|ios_base::badbit);

    if (!ist) error("can't open input file ", name);
    for (Point p; ist >> p; )
        points.push_back(p);
}*/
int main()

try{
    cout << "Please enter input file name:" << endl;
    string iname;
    cin>> iname;
    ifstream ist{iname};
    if(!ist) error(" Can't open the file", iname);
    vector<Point> original_points;

    cout<< " Enter 7 (x,y) pairs";
    for( int i=0; original_points.size()<7; i++){
        Point p;
        cin >> p;
        original_points.push_back(p);

    }
      for (Point p : original_points){
        cout << p;
        cout << '\n';}

    cout << "Please inter name of output file: ";
    string oname;
    cin>> oname;
    ofstream ost{oname};
    ostream ost{oname};
    if(!ost) error("can't open output file", oname);
    for( int p :original_points)
        ost<< "(" <<p.x<<','<<p.y<<")\n";

    return 0;
}
catch( exception&e){
    cerr<< " error"<< e.what()<<endl;
}
catch(...){
    cerr<<" Opps.. error"<< endl;
}

