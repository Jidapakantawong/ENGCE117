#include <stdio.h>

int *GetMatrix( int *row, int *col ) ;

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    printf( "Enter number of rows and columns: %d %d \n" ,n ,m ) ;
    printf( "Enter matrix elements: \n" ) ;
    
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }   
        printf( "\n" ) ;
    }//end for

    return 0 ;
}//end function

int *GetMatrix( int *row, int *col ) {
    int *val = new int[ 10 ] ;
    printf( "Enter number of rows and columns: " ) ;
    scanf( "%d %d", row, col ) ;
    printf( "Enter matrix elements: " ) ;

    for( int i = 0 ; i < (*row) * (*col) ; i++ ) {
        scanf( "%d", &val[i] ) ;
    }//end for

    return val ;
}//end function