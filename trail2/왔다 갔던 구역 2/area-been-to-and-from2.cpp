#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int x1,x2;
    int stepSize;
    char dir;
    int currPos=1001;
    int visited[2002]={};
    
    for(int i=0; i<N; i++){
        cin>>stepSize>>dir;
        if(dir=='R'){
            x1=currPos;
            x2=currPos + stepSize;
            currPos=x2;
        }
        else{
            x1=currPos - stepSize;
            x2=currPos;
            currPos=x1;
        }
        
        for(int j=x1; j<x2; j++){
            visited[j]++;
        }
    }
    
    int cnt=0;
    for(int i=0; i<=2001; i++){
        if(visited[i]>=2) cnt++;
    }
    cout<<cnt;

    return 0;
}