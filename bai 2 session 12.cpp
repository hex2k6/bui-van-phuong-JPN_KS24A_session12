#include<stdio.h>
int inmang(int arr[], int n ){
	for (int i=0 ; i<n ;i++){
		printf ("%d ", arr [i]);
	}
	printf ("\n");
}
int main() {
    int arr[]={5,6,9,3,2,5,7};
    int n = sizeof(arr) / sizeof(arr[0]);  
    printf("Cac phan tu trong mang la: ");
    inmang(arr, n);
	return 0 ;
}

