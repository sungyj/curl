#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int n=N;
    int num_bin[30]={};
    int cnt=0;
    while(true){
        if(n<2){
            num_bin[cnt] = n;
            break;
        }

        num_bin[cnt] = n%2;
        n = n/2;
        cnt++;
    }

    for(int i=cnt; i>=0; i--){
        cout << num_bin[i];
    }

    return 0;
}