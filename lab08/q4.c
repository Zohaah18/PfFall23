/**
*Programmer:Zoha Ahmed
*Date:24 October 2023
*Desc:question 4,lab 8
*/
#include<stdio.h>
int main(){
  char password[100];
  char storedpassword[] = "Secure123";
  printf("Enter you password: ");
  scanf("%s", password);
  if(strlen(password) < 8){
  printf("Password must be 8 characters long\n");
}
  if(strcmp(password,storedpassword)==0){
  printf("Login successful");
} else{ 
  printf("Login failed");
}
return 0;
}//end main
  
