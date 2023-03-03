#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sayDigits(int n, vector<string> &str){
    // base case 
    if(n == 0){
        return;
    }
    
    // processing 
    int digit = n % 10;
    n /= 10;
    // cout << str[digit] << " "; 
    // recurrance relation 
    sayDigits(n, str);
    cout << str[digit] << " "; 
}
int main()
{
    int n;
    cin >> n;
    vector<string> str = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigits(n ,str);
    return 0;
}