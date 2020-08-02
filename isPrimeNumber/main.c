#include <stdio.h>
#include <stdlib.h>

int run = 1;

int isPrime(int *number){
    int primeList[4] = {2, 3, 5, 7};
    int limit = ((sizeof(primeList) / sizeof(int)) - 1);
    for (int j = 0; j <= limit; j++){
        if (*number == primeList[j]){
            printf("%d is a prime number.", *number);
            return 0;
            }
        }

    for (int i = 0; i <= limit; i++){
        if(*number % primeList[i] == 0){
            printf("%d is not a prime number.", *number);
            break;
        } if (limit == i){
            printf("%d is a prime number.", *number);
            break;
        }

    }
        return 0;


}

int main()
{
    int num;
    printf("Enter a input integer value: ");
    scanf("%d",&num);
    int* pNum = &num;
    isPrime(pNum);
    return 0;
}
