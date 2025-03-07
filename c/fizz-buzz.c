/**
 * FizzBuzz (Logic & Loops)
 * 
 * Write a program that prints numbers from 1 to 100.
 * 	•	For multiples of 3, print “Fizz” instead of the number.
 * 	•	For multiples of 5, print “Buzz”.
 * 	•	For numbers that are multiples of both 3 and 5, print “FizzBuzz”
 */ 

 #include <stdio.h>
 int main() {
   
     int i;
     for(i = 0;i<=100;i++){
     if (i % 3 == 0 && i % 5 == 0){
         printf("FizzBuzz\n",i);
     }
      else if(i % 3 == 0 ){
         printf("Fizz\n",i);
     }
     else if (i % 5 == 0){
         printf("Buzz\n",i);
     }
    
     else{
         printf("%d\n",i);
     }
     }
 
     return 0;
 }