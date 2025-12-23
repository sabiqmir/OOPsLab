#include <iostream>

int main()
{
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0)
    {
        std::cout << "Invalid number of elements!" << std::endl;
        return 1;
    }

    int arr[n];
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    std::cout << "The largest element is: " << largest << std::endl;

    return 0;
}
