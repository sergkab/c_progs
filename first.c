#include <stdio.h>

int main(void)
{
  FILE *fp;
  char name[] = "my.txt";
  if ((fp = fopen(name, "r")) == NULL)
  {
    printf("Не удалось открыть файл");
    getchar();
    return 0;
  }
  // открыть файл удалось
  // требуемые действия над данными
  fclose(fp);
  getchar();


  return 1;
}


