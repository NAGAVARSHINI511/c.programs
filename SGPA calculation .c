//SGPA Calculator
#include <stdio.h>

int main(void) {

  int sub1,sub2,sub3,sub4,sub5,sub6,sub7,sub8,sub9;
  float SGPA=0;
  printf("enter the subject grades of SEM1\n");
  scanf("%d%d%d%d%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5,&sub6,&sub7,&sub8,&sub9);
  SGPA=(sub1*3+sub2*3+sub3*3+sub4*3+sub5*3+sub6*1+sub7*1+sub8*2+sub9*1)/20.0;  //this caclculates based on your grade not marks
    
  printf("SGPA of SEM1 is %f",SGPA);
  
  return 0;
}
