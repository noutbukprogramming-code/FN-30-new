#include <stdio.h>

void chiqar(int n){
    
    if (n != 1){
        chiqar(n-1);
    }
    printf("%d ", n);
}
int main (){
    chiqar(5);
}