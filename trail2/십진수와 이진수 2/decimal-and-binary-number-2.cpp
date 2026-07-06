#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string N;
    cin>>N;

    int n10=0;
    for(int i=0; i<N.length(); i++){
        n10 = n10*2 + N[i]-'0';
    }

    n10=n10*17;

    int n2=n10;
    int cnt=0;
    int digit2[20]={};
    while(true){
        if(n2<2){
            digit2[cnt]=n2;
            break;
        }
        digit2[cnt++] = n2%2;
        n2 = n2/2;
    }

    for(int i=cnt; i>=0; i--){
        cout << digit2[i];
    }


    return 0;
}