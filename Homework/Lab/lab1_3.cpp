#include <stdio.h>

int *GetSet( int *nm ) ;

int main() {
    int *data, num ;
    data = GetSet( &num ) ;
    printf( "\n" ) ;
    printf( "------------------------\n" ) ;
    printf( "Number of elements: %d\n", num ) ;

    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[i] ) ;
    }//end for

    return 0 ;
}//end function   

int *GetSet( int *nm ) {
    int num ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &num ) ;
    int *data = new int[ num ] ;
    printf( "Enter the elements: " ) ;

    for( int i = 0 ; i < num ; i++ ) {
        scanf( "%d", &data[i] ) ;
    }//end for
    printf( "after in function = " ) ;
    for( int j = 0 ; j < num ; j++ ) {
        printf( " %d ", data[j] ) ;
    }//end for
    *nm = num ;
    return data ;
}//end function