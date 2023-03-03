#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isSorted(int *arr, int n){
    //base case ->
    if(n == 0 || n == 1)return true;
    if(arr[0] > arr[1])return false; // because the first position itself is not sorted to the second
    // other cases will be automatically solved by recursion 
    // recurrance relation ->
    else{
        bool ans = isSorted(arr + 1, n - 1);
        return ans;
    }
}
int main()
{
    int arr[7] = {1,2,3,4,5,6,9};
    int n = 7;
    bool ans = isSorted(arr, n);

    if(ans)cout << "array is sorted !" << endl;
    else cout << "array is not sorted !" << endl;
    return 0;
}