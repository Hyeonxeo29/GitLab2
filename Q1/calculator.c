#include <stdio.h>
#include "calculationlib.h"

int main(){

        int n1,n2;

	printf("첫 번째 수를 입력하세요 : ");
        scanf("%d", &n1);

	printf("두 번째 수를 입력하세요 : ");
        scanf("%d", &n2);

	printf("%d + %d = %d \n", n1, n2, add(n1,n2));
        printf("%d - %d = %d \n", n1, n2, minus(n1,n2));
        printf("%d * %d = %d \n", n1, n2, multi(n1, n2));
        printf("%d / %d = %d \n", n1, n2, divi(n1, n2));
										        return 0;
}

