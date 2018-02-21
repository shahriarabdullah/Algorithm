#include <iostream>
//Abdullah Shahriar
//15th February, 2018

using namespace std;

void selection_sort(int arr[],int n)
{

    int min_index,swp;

    for(int i=0; i<n; i++)
    {
        min_index=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        swp=arr[i]; //swapping values of selected item with minimum item
        arr[i]=arr[min_index];
        arr[min_index]=swp;
    }

    for(int k=0; k<10; k++) //printing sorted array
    {
        cout << arr[k] << endl;
    }

}


int main()
{
    int arr[]= {0,2,8,4,34,5,23,0,22,7}; //unsorted array
    int n=sizeof(arr)/sizeof(arr[0]); //calculating array size


    selection_sort(arr,n);


    return 0;
}
