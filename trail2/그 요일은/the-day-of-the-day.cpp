#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> weeks = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
int day_each_month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int m1,d1,m2,d2;
string A;
    

void case1(){   // m1,d1 증가 필요
    int cnt=1;
    int cnt_same=0;
    while(true){
        if(weeks[cnt]==A) cnt_same++;
        if(m1==m2 && d1==d2) break;

        cnt++;
        if(cnt==7) cnt=0;

        d1++;
        if(d1>day_each_month[m1]){
            d1=1;
            m1++;
        }
    }    
    cout << cnt_same;
}



int main() {
    // Please write your code here.
    cin>>m1>>d1>>m2>>d2;
    cin >>A;
    
    if(m1==m2 && d1==d2){
        if(A=="Mon") cout << 1;
        else cout << 0;
    }
    else case1();

    return 0;
}