#include <iostream>
//Abdullah Shahriar
//February 17, 2018

using namespace std;


void bubble_sort(int arr[],int n)
{
    int min_index,swp;

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swp;
            }
        }
    }

    for(int k=0; k<n; k++)
    {
        cout << arr[k] << endl;
    }
}

int main()
{
    int arr[]= {4,2,3,0,6,9,17,54,12};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,arr_size);


    return 0;
}
