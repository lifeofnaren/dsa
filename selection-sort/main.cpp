// selection sort
#include <iostream>
using namespace std;
int main(void)
{
    int n; 
    cout<<"Enter the length of the array: ";
    cin>>n;
    int a[n]; //array of n integer elements
    cout<<"Enter the elements of the array"<<endl;
    int i = 0;
    while(i < n)
    {
        cin>>a[i];
        i++;
    }
    for(i = 0; i < n; i++) //initially length of unsorted subarray = n, sorted subarray = 0
    {
        int min_index = i; //stores the index of minimum element in the unsorted subarray
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        int temp = a[i]; //in the unsorted subarray, swap the minimum element with the first element
        a[i] = a[min_index];
        a[min_index] = temp;

    }
    cout<<"Sorted Array: ";
    i = 0;
    while(i < n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}
