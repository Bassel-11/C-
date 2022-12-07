#include<iostream>

using namespace std;
int main() {
    short secretNum = 14;
    short guess;
    char c;

    cout<<"Lets play a game "<<endl<<"u will try to guess a number "<<endl<<"that is easy right ;) "<<endl;
    cout<<"press y if you want to play or no if you dont want"<<endl;
    cin>>c;
    short cont=1;

    if (c=='y' or c=='Y' ) {
        cout<<"wow u got some balls now lets start "<<endl;
        while (true) {
            cout << " Enter guess: ";
            cin >> guess;

            if (cont==3) {
                cout << "okay okay i will help u the square root for this number is 4 + the first odd number after 1 "
                     << endl;
            }
            if (cont==7) {
                break;
            }

            if (guess == secretNum) {
                break;
            } if (guess != secretNum) {
                cout << "Try again :( " << endl;
                cont++;
                continue;
            }

        }
        if (cont == 7) {
            cout<<"sorry u reached maximum number of guesses Soooo u lost :P";
        }
        if (guess == secretNum) {
            cout << "You Win :) ";
        }
    }
    else if (c=='n' or c=='N')
        cout<<"okay u was going to lose anyway :-P ";

    return 0;
}


