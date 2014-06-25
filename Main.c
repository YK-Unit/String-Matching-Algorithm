#include <stdio.h>
#include <string.h>
#include "StringMatching.h"

int main(void) {
//----- Test One ----//
    //char *src = "0123456789a1adadc3dad3e4efg";
    //char *target = "adc3";
    
//---- Test Two ----//
    char *src = "ababqweababqwababaqweabababbbaa";
    char *target = "ababb";
    
    int index = string_matching(src,target);
    
    if(index != -1){
       size_t length_target = strlen(target);
       printf("the src string contains the target string at index:%d",index);
       printf("\nthe target string is: ");
       int i = 0;
       for(i=0; i < length_target ;i++ ){
	      printf("%c",src[index+i]);     
       }      
    }else{
       printf("the src string doesn't contain the target string...");   
    }

    getchar();
    return 0;
}
