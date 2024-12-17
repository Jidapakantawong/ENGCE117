#include <stdio.h>

void GetMatrix( int value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    data = new int[ 20 ];
    GetMatrix( data, &m, &n ) ;
    printf( "Matrix (%dx%d): \n", m, n ) ;
    
    for( int i = 0 ; i < m ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%d ", data[ i * n + j ] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for

    return 0 ;
}//end function

void GetMatrix( int value[], int *row, int *col ) {
    int sz ;
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;
    printf( "Enter the matrix elements: " ) ;
    sz = ( *row ) * ( *col ) ;

    for( int i = 0 ; i < sz ; i++ ) {
        scanf( "%d", &value[i] ) ;
    }//end for
    
}//end function