#include <stdio.h>
void printanyarray(void*array, int size, char type){
  int datatype;
 switch(type){
 case 'i':
      for(int i = 0; i < size; i++){
      printf("%d", ((int*)array)[i]);
  }
    printf("\n");
    case 'c':
      for(int i = 0; i < size; i++){
      printf("%c", ((char*)array)[i]);
}
    printf("\n");
    case 'f':
      for(int i = 0; i < size; i++){
      printf("%f", ((float*)array)[i]);
}
    printf("\n");
    break;
    default:
    break;
}
}
  int main(){
  int a[10] = {0};
  char b[10] = {'a','b','c','d','e','f','g','h','i','j'};
   float c[10] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1};
   printanyarray(a,10,'i');
   printanyarray(b,10,'c');
   printanyarray(c,10,'f');
 return 0;
} // end main
