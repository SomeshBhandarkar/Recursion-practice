#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0; // count to see how many small numbers are present than pivot 
    for(int i=s+1; i<=e; i++){
        if(arr[i] < pivot){
            cnt++;
        }
    }

    // placing pivot at right place 
    int pIndex = s + cnt;
    swap(arr[s], arr[pIndex]);

    int i=s, j=e;
    while(i<pIndex && j>pIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pIndex && j>pIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pIndex;
}
void quickSort(int arr[], int s, int e){
    // base case
    if(s >= e){
        return;
    }

    // partition ->
    int p = partition(arr, s, e);
    // recursive relation 
    // left sort first -> 
    quickSort(arr, s, p-1);

    // right part ->
    quickSort(arr, p+1, e);
}
int main() 
{
    int arr[] = {3,1,10,4,6,2,9};
    int n=7;
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}