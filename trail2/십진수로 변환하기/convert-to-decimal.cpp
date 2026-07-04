#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string A;
    cin>>A;

    int num=0;
    for(int i=0; i<A.length(); i++){
        num=num*2 + A[i]-'0';
    }
    cout << num;

    return 0;
}