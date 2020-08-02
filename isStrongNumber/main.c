#include <stdio.h>
#include <stdlib.h>

int fact(int num){
    if ((num == 0) || (num == 1)){
        return 1;
    } else {
        return num * fact(num - 1);
    }
}

int isStrongNumber(int userInt){
    int SumOf = 0;
    int n = 0;
    char strNum[n];
    sprintf(strNum,"%d",userInt);
    n = strlen(strNum);
    int limit = n - 1;
    char digit;
    for (int i = 0; i <= limit; i++){
        digit = strNum[i];
        SumOf += fact(atoi(&digit));
    } if (userInt == SumOf){
        printf("%d is a strong number",userInt);
    } else {
        printf("%d is not a strong number",userInt);
    }

}

int main()
{
    isStrongNumber(145);
    return 0;
}
