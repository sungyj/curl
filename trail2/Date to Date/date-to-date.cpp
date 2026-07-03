#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int day_each_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m1,d1,m2,d2;
    cin >> m1>>d1>>m2>>d2;

    int curr_month=m1, curr_day=d1;
    int cnt=1;
    while(!(curr_month==m2 && curr_day==d2)){

        // if(curr_month==m2 && curr_day==d2) break;

        cnt++;
        curr_day++;
        if(curr_day>day_each_month[curr_month]){
            curr_day=1;
            curr_month++;
        }
    }

    cout << cnt;

    return 0;
}