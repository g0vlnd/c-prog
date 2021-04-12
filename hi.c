 //Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes
 #include<stdio.h>
 int main(){
	 int sec,h,m,s;
	 printf("Enter the time  in seconds :  \n");
	 scanf("%d",&sec);
	 h = sec /3600;
	 m = (sec - (3600*h))/60;
	 s =sec  - ((h*3600)+ (m*60));
	 printf("H : M : S = %d %d %d", h,m,s);}
	 
	
