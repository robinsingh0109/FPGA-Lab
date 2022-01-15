// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

// function for NOR operation
bool NOR(bool x,bool y){
    bool z=!(x||y);
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
   X=(NOR(NOR(A,A),F),NOR(A,NOR(C,I)));
   printf("OUTPUT:%d",X);


return 0;

}
