/*Try to compile those examples and see how the complier responds
*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"int s1=area(7; " << "     ) is missing - compiler responds error: expected ')' before ';' token " << endl;
    cout<< "int s2 = area(7) "<< " error ; is missing - complier responds error 'area': was not declared in this scope "<<endl;
    cout<< "Int s3= area(7); " <<" error: Int is not a type - complier responds  error: 'Int' was not declared in this scope" <<endl;
    cout<< "int s4 =area('7); "<<" error: non-terminated character (' missing) - complier responds error: missing terminating ' character" <<endl;
    return 0;
}
