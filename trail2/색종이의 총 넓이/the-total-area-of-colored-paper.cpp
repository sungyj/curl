#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int N;
    cin>>N;

    int visited[201][201]={};
    int x1,y1;
    for(int i=0; i<N; i++){
        cin >>x1>>y1;
        x1+=100;
        y1+=100;

        for(int x=x1; x<x1+8; x++){
            for(int y=y1; y<y1+8; y++){
                visited[x][y]=1;
            }
        }

    }

    int cnt=0;
    for(int x=0; x<200; x++){
        for(int y=0; y<200; y++){
            cnt+=visited[x][y];
        }
    }
    cout<< cnt;


    return 0;
}