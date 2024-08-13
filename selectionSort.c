#include<stdio.h>
int main(){
	int a[10],size,i,j,temp,key,min,loc;
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
	//selection sort logic for ascending order
	for(i=0;i<size-1;i++){
		min=a[i];
		loc=i;
		for(j=i+1;j<size;j++){
			if(a[j]>min){
				min=a[j];
				loc=j;
			}
			else
			min=min;
		}
		a[loc]=a[i];
		a[i]=min;
			}
}
	//array after sorting
	printf("\n Array after sorting:");
	for(i=0;i<size;i++){
			printf("%d\t",a[i]);
					}
				}
