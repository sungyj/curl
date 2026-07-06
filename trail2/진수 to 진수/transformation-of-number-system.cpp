#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    string N;
    cin>>A>>B>>N;

    int nA=0, nB=0;
    for(int i=0; i<N.length(); i++){
        nA = nA*A + N[i]-'0';
    }

    nB=nA;
    int cnt=0;
    int digit[20];
    while(true){
        if(nB<B){
            digit[cnt]=nB;
            break;
        }
        digit[cnt++]=nB%B;
        nB/=B;
    }

    for(int i=cnt; i>=0; i--){
        cout << digit[i];
    }


    return 0;
}