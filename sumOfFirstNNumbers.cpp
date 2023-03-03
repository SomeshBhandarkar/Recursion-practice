#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// this way is of going backwards n to 1 and then get sum of n natural numbers
// void f(int i, int sum){
//     if(i<1) {
//         cout << sum << endl;
//         return;
//     }
//     f(i-1,sum+i);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     f(n,0);
//     return 0;
// }


// now from 1 to n 

int f(int n){
    if(n==0){
        return 0;
    }
    return n + f(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}