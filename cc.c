#include <stdio.h>
#include <math.h>
#define MAXA 3
#define MAXB 5
#define MAXC 8

int a = 0, b = 0, c = 8;
void swap(int *po, int *pd)
{
  int maxor, maxdes;
  if((po != &a && po != &b && po != &c) || (pd != &a && pd != &b && pd != &c) || (po == pd))
    return;
  if(po == &a)
    maxor = MAXA;
  if(po == &b)
    maxor = MAXB;
  if(po == &c)
    maxor == MAXC;
  if(pd == &a)
    maxdes = MAXA;
  if(pd == &b)
    maxdes = MAXB;
  if(pd == &c)
    maxdes = MAXC;
  if(*po == 0 && *pd == 0)
    return;
  if(*po == 0)
    return;
  if(maxdes - (*pd) == 0)
    return;
  if(*po < (maxdes - (*pd)))
  {
    *pd += *po;
    *po -= *po;
    return;
  }
  int d = maxdes - *pd;
  *pd += d;
  *po -= d;

}
int main()
{
  int *pa = &a;
  int *pb = &b;
  int *pc = &c;
  while(b != 4 && c != 4)
  {
    int (*alfa), (*beta);
    int cho, chos;
    printf("State:\na = %i, b = %i, c = %i\n>", a, b, c);
    scanf("%i %i", &cho, &chos);
    if(cho == 1)
      alfa = &a;
    if(cho == 2)
      alfa = &b;
    if(cho == 3)
      alfa = &c;
    if(chos == 1)
      beta = &a;
    if(chos == 2)
      beta = &b;
    if(chos == 3)
      beta = &c;
    swap(alfa, beta);
    system("clear");
  }
  printf("\n\tYou won!\n");
  getchar();
  return 1;
}
