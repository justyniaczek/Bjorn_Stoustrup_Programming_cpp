#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the name of the person you want to write to\n";
	string first_name;	// first_name is a variable of type string
	cin >> first_name;	// read characters into first_name
	cout << "Dear, " << first_name << "!\n";
	cout<< "How are you? I am fine. I miss you. I'm in Gdansk right now, I really enjoy it"<<endl;
	cout << "Enter the name of your friend to\n";
	string friend_name;	// first_name is a variable of type string
	cin >> friend_name;
	cout<< "Have you seen  "<< friend_name<< " lately?"<<endl;
	char friend_sex = 0;
		cout << "Enter sex of your friend (m - male ; f- female\n"<<endl;
		cin>> friend_sex;
    if(friend_sex == 'm'){
        cout <<"If you see " << friend_name << " please ask him to call me" <<endl;
    }
    else if(friend_sex == 'f'){
        cout <<"If you see " << friend_name << " please ask her to call me" <<endl;
    }
    int age;
    cout<< "Enter age of your friend"<<endl;
    cin>> age;
    if (age <0 || age >110){
        cout<< " Are you kidding"<<endl;

    }
    else{
        cout<< "I hear you just had a birthday and you are "<<age<<" years old"<<endl;
    }

	if (age == 17 ){
            cout<< " In next year you can vote"<<endl;

	}
	else if( age <12){
      cout<<"  Next year you will be"<< age+1<<endl;
	}
	else if ( age >70){
        cout<< " I hope you enjoying your retirement"<<endl;
}
cout<< "Yours sincerely \n\n\n\n"<< endl;

return 0;}
