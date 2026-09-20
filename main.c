#include <stdio.h>

int kvadrat(int n){
    return n*n;
}
int main (){
    int n;
    scanf("%d", &n);

    printf("%d", kvadrat(n));
}
