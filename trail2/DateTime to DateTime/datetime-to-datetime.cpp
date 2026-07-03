#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B,C;
    cin >> A >> B >> C;

    int curr_day=11, curr_hr=11, curr_min=11;
    if(curr_day>A){
        cout << -1;
    }
    else if(curr_day==A && curr_hr>B){
        cout << -1;
    }
    else if(curr_day==A && curr_hr==B && curr_min>C){
        cout << -1;
    }
    else{
        int cnt_min=0;
        while(!(curr_day==A && curr_hr==B && curr_min==C)){
            cnt_min++;

            curr_min++;
            if(curr_min==60){
                curr_min=0;

                curr_hr++;
                if(curr_hr==24){
                    curr_hr=0;
                    
                    curr_day++;
                }
            }
        }
        cout << cnt_min;
    }

    return 0;
}