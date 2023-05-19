#include <stdio.h>
#include <math.h>

int fat(int i,int f);

int main(void) {
  int n, f=1,op, auxcos;
  double rad, result=0;
  printf("Selecione a opção:\n1-sen(x)\n2-cos(x)\nOBS: deve-se digitar o valor de x em graus, exemplo: sen(90)\n");
  scanf("%d",&op);
  switch(op){
    case 1:{
      printf("Digite: ");
      scanf(" sen(%d)",&n);
      if(n>180){
        n=-n+180;
      }
      rad= 3.145926535*((double)n/180);
      for(int j=0;j<=12;j++){
        result+=((pow((-1.0), j)*(double)pow(rad,2.0*j+1.0))/fat((2*j+1),f));
        f=1;
      }
      printf("%.2lf\n",result);
      break;
    }
    case 2:{
      printf("Digite: ");
      scanf(" cos(%d)",&n);
      auxcos=n;
      if(n>=180){
        n=-n+180;
      }
      rad= 3.145926535*((double)n/180);
      for(int j=0;j<=12;j++){
        result+=((pow((-1.0), j)*(double)pow(rad,2.0*j))/fat(2*j,f));
        f=1;
      }
      if(auxcos==180){
        printf("%.2lf\n",-result);
      }else
        printf("%.2lf\n",result);
      break;
    }
    default:
    printf("Opção inválida.\n");
    break;
  }

  return 0;
}

int fat(int i, int f){
  if(i==0){
    return f=f*1;
  }else{
    f*=i;
    return fat(i-1, f);
    }
}