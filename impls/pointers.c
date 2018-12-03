#include"pointers.h"
#include<string.h>
#include<stdio.h>

void swap(int *a, int *b){
  int tmp = *b;
  *b = *a;
  *a = tmp;
}

const char *find_char(const char *str, char c){
  for(int i = 0; i < strlen(str); i++){
    if(str[i] == c){
      return &str[i];
    }
  }
  return NULL;
}

void string_copy(char *dest, const char* src){
  for(int i = 0; i < strlen(src); i++){
    dest[i] = src[i];
  }
}

int string_compare(const char *a, const char *b){
  int length = (strlen(a) > strlen(b)) ? strlen(a) : strlen(b);
  for(int i = 0; i < length; i++){
    if(!(a[i] == b[i])){
      if(a[i] < b[i]){
        return -1;
      }
      else{
        return 1;
      }
    }
    return 0;
  }
}
const char *find_string(const char *haystack, const char *needle){
  int length = strlen(haystack);
  for(int i = 0; i < length; i++){
    if(haystack[i] == needle[0]){
      for(int j = 0, l = i; l < length; j++, l++){
        const char *location = &haystack[l];
        if(haystack[l] != needle[j]){
          break;
        }
        return location;
      }
    }
  }
  return NULL;
}
