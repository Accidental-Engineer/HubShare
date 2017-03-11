/*@Accidental Engineer
  ##BASICS OF POINTER 
  ##PART: 1
  
  
  POINTER
	Concept of pointer is very unique in C and C++ which allow to access the adderess 
	of the variable i.e. memory localtion and also operate it.
	In other words pointer refers to a location in the memory ,and obtaining the stored 
	value from that specific location is dereferencing the pointer.
	
	memory alocated to pointer variable is equal to the type of variable it is pointing 
	example: 
	    *pointer of integer variable will have 4 byte memory as integer variable is of 4 byte
		*pointer of char will have 1 byte memory  

*/

#include <stdio.h>

int main(){
//EXAMPLE 1//
	//creating integer pointer:
	printf("EXAMPLE 1:\n\n");
	
	int a=5;  //creating a integer variable
	int *p; //creating a integer pointer variable : "*" (asterisk) before p defines a pointer
	        // variable. it is syntax of defining pointer
	p=&a;   //"&a" is address of the variable "a" in the memory hence p=&a means "p" is now 
	        //storing the address of variabe "a"		 
	
	/*
	integer require 4 bytes of memory 
	suppose address of "a" is from 524 to 527[4 byte memory]  (524 is not the value of 'a' 
	, it is the address of "a" in the memory where the value will be stored )
	"&a" is 524 which is now stroed in p(which is a pointer )
	
	since 'p' is also a variable it  also has some address in the memory and if needed "&p"
	is used to print address of p
	*/
	
	
	//what be the result if we simply print "p"
		printf("value of \"p\" or address of \"a\": %d\n",p);
		    //address of 'a' will be printed , since it is storing the address
	       //of "a"
    
	//wtat will happen if we print "&p"
	    printf("address of \"p\": %d\n",&p);//address of "p"	will be printed
	    
	//what be the result if we print "*p"
	    printf("when printed \"*p\": %d\n",*p);// value of "a" will be printed
	    				  // since p is a pointer and "*p" is pointing to the value of "a"
						  
	
	*p=10;
	printf("\nAFTER \"*p=10\"\n");
	//what will be the result if we print "a" or "*p" 
	printf("when \"a\" is printed: %d\nwhen \"*p\" is printed:%d\n",a , *p);
	                      //both will give same value and that will be equal to 10
						  //*p is pointing to value of "a" and any changes to *p will 
						  //be reflected in original value i.e. value of "a"


//EXAMPLE 2// : 
	//creating char pointer
	printf("\nEXAMPLE 2:\n\n");
	//guess the result and check the output
	
	char c='z';//creating char varialbe of 1 byte memory
	char *q;   //creating char pointer
	
	q=&c;
		printf("value of \"q\" or address of \"c\": %d\n",q);
		printf("address of \"q\": %\n",&q);
		printf("when printed \"*q\": %c\n",*q);
								  
			
	*q='y';
		printf("\nAFTER \"*q\" printed: %c\nwhen \"*q\" is printed:%c\n",c , *q);
						  
	return 0; 
}
