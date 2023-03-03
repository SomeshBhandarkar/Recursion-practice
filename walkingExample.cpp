#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void walk(int src, int dest){
    cout << "src : " << src << " " << "dest: " << dest << endl;
    // base case 
    if(src == dest){
        cout << "reached!" << endl;
        return;
    }
    // processing 
    src++;
    // recurrance relation 
    walk(src, dest);
}
int main()
{
    int src = 0;
    int dest = 10;
    
    walk(src, dest);
    return 0;
}