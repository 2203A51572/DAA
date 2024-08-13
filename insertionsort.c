#include<stdio.h>
int main(){
	int a[10],size,i,j,temp,key;
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
	//insertion sort logic for ascending order
	for(i=1;i<size;i++){
		key=a[i];
		j=i-1;
		while(j<=0&&a[j]>key){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;//final position
	}
}
	//array after sorting
	printf("\n Array after sorting:");
	for(i=0;i<size;i++){
			printf("%d\t",a[i]);
					}
				}
