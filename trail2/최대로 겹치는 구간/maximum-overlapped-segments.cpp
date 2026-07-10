#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int visited[202]={};
    int x1,x2;
    int max_val=0;
    for(int i=0; i<N; i++){
        cin>>x1>>x2;
        x1+=100;
        x2+=100;
        for(int j=x1; j<x2; j++){
            visited[j]++;
            if(visited[j]>max_val){
                max_val=visited[j];
            }
        }
    }
    cout<<max_val;

    return 0;
}