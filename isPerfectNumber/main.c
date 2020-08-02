#include <stdio.h>
#include <stdlib.h>

int isPerfectNumber(int testNum){
    int divisorSum = 0;
    int limit = testNum - 1;
    for (int i = 1; i <= limit;i++){
        if (testNum % i == 0){
            divisorSum += i;
        }
    }
    if (testNum == divisorSum){
        printf("%d is a perfect number.",testNum);
    } else{
        printf("%d is not a perfect number.",testNum);
    }
}
int main()
{
    isPerfectNumber(6);
}
