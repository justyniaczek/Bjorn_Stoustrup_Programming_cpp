#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<string> words;
    for (string word; cin >> word; )
        words.push_back(word);

    vector<string> dislikes = { "mleko", "ser", "komputer" };
    for (string word : words) {
        bool bad = false;

        for (string awful : dislikes) {
            if (word == awful)
                bad = true;
        }
    if (bad)
        cout << "BEEP!"<<endl;
    else
        cout << word << endl;
    return 0;
}
