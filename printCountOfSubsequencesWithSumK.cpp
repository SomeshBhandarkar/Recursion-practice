#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int f(int ind, int arr[], int s, int sum, int n){
    if(ind >= n){
        if(s == sum){
            return 1;
        }
        return 0;
    }

    // take or pick 

    s += arr[ind];

    int l = f(ind+1, arr, s, sum, n);

    s-=arr[ind];

    // not pick/ not take 
    int r = f(ind+1, arr, s, sum, n);
    return l + r;
}

int main()
{
    int n=3;
    int arr[] = {1,2,1};
    int sum = 2;
    int s = 0;
    cout << f(0, arr,s, sum, n); 
    return 0;
}

// here as there is no need for the vector/data structure you can remove it 
// as we only need to count the number of subsequences 