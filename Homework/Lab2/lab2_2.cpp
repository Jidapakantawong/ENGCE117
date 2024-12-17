#include <stdio.h>
#include <string.h>

 char* reverse( char str1[] ) ;

 int main() {
    char text[ 50 ] ;
    char *out ;
    out = reverse( text ) ;
    printf( "%s", out ) ;
    return 0 ;
 }//end function

 char* reverse( char str1[] ) {
    gets( str1 ) ;
    int length = strlen( str1 ) ;
    char *str2 = new char[ length ]  ;

    for ( int i = 0 ; i < length ; i++ ) {
        str2[ i ] = str1[ length - i - 1 ] ;
    }//end for 

    str2[ length ] = '\0' ;
    return str2 ;
 }//end function

