#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int size;
    cout << "Enter  size of the array: ";
    cin >> size;

    vector<int> arr(size); // Creating vector that will have a array depending on size

    cout << "enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // Sorting the array here using sort

    cout << "Sorted array in ascending order: "; // Outputting the finial array (sorted)
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}