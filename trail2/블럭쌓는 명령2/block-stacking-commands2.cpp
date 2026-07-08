#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N,K;
    cin>>N>>K;

    int visited[101]={};
    int A_i, B_i;
    for(int i=0; i<K; i++){
        cin>>A_i>>B_i;
        for(int j=A_i; j<=B_i; j++){
            visited[j]++;
        }
    }

    int max_val=0;
    for(int i=0; i<=100; i++){
        if(visited[i]>max_val){
            max_val = visited[i];
        }
    }
    cout << max_val;

    return 0;
}