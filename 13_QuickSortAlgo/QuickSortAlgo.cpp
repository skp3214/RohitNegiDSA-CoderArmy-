#include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i] <= arr[end]){  
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quickSort(int arr[], int start, int end)
{
    if(start>end) return;
    int pivot=partition(arr,start,end);
    quickSort(arr,start,pivot-1);
    quickSort(arr,pivot+1,end); // arr[end]=pivot
}

int main(int argc, char const *argv[])
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    quickSort(arr, 0, 8);
    for (int i = 0; i < 9; ++i)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
