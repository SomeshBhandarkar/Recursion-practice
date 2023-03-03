#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printFunc(int ind,vector<int> &ds, int arr[], int n){
    if(ind >= n){
        for(auto it: ds){
            cout << it << " ";
        } cout << endl;
        return;
    }

    // take or pick the particular index in to the subsequence
    ds.push_back(arr[ind]);
    printFunc(ind+1, ds, arr, n);
    ds.pop_back();

    // not take or not pick the element which is not to be added in your subsequence 
    printFunc(ind+1, ds, arr, n);
}
int main()
{
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    printFunc(0,ds, arr, n);
    return 0;
}