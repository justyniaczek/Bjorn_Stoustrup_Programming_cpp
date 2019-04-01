#include "../text_lib/std_lib_facilities.h"

using namespace std;
struct Point{
    int x;
    int y;
};

istream& operator(istream& is, Point& p){
    char char1,char2,char3;
    is >> char1;
    if( char1!='('){
        is.clear(ios_base::failbit);
        cerr<< "B³¹d we wczytywaniu liczb";
        return is;
       }
    int wpolrzedna_x, wspolrzedna_y;
    is >>wspolrzedna_x>>char2>> wspolrzedna_y>>char3;
    if(ch3!=')'){
         is.clear(ios_base::failbit);
        cerr<< "B³¹d we wczytywaniu liczb";
        return is;
    }
    p.x = xx;
    p.y = yy;
    return is;
}

ostream& operator<<(ostream& os, Point& p)
{
    return os <<'('<< p.x << ',' << p.y << ')';
}

void fill_from_file(vector<Point>& points, string& name)
{
    ifstream ist {name};
    ist.exceptions(ist.exceptions()|ios_base::badbit);

    if (!ist) error("can't open input file ", name);
    for (Point p; ist >> p; )
        points.push_back(p);
}
int main()
{
    cout << "Wprowadz 7 wektorow rozpoczynajacych sie i konczacymi nawiasem" << endl;
    vector<Point> original_points;
    for(int i=0; i<7;i++){
        Point p;
        cin>>p;
        original_points.push_back(p)
    }

    for(int i=0; i<original_points.size(); i++){
        cout<<p<<endl;
    }
    string iname="mydata.txt";
    ifstream ost{iname};
    if(!ost)error("Bad opening a file");
    for( Point p: original_points){
        ost <<p;
    }

    ost.close();

    vector<Point> processed_points;

    fill_from_file(processed_points, iname);
    for (Point p : processed_points)
    cout << p;
    cout << '\n';
    if (original_points.size() != processed_points.size())
        cout << "Something wrong";

    return 0;
}
