/* exceeds maximum int size on our system */
#include <stdio.h>
int main(void)
{
 int i = 2147483647;
 unsigned int j = 4294967295;
 float k = 3.4E38;

 printf("original signed int: %d signed + 1: %d signed + 2: %d\n", i, i+1, i+2);
 printf("original unsigned int: %u unsigned + 1: %u undigned + 2: %u\n", j, j+1, j+2);
 printf("original float: %e overflow float * 100.0f: %e underflow float: %e\n", k, k*100.0f, k*-100.0f);
 return 0;
}