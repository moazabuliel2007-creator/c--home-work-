#include <stdio.h>
#include <cs50.h>
int main (){

int n =4;
for (int i=0  ; i<n ; i++){
    for(int j=0 ; j<=n-i-1 ;j++){
        printf (" ");
    }
    for (int t = 0 ; t<=i ; t++){
        printf ("#");
    }
    printf(" ");

    for(int j =0 ; j<=i ; j++) {
 printf("#");
}
printf("\n");
}


}
