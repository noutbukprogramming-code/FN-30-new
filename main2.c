#include <stdio.h>

int main(){
    int n, son[100];
 
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &son[i]);
    }
    int katta = son[0];
    for(int i=1; i<n; i++){
        if(son[i] > katta){
            katta = son[i];
        }
    }
    printf("%d", katta);
}