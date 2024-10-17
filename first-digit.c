#include <stdio.h>
 
int main(){
    int n, firstDigit;
    
    scanf("%d", &n);

    while(n > 9){
        n = n / 10;
    }

    firstDigit = n;

    if(firstDigit % 2 == 0){
        printf("EVEN");
    } else {
        printf("ODD");
    }

}

