#include<stdio.h>
int main(){
	
	int i=0,j=0,letter,num,how;
	
	scanf("%c %d %d",&letter,&num,&how);
	
	while (i<how){
		i++;
		for(j=0;j<num;j++)
			printf("%c",letter);
	printf("\n");
	}
	return 0;
}
