#include <iostream>
using namespace std;

bool in(int a, int x, int b){
    if(x>=a && x<=b){
        return 1;
    }else{ 
        return 0;
    }
}

int main(){
    int n;
    cin >> n;
    double sum = 0;
    double crs = 0;
    for(int i = 0;i<n;i++){
        double m, e, f, cr, gpa;
        cin >> m >> e >> f >> cr;
        crs +=cr;
        if(m+e<30 || f<20){
            continue;
        }
        double t = m+e+f;
        if(in(50, t, 54)){ gpa = 1;}
        if(in(55, t, 59)){ gpa = 1.3333333333;}
        if(in(60, t, 64)){ gpa = 1.6666666666;}
        if(in(65, t, 69)){ gpa = 2;}
        if(in(70, t, 74)){ gpa = 2.3333333333;}
        if(in(75, t, 79)){ gpa = 2.6666666666;}
        if(in(80, t, 84)){ gpa = 3;}
        if(in(85, t, 89)){ gpa = 3.3333333333;}
        if(in(90, t, 94)){ gpa = 3.6666666666;}
        if(in(95, t, 100)){ gpa = 4;}
        sum += (gpa*cr);
    }
    sum = sum/crs;
    cout << sum;
    return 0;
}