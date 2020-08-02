#include <stdio.h>
#include <stdlib.h>

int isPalindrome(int inputNum){
    int n = 0;
    char strNum[n];
    sprintf(strNum,"%d",inputNum);
    n = strlen(strNum);
    int limit = n - 1;
    char strDigitInverse;
    char strDigit;
    int tries = 0;
    for (int i = limit; i >= 0; i--){
        strDigitInverse = strNum[i];
        strDigit = strNum[limit - i];
        if (strDigit == strDigitInverse){
            tries++;
        }
    } if (tries == n){
        printf("%d is a palindrome number.",inputNum);
    } else{
        printf("%d is not a palindrome number.",inputNum);
    }
}
int main()
{
    isPalindrome(323);
    return 0;
}
