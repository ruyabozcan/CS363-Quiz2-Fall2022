#include <stdio.h>
int readNums(char filename[], int arr[]);
int main(void) {
  int numbers[100];
  int count=readNums("data.txt",numbers);
  for(int j=0;j<count;j++)
   printf("numbers[%d]=%d\n",j,numbers[j]);
  return 0;
}
int readNums(char filename[], int arr[]){
 FILE *fp=fopen(filename,"r");
 int i=0; 
 while(!feof(fp))
    fscanf(fp,"%d",&arr[i++]);
 return i-1;  
}
