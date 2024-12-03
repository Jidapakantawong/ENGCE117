#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( data, &m, &n ) ;
    printf( "Matrix (%dx%d): \n" ) ;
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%d", data[ i * n + j ] ) ;
        }
    }
    return 0 ;
}//end function

void GetMatrix( int value[], int *row, int *col ) {
    printf( "rr" ) ;
    scanf( "%d", row ) ;
    printf( "ccccc" ) ;
    scanf( "%d", col ) ;
    for( int i = 0 ; i < *row * *col ; i++ ) {
        scanf( "%d", &value[ i ] ) ;
    }
}