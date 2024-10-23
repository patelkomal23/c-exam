//calcutor that addition sub muland div
#include<stdio.h>

main(){
	
	int num1,num2,add,sub,mul,div;
	 printf("Enter Your Number1: ");
	 scanf("%d",&num1);
	 printf("Enter Your Number2: ");
	 scanf("%d",&num2);
	
	 add = num1 + num2;
	 sub = num1 - num2;
	 mul = num1 * num2;
	 div = num1 / num2;
	
	 printf("Addition of %d and %d is :%d\n",num1,num2,add);
	 printf("Subtraction of %d and %d is :%d\n",num1,num2,sub);
	 printf("Multiplication of %d and %d is:%d\n",num1,num2,mul);
	 printf("Division of %d and %d is :%d\n",num1,num2,div);
	 


}
