#include <stdio.h>


int main() {
    printf("Please enter the number\n");
    int n;
    scanf("%d", &n);
    int flag = 1; 
    for(int i=2; i< n/2; i++){
        if( n % i == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        printf("%d is a prime number\n", n);
    }else {
         printf("%d is not a prime number\n", n);
    }
    return 0;
}
