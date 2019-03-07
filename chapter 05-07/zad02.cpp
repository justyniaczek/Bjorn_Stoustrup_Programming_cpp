#include <iostream>
#include <vector>

using namespace std;

int main() {

    try {
        int ile;
        cout<< "Please enter the number of values you want to sum:"<<endl;
        cin>> ile;
        vector<int> numbers;
        cout<<  "Please enter some integers (press '|' to stop):" <<endl;
        for(int x; cin >> x; ){
            numbers.push_back(x);
            if(x == '|') break;
        }
        int sum=0;
        if (numbers.size() < ile)
        cout<<"Wprowadziles zbyt malo wartosci !\n";
        for( int i=0; i< ile ;i++){
             sum+=numbers[i];
        }
        cout<< "Suma "<< ile << " pierwszych liczb wynosi:  "<<sum<<endl;

		return 0;
	}
	catch (out_of_range) {
		cerr << "error: Out of range !" << '\n';
		return 1;
	}
	catch(exception& e) {
    cerr << "Error: " << '\n';
    return 2;
}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 3;
	}
	return 0;
}
