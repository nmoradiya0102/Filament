#include<stdio.h>
#include<string.h>

int main(){	
	char arr[256]; 
	int i,c,count=0;
	
	printf("Enter Text : ");
	gets(arr);
	
	for(c=1 ; c<=256 ; c++){		
		count = 0;		
		for(i=0 ; i<strlen(arr) ; i++){			
			if(c==arr[i]){			
			count++;
			}			
		}
		if(count>0){
			printf("%c ==> %d\n",c,count);
			}	
	}
	
	return 0;
}

