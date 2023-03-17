#include <stdio.h>
#include <string.h>
int main(){
    char s1[1000],s2[1000];     
    printf("Enter the string: ");
    gets(s1);
    strcpy(s2,s1);
    strrev(s2);
    int c;
    c =strcmp(s1,s2);
    if(c==0){
    	printf("string is palindrome");
	} 
    else{
    	printf("string is not palindrome");
	}
	
    return 0;
}

