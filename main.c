#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
const int TRUE = 1;
 int main(){
    int fn = socket(AF_INET, SOCK_STREAM , 0);

     while(TRUE){
         printf("Waitiing for inputtt \n");
         sleep(1);
     }
 }
