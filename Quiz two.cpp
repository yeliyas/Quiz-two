#include <iostream>
using namespace std;


int sum(int num[]) {
    int summation = 0;

    for(int i=0; i<5; i++) {
        summation += num[i];
    }
    return summation;
}


double average(int num[]) {
    return sum(num) / 5.0;
}


int multi(int num[]) {
    int multiplication = 1;

    for(int i=0; i<5; i++) {
        multiplication *= num[i];
    }
    return multiplication;
}


int minimum(int num[]) {
    int min = num[0];

    for(int i=0; i<5; i++) {
        if(num[i] < min)
            min = num[i];
    }
    return min;
}


int maximum(int num[]) {
    int max = num[0];

    for(int i=0; i<5; i++) {
        if(num[i] > max)
            max = num[i];
    }
    return max;
}


int ranges(int num[]) {
    return maximum(num) - minimum(num);
}


int main() {
    int num[5];

    cout << "Enter five numbers:" << endl;

    for(int i=0; i<5; i++) {
        cin >> num[i];
    }

    cout << "Sum = " << sum(num) << endl;
    cout << "Average = " << average(num) << endl;
    cout << "Multiplication = " << multi(num) << endl;
    cout << "Minimum = " << minimum(num) << endl;
    cout << "Maximum = " << maximum(num) << endl;
    cout << "Range = " << ranges(num) << endl;

    return 0;
}
    
