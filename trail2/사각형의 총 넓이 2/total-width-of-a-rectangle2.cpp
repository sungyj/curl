#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;
    bool visited[201][201]={};
    int x1,x2,y1,y2;
    
    for(int i=0; i<N; i++){
        cin>>x1>>y1>>x2>>y2;
        x1+=100;
        y1+=100;
        x2+=100;
        y2+=100;

        for(int x=x1; x<x2; x++){
            for(int y=y1; y<y2; y++){
                visited[x][y]=1;
            }
        }

    }
    
    int cnt=0;
    for(int r=0; r<201; r++){
        for(int c=0; c<201; c++){
            if(visited[r][c]==1)cnt++;
        }
    }
    cout<<cnt;


    return 0;
}