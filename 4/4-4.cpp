#include "../std_lib_facilities.h"

int mean_floor(int x, int y) {
    return (x + y) / 2;
}

int main() {
    cout << "Think of a number between 0 and 100\n"; 

    // FOR TEST CHECK 71

    int min = 0;
    int max = 100;

    int current_guess = mean_floor(min, max); 
    
    bool correct = false;
    string greater = "n";

    while (!correct) {
        if (max == min) {
            cout << "Your number is " << max << "!";
            correct = true;
        }
        else {
            cout << "Is your number greater than " << current_guess << " (y/n) ? ";
            cin >> greater;
            if (greater == "y") {
                cout << "greater\n";
                if (current_guess + 1 == max)
                    min = max; // think min=max+1
                else 
                    min = current_guess;
            }
            else {
                cout << "smaller\n";
                max = current_guess;
            }
            current_guess = mean_floor(min, max);
            cout << "max: " << max << " min: " << min << " current guess: " << current_guess << "\n";
        }
    }

    cout << "\npress any key to exit...";
    cin.ignore();
    cin.get();
    return 0;
}
