#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool linearSearch(int *arr, int key, int n){
    if(n == 0) return false;
    if(arr[0] == key) return true;
    else{
        bool remainingPart = linearSearch(arr + 1, key, n - 1);
        return remainingPart;
    }
}
int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int key = 10;
    int n = 6;
    bool ans = linearSearch(arr, key, n);
    if(ans)cout<<"found"<<endl;
    else cout <<"not found"<<endl;
    return 0;
}