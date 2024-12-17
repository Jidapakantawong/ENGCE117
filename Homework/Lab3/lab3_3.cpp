#include <stdio.h>
#include <string.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;//end function

struct student upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    aboy = upgrade( aboy ) ;
    printf( "GPA = %.2f\n", aboy.gpa ) ;
    return 0 ;
}//end function

struct student upgrade( struct student child ) {

    if( child.sex == 'M' ) {
        child.gpa *= 1.10 ;
        if( child.gpa == 4.00 ) {
            child.gpa = 4.00 ;
        }//end if

    }//end if

    if( child.sex == 'F' ) {
        child.gpa *= 1.20 ;
        if( child.gpa == 4.00 ) {
            child.gpa = 4.00 ;
        }//end if

    }//end if

    if( child.sex == 'O' ) {
        if( child.gpa == 4.00 ) {
            child.gpa = 4.00 ;
        }//end if

    }//end if

    return child ;
}//end function