#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    printf( "%s", out ) ;
    return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {
    fgets( str1, 50, stdin ) ;
    int len = strlen( str1 ) ;

    for ( int i = 0 ; i < len ; i++ ) {
        str2[ i ] = str1[ len - i - 1 ] ;
    }//end for
    
    str2[ len ] = '\0' ;
}//end function