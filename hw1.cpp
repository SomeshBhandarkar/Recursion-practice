// input ->
// arr = {3,2,5,1,6}
// output -> give the sum of the array elements;

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int getSum(int *arr, int n){
    if(n == 0)return 0;
    if(n == 1)return arr[0];
    int remainingPart =  getSum(arr + 1, n - 1);    
    int ans = arr[0] + remainingPart;
    return ans;
}

int main()
{
    int arr[5];
    int n = 5;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << endl;
    cout << "answer is: " << ans << endl;

    return 0;
}