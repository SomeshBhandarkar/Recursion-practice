#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int i, int n){
    if(i>n){
        return;
    }
    cout << "somesh" << endl;
    print(i+1, n);
}


int main()
{
    int n;
    cin >> n;
    print(1, n);
    return 0;
}

// T.C --> O(n)
// S.C --> O(n)