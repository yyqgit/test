#include<stdio.h>
typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start, size_t len){
	size_t i;
	for(i=0; i<len;i++){
		printf(" %.2x",start[i]);
	}
	printf("\n");
}
int main(){
	int x=30;
	show_bytes((byte_pointer)&x,sizeof(int));
}
