// Liam Sullivan mls6888@psu.edu
// Collaborator: Andrew Ou ajo5499@psu.edu
// Collaborator: Marvin Jakobs mjk5388@psu.edu
// Collaborator: Fletcher Henneman fdh5031@psu.edu 
// Collaborator: Brian Chetle bjc5969@psu.edu
//  Breakout11
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>


int main(void) {
double grade = atof(readline("Enter your CMPSC 131 grade: "));
 
if (grade >= 93.0 ) {
 printf("Your letter grade for CMPSC 131 is A.\n");
 }
else if (grade >= 90.0 ) {
  printf("Your letter grade for CMPSC 131 is A-.\n");
 }  
else if (grade >= 87.0 ) {
  printf("Your letter grade for CMPSC 131 is B+.\n.");
 }  
else if (grade >= 83.0 ) {
  printf("Your letter grade for CMPSC 131 is B.\n.");
 }  
else if (grade >= 80.0 ) {
  printf("Your letter grade for CMPSC 131 is B-.\n.");
 }  
else if (grade >= 77.0) {
  printf("Your letter grade for CMPSC 131 is C+.\n.");
 }  
else if (grade >= 70.0) {
 printf("Your letter grade for CMPSC 131 is C.\n.");
 }  
else if (grade >= 60.0) {
 printf("Your letter grade for CMPSC 131 is D.\n.");
 }   
else { 
 printf("Your letter grade for CMPSC 131 is F.\n.");
 }   
  
 
 
 
 
 return 0;


}