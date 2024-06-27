#include <iostream>
#include <cstdlib>

void selection_sort(int array[], int SIZE); // prototype

using namespace std;

int main()
{
    const int SIZE = 5;
    int array[SIZE];

    for (int i = 0; i < SIZE; i++)
    { // loop to get user input numbers
        cout << "Enter numbers : ";
        cin >> array[i];
    }

    cout << "User entered : " << endl;

    for (int i = 0; i < SIZE; i++)
    { // loop to output user entered numbers

        cout << array[i] << " ";
    }

    selection_sort(array, SIZE); // function call

    cout << endl;
    cout << "After sort : " << endl;

    for (int x : array)
    {
        cout << x << " "; // outputs numbers in ascending order
    }

    return 0;
}

void selection_sort(int array[], int SIZE) // function definition
{
    for (int i = 0; i < SIZE - 1; i++)
    {
        int min_index = i; // sets min indes to i
        for (int j = i + 1; j < SIZE; j++)
        {
            if (array[j] < array[min_index])
            {
                // sets min index to j if found less
                min_index = j;
            }
        }
        if (min_index != i) // for sorting numbers in ascending order
        {
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }
}