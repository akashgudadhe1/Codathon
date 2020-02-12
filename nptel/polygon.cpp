#include<simplecpp>

main_program{
  turtleSim();
  cout<<"How many sides ? ";
  int nsides;
  cin>>nsides;

  repeat(nsides){
     penUp(5);
     right(360.0/nsides);
     wait(0.25);
  }
 
  wait(10);
}
