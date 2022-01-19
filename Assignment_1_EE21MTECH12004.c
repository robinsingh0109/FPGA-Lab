// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

// function for 2 input NAND operation
bool NAND1(bool x,bool y){
    bool z=!(x&&y);
    return z;
}
// function for 3 input nand operation
bool NAND2(bool x,bool y,bool z){
    bool k=!(x&&y&&z);
        return k;

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

  //Implementation of SOP using NAND gate
   X=NAND2(NAND1(A,NAND1(F,F)),NAND1(NAND1(A,A),C),NAND1(NAND1(A,A),I));
   printf("OUTPUT:%d\n",X);
   if(X==1)
       printf("Eligible for Scholarship");
   else
       printf("Not eligible for Scholarship ");


return 0;

}
