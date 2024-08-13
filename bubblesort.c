#include<stdio.h>
int main(){
	int a[10],size,i,j,temp;
	printf("\n enter the size of the array:");
	scanf("%d",&size);
	if(size>10){
		printf("\n Array overflow");
	}
	else{
		printf("\n enter elements:");
		for(i=0;i<size;i++){
			scanf("%d",&a[i]);
					}
	// Array before sorting
	printf("\n Array before sorting:");
	for(i=0;i<size;i++){
			printf("%d\t",a[i]);
					}
	//bubble sort logic
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//array after sorting
	printf("\n Array after sorting:");
	for(i=0;i<size;i++){
			printf("%d\t",a[i]);
					}
				}
			}
