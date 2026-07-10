#include <iostream>
using namespace std;

#define black 1
#define white 2

    int x;
    char cmd;
    int map_color[300001]={};
    int map_visited_white[300001]={};
    int map_visited_black[300001]={};
    int currPos=120000;

int main() {
    // Please write your code here.
    int N;
    cin>>N;



    for(int i=0; i<N; i++){
        cin>>x>>cmd;

        if(cmd=='L'){
            for(int j=currPos; j>currPos-x; j--){
                map_color[j] = white;
                map_visited_white[j]++;
            }
            currPos = currPos - x+1;
        }
        else{   // cmd == 'R'
            for(int j=currPos; j<currPos+x; j++){
                map_color[j] = black;
                map_visited_black[j]++;
            }
            currPos = currPos + x-1;
        }
    }

    int cntWhite=0, cntBlack=0, cntGray=0;
    for(int i=0; i<300001; i++){
        if(map_visited_white[i]>=2 && map_visited_black[i]>=2) cntGray++;
        else if(map_color[i]==white) cntWhite++;
        else if(map_color[i]==black) cntBlack++;
    }
    
    cout << cntWhite << ' ' << cntBlack << ' ' << cntGray;

    return 0;
}