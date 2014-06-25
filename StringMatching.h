#ifndef _YORK_STRING_MATCHING_H

#define _YORK_STRING_MATCHING_H

#include <string.h>

int string_matching(char *src,char *target){
 size_t length_src = strlen(src);
 size_t length_target = strlen(target);
 
 if(length_target > length_src){
     return -1;             
 }
 
 int point_src = 0;
 int point_target = 0;
 
 while(point_src < length_src){
 	
      if( (length_src - point_src) < length_target){
	  return -1;
      }
 
      while(point_target < length_target){
          if(src[point_src] == target[point_target]){
                point_target++; 
                point_src++;                       
          }else{
		  		int point_temp = point_src - point_target+1;
		  		for(point_temp ; point_temp <= point_src; point_temp++){
	   	             if(src[point_temp] == target[0]){
						 point_src = point_temp;  
						 point_src--;
						 break;                      
                	 }		   				   
			   }
			    
                break;    
          }
      }
      
      if(point_target == length_target){
           int index = point_src - length_target;
           return index;
      }
      
      point_target = 0;       
      point_src++;        
 }
 
 return -1;
}

#endif
