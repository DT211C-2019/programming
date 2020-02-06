/*
Summary: Function snippet
Author: Michael Collins
Date of Last Edit: 2020-02-06
Compiler: mingw (gcc)
*/

int range_test(int val, int low, int high){
  if(val >= low && val <= high){
    return 1;
  }//End if
  else{
    return 0;
  }//End else
}//End range_test
