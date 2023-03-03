#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool palidrome(int i, string &s)
{
    if(i>=s.size()/2){
        return true;
    }
    if(s[i] != s[s.size()-i-1]){
        return false;
    }
    return palidrome(i+1, s);
}

int main()
{
    string s = "somesh";
    cout << palidrome(0, s) << endl;
    return 0;
}