#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int x1,y1,x2,y2;
    bool visited[2001][2001]={};

    cin>>x1>>y1>>x2>>y2;
    x1+=1000;
    y1+=1000;
    x2+=1000;
    y2+=1000;
    for(int x=x1; x<x2; x++){
        for(int y=y1; y<y2; y++){
            visited[x][y]=1;
        }
    }

    cin>>x1>>y1>>x2>>y2;
    x1+=1000;
    y1+=1000;
    x2+=1000;
    y2+=1000;
    for(int x=x1; x<x2; x++){
        for(int y=y1; y<y2; y++){
            visited[x][y]=0;
        }
    }

    int x_min=2005, y_min=2005, x_max=-1, y_max=-1;
    int cnt=0;
    for(int x=0; x<2000; x++){
        for(int y=0; y<2000; y++){
            if(visited[x][y]==1){
                if(x<x_min) x_min=x;
                if(y<y_min) y_min=y;
                if(x>x_max) x_max=x;
                if(y>y_max) y_max=y;
                cnt++;
            }

        }
    }
    if (cnt==0) cout << 0;
    else cout << (x_max-x_min+1) * (y_max-y_min+1);
 

    //cout << x_min << ' ' << y_min << ' ' << x_max << ' ' << y_max << endl;

    return 0;
}