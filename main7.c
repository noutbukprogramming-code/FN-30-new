#include <stdio.h>

   struct Talaba {
   char ism[50];
   int yosh;
  };

int main() {
  struct Talaba t;

  printf("Ism: ");
  scanf("%s", t.ism);

  printf("Yosh: ");
  scanf("%d", &t.yosh);

    FILE *file = fopen("talaba.txt", "w");

    fprintf(file, "%s\n", t.ism);
    fprintf(file, "%d\n", t.yosh);

    fclose(file);
    printf("<<Saqlandi>>\n");

    file = fopen("talaba.txt", "r");

    fscanf(file, "%s", t.ism);
    fscanf(file, "%d", &t.yosh);

    fclose(file);
    printf("<<O'qildi>>\n");

    printf("Ism: %s\n", t.ism);
    printf("Yosh: %d\n", t.yosh);

}
