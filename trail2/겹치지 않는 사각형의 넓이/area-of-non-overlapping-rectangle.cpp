#include <iostream>
using namespace std;

bool visited[2002][2002];
int x1,x2,y1,y2;

int main() {
    // Please write your code here.
    // A
    cin>>x1>>y1>>x2>>y2;
    x1 += 1000;
    y1 += 1000;
    x2 += 1000;
    y2 += 1000;
    for(int x=x1; x<x2; x++){
        for(int y=y1; y<y2; y++){
            visited[x][y]=1;
        }
    }

    // B
    cin>>x1>>y1>>x2>>y2;
    x1 += 1000;
    y1 += 1000;
    x2 += 1000;
    y2 += 1000;
    for(int x=x1; x<x2; x++){
        for(int y=y1; y<y2; y++){
            visited[x][y]=1;
        }
    }

    // M
    cin>>x1>>y1>>x2>>y2;
    x1 += 1000;
    y1 += 1000;
    x2 += 1000;
    y2 += 1000;
    for(int x=x1; x<x2; x++){
        for(int y=y1; y<y2; y++){
            visited[x][y]=0;
        }
    }

    int cnt=0;
    for(int x=0; x<2001; x++){
        for(int y=0; y<2001; y++){
            cnt += visited[x][y];
        }
    }

    cout << cnt;

    return 0;
}