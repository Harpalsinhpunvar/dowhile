#include<stdio.h>

int main(){
    // int c = 1;

    // do {
    //     printf("%d\n", c);
    //     c++;
    // } while (c <= 10);

    float num, sum = 0;

    do {
        puts("Enter a number: ");
        scanf("%f", &num);
        sum += num;
    } while (num != 0);

    printf("The sum is: %0.3f", sum);

    return 0;
}