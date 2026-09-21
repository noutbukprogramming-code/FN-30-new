#include <stdio.h>
int main(){
    int n,m;
    int son [50][50];
    int yigindi = 0;
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        for(int i=0; i<m; i++){
            scanf("%d", &son[n][m]);
            yigindi = yigindi + son[n][m];
        }
    }
    printf("%d", yigindi);

}