#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> weeks = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
int day_each_month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int m1,d1,m2,d2;

void case1(){   // m1,d1 증가 필요
    int cnt=1;
    while(true){
        if(m1==m2 && d1==d2) break;
        cnt++;
        if(cnt==7) cnt=0;

        d1++;
        if(d1>day_each_month[m1]){
            d1=1;
            m1++;
        }
    }    

    cout << weeks[cnt];
}

void case2(){   // m1,d1 감소 필요
    int cnt=1;
    while(true){
        if(m1==m2 && d1==d2) break;
        cnt--;
        if(cnt==-1) cnt=6;

        d1--;
        if(d1<1){
            m1--;
            d1=day_each_month[m1];
        }
    }    

    cout << weeks[cnt];
}


int main() {
    // Please write your code here.
    cin>>m1>>d1>>m2>>d2;
    
    if(m1>m2) case2();
    else if(m1<m2) case1();
    else if(d1>d2) case2();
    else if(d1<d2) case1();
    else cout << "Mon";

    return 0;
}