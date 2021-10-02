//first repeating element
#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{

    int min = -1;

    set<int> s;

    for (int i = n - 1; i >= 0; i--)
    {

        if (s.find(arr[i]) != s.end())
            min = i;

        else
            s.insert(arr[i]);
    }

    if (min != -1)
        cout << "element at " << arr[min];
    else
        cout << " no repeating elements";
}
int main()
{
    int arr[] = {10, 5, 3, 4, 3, 5, 6};

    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
}