#include<stdio.h>



int main()
{

	int var1 = 20;
	char ch1 = 21;
	int arr1[2]= {1,2};
	

/*
1)    int a;
a = 20;

(or)

2)int a =20;


pointer:

1) int *ptr;

ptr = &var1;

(or)

2) int *ptr = &var1;




*/
	int* straddre;// pointer decalration -> datatype* varName;
	printf("address of var1:%p\n", &var1);
//	printf("address of ch1:%p\n", &ch1);
		
//	printf("address a[0]:%p\n, address a[1]:%p\n", &arr1[0],&arr1[1]);
	
	straddre = &var1;// assigning address
	printf("value of straddre:%p\n", straddre);	
	printf("value of var1:%d\n", var1);	



//	int *ptr = &var1;//decalartion and initialization
	
	*straddre = 30; //dereference
	
	printf("value of var1:%d\n", var1);	

	
}
