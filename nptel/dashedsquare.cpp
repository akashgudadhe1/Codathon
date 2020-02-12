/*
 * Author: Akash Gudadhe
 * Program to print dashed sqaure
 */

#include<simplecpp>

main_program{
   turtleSim(); 

   cout<<"How many sides ? ";
   int nsides;
   cin>>nsides;

    repeat(nsides){
     repeat(3){
        forward(10);
        penUp();
        forward(10);
        penDown();
     }
     
     right(90);
   }
   
   wait(10);    
}
