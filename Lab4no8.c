#include<stdio.h>
int main(){
	
	int i,j,point,how;
	
	scanf("%d",&how);
	
	for(i=1;i<=how;i++){
		scanf("%d",&point);
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
}
