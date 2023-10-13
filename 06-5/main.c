//
//  main.c
//  06-5
//
//  Created by MacBook Air on 2023/10/12.
//

#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int combination(int n, int r) {
    int div1, div2; // div1 = 분자, div2 = 분모
    
    div1 = factorial(n);
    div2 = factorial(n - r) * factorial(r);
    
    // 분자, 분모 나누기 연산
    return (div1 / div2);
}

int main(void) {
    int n, r;
    int result;
    
    // 입력값 받음
    printf("input n: ");
    scanf("%d", &n);
    
    printf("input r: ");
    scanf("%d", &r);
    
    // 입력받을 숫자 조건
    if (n < 0 || r < 0 || n < r) {
        printf("Invalid input. n and r must be non-negative, and n must be greater than or equal to r.\n");
        return 1; // Exit with an error code
    }
    
    // 최종값 출력, 결과 출력
    result = combination(n, r);
    printf("C(%d, %d) = %d\n", n, r, result);
    
    return 0;
}
