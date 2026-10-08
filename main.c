#include <stdio.h>

int square(int a)
{
    return (a*a);  //계산 결과를 이어가고 싶다면 반환형으로 바꾸기
}

int main()
{
    int a = 2;
    
    a = square(a);
    printf("a=%i\n", a);
}