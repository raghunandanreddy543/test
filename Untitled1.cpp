#include<stdio.h>
int modify(int y,int z){
	y+=1;
	z+=1;
	return y-z;
}
int main(){
	int a=5,b=10,c;
	c=modify(a,b);
	printf("%d %d",a,c);
	
}
