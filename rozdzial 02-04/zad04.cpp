#include "../text_lib/std_lib_facilities.h"



int main()
{
    char twoj_wybor = ' ';
    char komputer = 'k';
    char wynik = ' ';

    cout << "Wybierz kamien - k ; papier - p; nozyce - n\n";
    cin>>twoj_wybor;

       // komputer = losowanie(twoj_wybor, 100);
        cout<< " Wybor komputera : " << komputer << '\n';
        switch (twoj_wybor) {
            case 'k':
                if (komputer == 'k')
                    wynik = 'r';
                else if (komputer == 'p')
                    wynik = 'p';
                else if (komputer == 'n')
                    wynik = 'w';
                break;
            case 'p':
                if (komputer == 'k')
                    wynik = 'w';
                else if (komputer == 'p')
                    wynik = 'r';
                else if (komputer== 'n')
                    wynik = 'p';
                break;
            case 'n':
                if (komputer == 'k')
                    wynik = 'p';
                else if (komputer == 'p')
                    wynik = 'w';
                else if (komputer == 'n')
                    wynik = 'r';
                break;

        }
        switch (wynik) {
            case 'w':
                cout << "Wygrywasz!\n"<<endl;
                break;
            case 'p':
                cout << "przegrana"<<endl;
                break;
            case 'r':

                cout << "Remis !"<<endl;
                break;

            default:
                break;
        }
    return 0;
}
