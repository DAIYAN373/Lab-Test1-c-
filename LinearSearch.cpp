#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 4, 2};
    int n = 5;
    int key;
    int i;

    cout << "Given Array : ";
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    cout << "Enter element to search: ";
    cin >> key;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            cout << "Element found at index: " << i;
            break;
        }
    }

    if(i == n)
        cout << "Element not found";

    return 0;
}
