#include <iostream>
using namespace std;

#define white 1
#define black 2

int main() {
    // Please write your code here.
    int N;
    cin >> N;

    int x;
    char cmd;
    int map_color[300001]={};
    int currPos = 120000;

    for(int i=0; i<N; i++){
        cin >> x >> cmd;
        if(cmd=='L'){
            for(int j=currPos; j>currPos-x; j--){
                map_color[j]=white;
            }
            currPos = currPos-x+1;
        }
        else{
            for(int j=currPos; j<currPos+x; j++){
                map_color[j]=black;
            }
            currPos = currPos+x-1;
        }
    }

    int cnt_white=0, cnt_black=0;
    for(int i=0; i<300001; i++){
        if(map_color[i]==white) cnt_white++;
        else if(map_color[i]==black)cnt_black++;
    }
    cout<<cnt_white <<' ' << cnt_black; 

    return 0;
}