#include <iostream>

using namespace std;
int area(int x, int y){
return x*y;
}
int main()
{

   cout << "int x0 = arena(7);  error: undeclared function; complier responds:  error: 'arena' was not declared in this scope" <<endl;
    cout << "int x1 = arena(7);  error:  wrong number of arguments;\n complier responds - error: too few arguments to function int area(int,int) "<<endl;
    cout << "int x2 = arena('seven',7); error: 1st argument has a wrong type; \ncomplier responds -  error: invalid conversion from 'const char *' to int' "<<endl;
    cout<< "Int x3 = area(7,4); error: Int is not a type"<<endl;
    return 0;
}
