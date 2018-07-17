#include <iostream>

int asal(int m){
int i;
int w;
for(i=2;i<m;i++){
    if(m%i==0){
	w=1;
	break;
	}
    else {
	 w=0;
	 }
}
return w;
}


int main(int argc, char** argv) {
	int a,t,k,v,l;
	
	printf("Please write a number\n");
	scanf("%d",&a);

printf("Please write another number\n");
	scanf("%d",&t);
	v=asal(a);
	l=asal(t);
	

   if(a==2 || t==2 ){
   	  	printf("asal sayi girdiniz");
   }	
   else if((v*l)==1){
   
 	k=a*t;
 	printf("result:%d",k);
        }
   else{
   	printf("asal sayi girdiniz");
   	
   }
	return 0;
}
