#include<stdio.h>
int main(){
	
	int point;
	
	while(1){
		printf("");
		scanf("%d",&point);
		
		if(point==-1){
			break;
		}
		if(point>=0 && point<=100){
			if(point>=85){
			printf("%d(A)\n",point);
			}
			else if(point>=75){
			printf("%d(B)\n",point);
			}
			else if(point>=68){
			printf("%d(C)\n",point);
			}
			else if(point>=55){
			printf("%d(D)\n",point);
			}
			else
			printf("%d(F)\n",point);
		}
		
	}
	return 0;
}

