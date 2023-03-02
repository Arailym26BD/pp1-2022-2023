#include <iostream>
#include <climits>
using namespace std;

int main () {
int r , c , summ = 0 , posr , min = INT_MAX;
cin >> r >> c ;
int a[r][c] ;
for ( int i = 0 ; i < r ; i++ ){
    summ = 0 ;
    for( int j = 0 ; j < c ; j++ ){
        cin >> a[i][j];
        summ += a[i][j] ;
    } if ( summ < min ) 
        { min = summ ;
        posr = i + 1 ;
        }
} 
cout << posr ;
return 0 ;
}