#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B,C,D;
    cin >> A>>B>>C>>D;

    int cnt_min=0;
    int curr_hr=A, curr_min=B;
    while(true){
        if(curr_hr==C && curr_min==D) break;

        cnt_min++;
        curr_min++;
        if(curr_min==60){
            curr_min=0;
            curr_hr++;
        }
    }

    cout << cnt_min;

    return 0;
}