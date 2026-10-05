#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5, 8}; // Sorted array
    int n = 5;
    int key;

    cout << "Given Array : ";
    for(int i = 0; i < n; i++)
        {
        cout << arr[i] << " ";
        }
        cout<<endl;

    cout << "Enter element to search: ";
    cin >> key;

    int low = 0, high = n-1, mid;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            cout << "Element found at index: " << mid;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(low > high)
        cout << "Element not found";

    return 0;
}
