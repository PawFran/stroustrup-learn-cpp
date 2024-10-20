#include "../std_lib_facilities.h"
#include <conio.h>

double sum(vector<double> v) {
    double temp_sum = 0;
    
    for (int i =0; i<v.size(); i++) {
        temp_sum += v[i];
    }
    
    return temp_sum;
}

double min(vector<double> v) {
    double temp_min = v[0]; // what if v is null ?

    for (int i =1; i<v.size(); i++) {
        if (v[i] < temp_min )
            temp_min = v[i];
    }

    return temp_min;
}

double max(vector<double> v) {
    double temp_max = v[0]; // what if v is null ?

    for (int i =1; i<v.size(); i++) {
        if (v[i] > temp_max )
            temp_max = v[i];
    }

    return temp_max;
}



int main() {
    vector<double> distances;
    double temp;

    cout << "type numbers (type anything but number to stop)\n";

    while (cin>>temp) {
        distances.push_back(temp);
    }

    cout << "sum is: " << sum(distances) << " \n";
    cout << "max is: " << max(distances) << " \n";
    cout << "min is: " << min(distances) << " \n";
    cout << "avg is: " << sum(distances) / distances.size() << " \n";

    cout << "press any key to exit...";
    getch();
    return 0;
}
