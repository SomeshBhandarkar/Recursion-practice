#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool f(int ind, int arr[],vector<int> v, int s, int sum, int n ){
    if(ind >= n){
        // this is the condition satisfied!!
        if(s == sum){
            for(auto it: v)cout << it << " ";
            cout << endl;
            return true;
        }
        return false;
    }

    // take/pick logic -- >

    v.push_back(arr[ind]);
    s+=arr[ind];
    if(f(ind+1, arr, v, s,sum, n) == true){
        return true;
    }
    s-=arr[ind];
    v.pop_back();

    // not take / pick if the take recursive call doesn't give any answer -- >

    if(f(ind+1, arr, v, s, sum, n) == true)return true;

    return false;
}
int main()
{
    int n=3;
    int arr[] = {1,2,3};
    vector<int> v;
    int sum = 2;
    int s = 0;
    f(0, arr, v, s, sum, n); 
    return 0;
}