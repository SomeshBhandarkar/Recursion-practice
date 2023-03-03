#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool binarySearch(int *arr, int s, int e, int key){
    //base case  
    if(s>e)return false;

    int mid = s + (e - s) / 2;

    if(arr[mid] == key)return true;

    if(arr[mid] < key){
        return binary_search(arr, mid +  1 , e,  key);
    }
    else{
        return binary_search(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    int key = 6;
    int s = 0;
    int e = n - 1;

    bool ans = binarySearch(arr, s, e, key);

    if(ans)cout << "key found !" << endl;
    else cout << "key not found !" << endl;

    return 0;
}