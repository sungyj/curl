#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,B;
    cin >> N>>B;

    int digit[20]={};
    int cnt=0;

    if (B==4){ // 4진수
        while(true){
            if(N<4){
                digit[cnt]=N;
                break;
            }
            digit[cnt++]=N%4;
            N=N/4;
        }     
    }
    else{   // 8진수
        while(true){
            if(N<8){
                digit[cnt]=N;
                break;
            }
            digit[cnt++]=N%8;
            N=N/8;
        }
    }

    for(int i=cnt; i>=0; i--){
        cout << digit[i];
    }
    return 0;
}