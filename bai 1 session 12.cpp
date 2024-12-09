#include<stdio.h>
int tong(int numA, int numB){
	int sum = numA + numB;
	return sum ;
}
int main() {
	int numA, numB , sum ;
	printf ("nhap so thu nhat:\n");
	scanf ("%d", &numA);
	printf ("nhap so thu hai :\n");
	scanf ("%d" , &numB);
	sum = tong( numA, numB);
	printf ("tong cua 2 so la :%d\n", sum );
	return 0 ;
}

