#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int var1,var2;
    float f1,f2;
    scanf("%d %d",&var1,&var2);
    scanf("%f %f",&f1,&f2);
    printf("%d %d\n",var1+var2, var1-var2);
    printf("%.1f %.1f",f1+f2, f1-f2);
    
    return 0;
}