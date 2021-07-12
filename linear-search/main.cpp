//Linear Search
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
    int elt; //element to be searched in the array
    cout<<"Enter the element to be searched: ";
    cin>>elt;
    i = 0;
    while(i < n)
    {
        if(elt == a[i])
        {
            cout<<"Elt exists in the given array(0 indexed) at index "<<i<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Elt doesn't exist in the given array"<<endl;
    return 0;
}
