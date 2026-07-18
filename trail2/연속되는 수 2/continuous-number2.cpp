#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int cnt=1;
    int max_cnt=1;
    int a[1001]={};
    int val;
    for(int i=0; i<N; i++){
        cin >> val;
        a[i]=val;

        if(i>0){
            if(a[i]==a[i-1]){
                cnt++;
                if(cnt>max_cnt) max_cnt=cnt;
            }
            else cnt=1;
        }
    }

    cout << max_cnt;

    return 0;
}