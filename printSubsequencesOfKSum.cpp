#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void f(int ind, int arr[], vector<int> &v, int n,int s, int sum){
    if(ind >= n){
        if(s == sum){
            for(auto it:v){
                cout << it << " ";
            }cout << endl;
        }
        return;
    }

    // take/pick logic -- >
    v.push_back(arr[ind]);
    s+=arr[ind];

    f(ind+1, arr, v, n, s, sum);

    v.pop_back();
    s-=arr[ind];
    
    // not take/ not pick logic -- >
    f(ind+1, arr, v, n, s, sum);
}
int main()
{
    int n;
    cout << "enter the size: " << endl;
    cin >> n;
    int sum;
    cout << "enter the sum: " << endl;
    cin >> sum ;
    int s = 0;
    int arr[] = {1,2,1};
    vector<int> v;
    f(0, arr, v, n, s,sum);
    return 0;
}