#include<stdio.h>
#include<float.h>
int main()
{
	printf("size of float is %d",sizeof(float));
	printf("size of double is %d",sizeof(double));
	printf("min value of float is %e",FLT_MIN);
	printf("max value of float is %e",FLT_MAX);
	printf("the precision float is %d",FLT_DIG);
	printf("max value of double %e",DBL_MAX);
	printf("min value of double is %e",DBL_MIN);
	printf("the precision double is %d",DBL_DIG);
	return 0;
}
