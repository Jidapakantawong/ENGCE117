#include <stdio.h>

int main() {
    int n ;
    printf("Enter number : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++ ) {
        printf("[%d] Hello world \n", i ) ;
    }//end for
    
}//end function