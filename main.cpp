#include <iostream>

int asal(int m){
int i;
int w;
for(i=2;i<m;i++){
    if(m%i==0){
	w=0;
	break;
	}
    else {
	 w=1;
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
   	  	printf("you write an unsupported number");
   }	
   else if((v*l)==1){
   
 	k=a*t;
 	printf("result:%d",k);
        }
   else{
   	printf("you wrote a unsupported number");
   	
   }
	return 0;
}
