#include<iostream>

int main() {
    int Arr[100], n, i, small, large;
    std::cout << "Enter number of elements you want to insert: "; std::cin >> n;

    for (i = 0; i < n; i++) {
        std::cout << "Enter element: " << i + 1 << ":"; std::cin >> Arr[i];
    }

    small = Arr[0]; large = Arr[0];

    for (i = 1; i < n; i++) {
        if (Arr[i] < small){ small = Arr[i]; }
        if (Arr[i] > large){ large = Arr[i];}
    }
    std::cout << "\nLargest is: " << large << ", Smallest is: " << small;
    return 0;
}
