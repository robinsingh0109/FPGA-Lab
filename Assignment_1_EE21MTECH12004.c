// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

// function for NAND operation
bool NAND1(bool x,bool y){
    bool z=!(x&&y);
    return z;
}
bool NAND2(bool x,bool y,bool z){
    bool z=!(x&&y&&z)
        return z;

}

int main() {
  bool A,F,C,I,X;
  int a,f,c,i;
  printf("whether the student is academically strong or not ");
  scanf("%d",&a);
  A=a;
  printf("whether the student is financially sound or not ");
  scanf("%d",&f);
  F=f;
  printf("whether the student belong to backward caste or not ");
  scanf("%d",&c);
  C=c;
  printf("whether the student is physically impaired or not ");
  scanf("%d",&i);
  I=i;

  //Implementation of SOP using NOR gate
   X=NAND2(NAND1(A,NAND1(F,F)),NAND1(NAND1(A,A),C),NAND1(NAND1(A,A),I))
   printf("OUTPUT:%d",X);


return 0;

}
