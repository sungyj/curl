#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    bool visited[201][201]={};
    for(int i=0; i<N; i++){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        x1+=100;
        y1+=100;
        x2+=100;
        y2+=100;

        for(int x=x1; x<x2; x++){
            for(int y=y1; y<y2; y++){
                if(i%2==0) visited[x][y]=0;
                else visited[x][y]=1;
            }
        }
    }

    int cnt=0;
    for(int x=0; x<200; x++){
        for(int y=0; y<200; y++){
            if(visited[x][y]) cnt++;
        }
    }
    cout << cnt;

    return 0;
}