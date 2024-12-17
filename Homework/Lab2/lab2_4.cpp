#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter[], char str2[][10], int *count ) ;

int main() {
    char out[ 50 ][ 10 ] ;
    int  num ;
    // char *st = new char[ 50 ] ;
    // fgets ( st, 100, stdin ) ;
    explode( "I,Love World/You", ", /", out, &num ) ;

    for( int  i = 0 ; i < num ; i++ ) {
        printf( "str1[%d] = %s \n", i , out[ i ] ) ;
    }//end for

    printf( "count = %d", num ) ;
    return 0 ;
}//end function

void explode( char str1[], char splitter[], char str2[][10], int *count ) {
    // gets( str1 ) ;
    int length = strlen( str1 ) ;
    int nmtext = 0 ;
    int text = 0 ;

    for( int i = 0 ; i < length ; i++ ) {
        if( strchr( splitter, str1[ i ]) != NULL ) {
            if( i == ( length - 1 ) || strchr( splitter, str1[ i + 1 ] ) != NULL || text == 0 || i == 0 ) {
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

    *count = text + 1 ;
}//end function