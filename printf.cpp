#include <stdio.h>
#include <string.h>
int main(){

    printf("%d \n",121);//plane printing
    printf("%6d\n",121);//6(feild width) is used for defining the width of printing i.e. is 3 digit no will take 6 places including 3 spaces in starting hence total of 6 place
    printf("%06d\n",121);//insted of blank space there will be '0' i.e. 3 zeros will be there insted of  blank space
    printf("%-6d\n",121);//"-" is used to left justify the feild width(6) i.e. it will remove the space from the left 
	printf("%+d %+d\n",121,-121);//'+' it will force the compiler to add plus'+' sign before the positive number
	
	//# is used to provide the additional specifiers like o, x,X ,0x , 0X before the output to specify the additional information to user
	printf("%x\n",121);
	printf("%#x\n",121);
	printf("%#X\n",121);
	printf("%#o\n",121);
	
	//Precision
	printf("%.7d\n",123);//'.7' is used for precision for intger it means 
	                     //that it will take 7 place in output if number is not seven digit then the remaining paces will be filled with zeros '0'.
	printf("%.7d\n",123445678);//see what happen if the digits is greater than the precision .....no zeros before the number
	//example of precision
	printf("\nEXAMPLE of precision:\n");
	int n=55;
	float b=n*3;
	printf("%0.3f\n",b);//here b is integral value 165 but the result will be printed with 3 zeros after last digit 
	printf("%.2f\n", 1234.12345);//here precision is set upto 2 digits hence only first 2 digit after decimal will be printed 
	
	//Some Example on strings 
	printf("\nSome Example on String :\n");
	//let us take an example char array
	 char s[]="Hello Every One !";
		printf("%s\n",s );
		printf("%.5s\n",s);//just taking 5 char from the given string 
		printf("%10.5s\n",s);//taking 5 char but width is 10 so rest 5 space is filled with blank space 
		printf("%-10.5ssee\n",s);//printing 5 char with 5 blank space on right insted of left(as in previous one there is 5 space but in left)
        
		
  	//using * in printf() funtion 
	  printf("\n");
	  int x=10;
	  int y=2;
	  printf("%*.*f", x,y,1234.567);	//intsted of * you can provide any variable as well as used in this example 
                                        // x and y is passed as width and precision respectivly
                                        
}

