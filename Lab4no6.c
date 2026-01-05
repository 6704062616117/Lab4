#include<stdio.h>
int main(){
	int i=0,j,num,how;
	
	scanf("%d %d",&num,&how);

	while(i<how){
		i++;
		for(j=0;j<how;j++)
			printf("%d",num);
		printf("\n");
	}
	return 0;
}
