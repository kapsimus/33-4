#include <iostream>

template < typename T >
void input(T array[8])
{
    std::cout << "Fill the array (8):" << std::endl;
    for (int i = 0; i < 8; ++i)
    {
        T number;
        std::cout << "Enter number #" << i + 1 << ": ";
        std::cin >> number;
        std::cin.ignore(100, '\n');
        while (std::cin.fail()) {
            std::cout << "Invalid number." << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cout << "Enter number #" << i + 1 << ": ";
            std::cin >> number;
            std::cin.ignore(100, '\n');
        }
        array[i] = number;
    }
}

template < typename T >
T average(T array[8]) {
    T sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += array[i];
    }
    return static_cast<T>(sum / 8);
}

int main() {
    int array[8];
    input(array);
    std::cout << "Average = " << average(array) << std::endl;
    float array2[8];
    input(array2);
    std::cout << "Average = " << average(array2) << std::endl;
    return 0;
}
