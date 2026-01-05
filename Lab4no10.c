#include<stdio.h>
int main(){
	
	int point;
	int have_A = 0;
	int have_B = 0;
	int have_C = 0;
	int have_D = 0;
	int have_F = 0;
	
	
	while(1){
		printf("");
		scanf("%d",&point);
		
		if(point==-1){
			break;
		}
		if(point>=0 && point<=100){
			if(point>=85){
			printf("%d(A)\n",point);
			have_A++;
			}
			else if(point>=75){
			printf("%d(B)\n",point);
			have_B++;
			}
			else if(point>=68){
			printf("%d(C)\n",point);
			have_C++;
			}
			else if(point>=55){
			printf("%d(D)\n",point);
			have_D++;
			}
			else {
			printf("%d(F)\n",point);
			have_F++;
			}
		}
		
		printf("(A)%d\n",have_A);
		printf("(B)%d\n",have_B);
		printf("(C)%d\n",have_C);
		printf("(D)%d\n",have_D);
		printf("(F)%d\n",have_F);
		
	}
	return 0;
}
