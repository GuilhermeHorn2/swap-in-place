#include <iostream>
#include <string.h>
#include <vector>
#include <utility>

using namespace std;


void swap(int* a,int *b);

int main()
{
	/*  || \ */

	int a = 10;
	int b = 20;
	swap(&a,&b);
	printf("a :%d\n",a);
	printf("b :%d\n",b);

	return 0;
}

void swap(int* a,int* b){

	*a = *a+*b;
	*b = *b+*a;
	*a = *b-*a;
	*b = *b-(2*(*a));

}

