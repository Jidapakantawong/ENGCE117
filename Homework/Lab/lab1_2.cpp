#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;

int main() {
    int *data, num ;
    data = new int[ num ] ;
    GetSet( data, &num ) ;
    printf( "------------------------\n" ) ;
    printf( "Number of elements: %d \n", num ) ;

    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[i] ) ;
    }//end for
    
    return 0 ;
}//end function

void GetSet( int data[], int *num ) {
    printf( "Enter number: ") ;
    scanf( "%d", num ) ;
    printf( "Enter Number Eletment: " ) ;

    for( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &data[i] ) ;
    }//end for

}//end function