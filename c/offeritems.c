/** for a given array with prices of 5 item -->> [244,200,765,893,900]
 * All item have an offer 10% OFF on item.Change the array store final price after applying offer.
 * 
 */

 #include<stdio.h>

 int main() {
 
     int item[] = {230,400,300,256,890,563};
     int length = 6;
 
     for(int i = 0;i<length;i++){
          printf("Value at = %d\n",item[i]);
         int offer = item[i] / 10;
         item[i] -= offer; 
         printf("after offer = %d\n",item[i],i);
         
     }
     return 0;
 }