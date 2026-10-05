#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 2, 2, 8, 3};
    int n = 5;
    int max = 8;

    cout << "Given Array : ";
    for(int i = 0; i < n; i++)
        {
        cout << arr[i] << " ";
        }
    cout<<endl;

    int count[9] = {0};

    for(int i = 0; i < n; i++)
        count[arr[i]]++;

    int index = 0;

    for(int i = 0; i <= max; i++)
    {
        while(count[i] > 0)
        {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
