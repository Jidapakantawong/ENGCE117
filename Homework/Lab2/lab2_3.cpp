#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int  num ;
    explode( "I/Love/You", '/', out, &num ) ;

    for( int  i = 0 ; i < num ; i++ ) {
            printf( "str1[%d] = %s\n", i , out[ i ] ) ;
    }//end for

    printf( "count = %d", num ) ;
    return 0 ;
}//end function

void explode( char str1[], char splitter, char str2[][10], int *count ) {
    // gets( str1 ) ;
    int length = strlen( str1 ) ;
    int nmtext = 0 ;
    int text = 0 ;

    for( int i = 0 ; i < length ; i++ ) {
        if( str1[ i ] == splitter) {
            if( i == ( length - 1 ) || str1[ i + 1 ] == splitter || text == 0 ) {
                continue ;
            }//end if
            str2[ nmtext ][ text ] = '\0' ;
            text = 0 ;
            nmtext++ ;
            continue ;
        }//end if
        str2[ nmtext ][ text ] = str1[ i ] ;
        text++ ;
    }//end for

    *count = text ;
}//end function