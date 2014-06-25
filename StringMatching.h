#ifndef _YORK_STRING_MATCHING_H

#define _YORK_STRING_MATCHING_H

#include <string.h>

int string_matching(char *src,char *target){
     size_t length_src = strlen(src);
     size_t length_target = strlen(target);
     
     if(length_target > length_src){
         return -1;             
     }
     
     size_t point_src = 0;
     size_t point_target = 0;
     
     while(point_src < length_src){
          while(point_target < length_target){
              if(src[point_src] == target[point_target]){
                    point_target++; 
                    point_src++;                       
              }else{
                    if(src[point_src] == target[0]){
                         point_src--;                         
                    }  
                    break;    
              }
          }
          if(point_target == length_target){
               size_t index = point_src - length_target;
               return index;
          }
          point_target = 0;       
          point_src++;        
     }
     
     return -1;
}

#endif
