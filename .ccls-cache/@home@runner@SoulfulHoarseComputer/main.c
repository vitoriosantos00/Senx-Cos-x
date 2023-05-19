#include <stdio.h>
#include <math.h>

int fat(int i,int f);

int main(void) {
  int f=1;
  double rad, result=0;
  
  scanf("sen(%lf)",&rad);

  for(int j=0;j<=1000;j++){
    result+=((pow((-1.0), j)*(double)pow(rad,2.0*j+ 1.0))
      /fat((2j+1),f));
    f=1;
  }
  printf("%d\n",fat(4,f));
  printf("%.2lf\n",result);
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