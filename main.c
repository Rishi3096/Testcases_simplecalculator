#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include "Calculator1.h"
int main(void)
{
  printf ("Testing Calculator using assert:");

  //Addition test cases
  assert (calc_1(24,69,1)==93);//Addition of two positive numbers
  assert (calc_1(43,-13,1)==30);//Addition of one positive one negative number
  assert (calc_1(-30,3,1)==-27);
  assert (calc_1(-31,-31,1)==-62);//Addition of two negative numbers
  printf ("\nok with addition\n");

  //subtraction test cases
  assert (calc_1(31,3,2)==28);
  assert (calc_1(3,312,2)==-309);
  assert (calc_1(-21,3,2)==-24);
  assert (calc_1(28,-31,2)==59);
  assert (calc_1(-323,-3,2)==-320);
  printf ("ok with subtraction\n");

  //multiplication test cases
  assert (calc_1(323,3,3)==969);
  assert (calc_1(-323,-3,3)==969);
  assert (calc_1(23,-3,3)==-69);
  printf ("ok with multiplication\n");

  //division test cases
  assert (calc_1(36,3,4)==12);
  assert (calc_1(33,2,4)==16);
  assert (calc_1(44,-4,4)==-11);
  assert (calc_1(-54,-2,4)==27);
 // assert (calc_1(65,0,4)==);
  assert (calc_1(0,82,4)==0);
  printf ("ok with division\n");



  return 0;

}
