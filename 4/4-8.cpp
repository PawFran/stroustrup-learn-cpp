#include "../std_lib_facilities.h"

int main() {
    
    int limit_1 = 1000;
    int limit_2 = 1000000;
    int limit_3 = 1000000000;

    bool print_limit_1 = true;
    bool print_limit_2 = true;

    for (int i=1; pow(2, i) < limit_3; i++) {
        if (pow(2, i) > limit_1) {
            if (print_limit_1) {
                cout << "2^" << i << " is greater than " << limit_1 << "\n";
                print_limit_1 = false;
            }
        }

        if (pow(2, i) > limit_2) {
            if (print_limit_2) {
                cout << "2^" << i << " is greater than " << limit_2 << "\n";
                print_limit_2 = false;
            }
        }

        int next = i + 1;
        if (pow(2, next) > limit_3) {
            cout << "2^" << next << " is greater than " << limit_3 << "\n";
        }
    }
    
    cout << "\npress any key to exit...";
    cin.ignore();
    cin.get();
    return 0;
}
