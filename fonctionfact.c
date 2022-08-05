#include <stdio.h>
 
long factorielle(int n)
{
  int i;
  int f = 1;
 
  for (i = 1; i <= n; i++)
    f = f * i;
 
  return f; 
}
 
int main()
{
  int nbr;
 
  printf("Donner un entier n pour calculer sa factorielle:\n");
  scanf("%d", &nbr);
  
  if (nbr==0){
  printf("la factorielle est : 1");
  }
  else if(nbr<0){
    printf("La factorielle n'est pas definie pour un entier negatif!");
  }
  else{
 
  printf("%d! = %ld\n", nbr, factorielle(nbr));
  }
   return 0;
   
}