#include <stdio.h>
#include <string.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;//end function

void upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    printf( "Original GPA = %.2f\n", aboy.gpa ) ;
    upgrade( aboy ) ;
    return 0 ;
}//end function

void upgrade( struct student child ) {

    if( child.sex == 'M' ) {
        child.gpa *= 1.10 ;
        if( child.gpa == 4.00 ) {
            child.gpa = 4.00 ;
        }//end if

        printf( "Male = %.2f", child.gpa ) ;
    }//end if

    if( child.sex == 'F' ) {
        child.gpa *= 1.20 ;
        if( child.gpa == 4.00 ) {
            child.gpa = 4.00 ;
        }//end if

        printf( "Femal = %2.f", child.gpa ) ;
    }//end if

    if( child.sex == 'O' ) {
        printf( "Unisex = %.2f", child.gpa ) ;
    }//end if

}//end function