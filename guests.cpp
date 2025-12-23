#include <iostream>
using namespace std;

long long calculateArrangements(int guests, int chairs)
{
    long long arrangements = 1;
    for (int i = 0; i < chairs; i++)
    {
        arrangements *= (guests - i); // n! / (n-r)! == (n-1)*(n-2)*(n-3)*(n-4)....*(n-r+1)
    }
    return arrangements;
}

void testArrangements(int test_guests[], int test_chairs[], int size)
{
    for (int i = 0; i < size; i++)
    {
        long long result = calculateArrangements(test_guests[i], test_chairs[i]);
        cout << test_guests[i] << " guests in " << test_chairs[i] << " chairs: " << result << " arrangements" << endl;
    }
}

int main()
{
    int guests[] = {6, 8, 10, 5, 12};
    int chairs[] = {4, 6, 8, 3, 10};
    int size = sizeof(guests) / sizeof(guests[0]);

    testArrangements(guests, chairs, size);

    return 0;
}
