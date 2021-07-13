//Binary Search
#include <iostream>
using namespace std;
int main(void)
{
    int n; 
    cout<<"Enter the length of the array: ";
    cin>>n;
    int a[n]; //sorted array of n integer elements
    cout<<"Enter the elements of the array in sorted order"<<endl;
    int i = 0;
    while(i < n)
    {
        cin>>a[i];
        i++;
    }
    int elt; //element to be searched in the array
    cout<<"Enter the element to be searched: ";
    cin>>elt;
    int start = 0;
    int end = n - 1;
    while(start <= end)
    {
        int mid = start + ((end - start) / 2);
        if(elt > a[mid])
        {
            start = mid + 1;
        }
        else if(elt < a[mid])
        {
            end = mid - 1;
        }
        else
        {
            cout<<"Elt exists in the array(0 indexed) at index "<<mid<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Elt doesn't exist in the array"<<endl;
    return 0;
}
