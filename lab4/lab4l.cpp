#include <iostream>
#include <climits>
using namespace std;
int main ()
{ 
int r , c , summ = 0 , min = INT_MAX , b ;
cin >> r >> c ;
int a[r] [c] ;
//считывание
for ( int i = 1 ; i <= r ; i++ ) {
    for ( int j = 1 ; j <= c ; j++ ) { 
        cin >> a[i] [j] ; 
    }
}
// вывод координатов минимума
cout << "coordinates of min elements:" << endl ;
for ( int j = 1 ; j <= c ; j++ ) {
    for ( int i = 1 ; i <= r ; i++ ) {
        if ( min > a[i][j] )
         { min = a[i][j] ; 
         b = i ;}
    } 
    cout << b << ";" << j << endl ;
    summ += min ;
    min = INT_MAX ;
}
//вывод суммы
cout << endl  << "Their sum:" << endl << summ ;
return 0;
}