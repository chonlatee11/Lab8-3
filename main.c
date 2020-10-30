#include <stdio.h>
#include <string.h>
int main(void) {
  char defaultpassword[20],randompassword[20];
  int i=1;  
  do {
      if(i==1) {
          printf("Enter new password (max 10) : ");
          gets(defaultpassword);
          while(strlen(defaultpassword)>10 && i==1) {
        printf("Enter new password (max 10) : ");
        gets(defaultpassword);
        }
      }
    printf("%d Enter password : ",i);
    gets(randompassword);
    if(strcmp(defaultpassword,randompassword)==0) {
      printf("Password correct !!!");
      printf("\nPlease setup new password\n");
        i = 1;
    }
    else if(strcmp(defaultpassword,randompassword)!=0) {
      printf("Password Not correct !!!\n");
      if(i==3) printf("Close Program.");
      i++;
    }
  }while(i<=3);
  return 0;
}