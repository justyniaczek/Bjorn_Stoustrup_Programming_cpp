#include <iostream>

using namespace std;

int main()
{
    int repeated_words=0;
    string previous=" ";
    string current;
    string words= "She she laughed He He He because what he did did not look very very very good good";
    while(cin>> current){

        if (previous==current){
            cout<< "Repeated word: " << current<< endl;
            repeated_words+=1;
            cout<< "Quantity of repeated words  "<< repeated_words<<endl;

        }
        previous=current;
    }
    return 0;
}
