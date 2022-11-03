#include <stdio.h>
#include <unistd.h>

int main(void) {
  
  FILE *file;
  file = fopen("F","r");

  if(file == NULL) {
    file = fopen("F","w");
    putw(1,file);
    printf("created file F\n");
  }
  else if(file != NULL){
    printf("detected file F\n");
  }
  fclose(file);
  
  int pID = -1;
  pID = fork();
  if(pID != 0){
    pID = fork();
  }
  int i;
  for(i = 0; i<200; i++){
    file = fopen("F","r");
  int fileNum = getw(file);
  printf("\nProcessId: %d\n",pID);
  printf("The number in the file is: %d\n",fileNum);
  fclose(file);
  
  fileNum = fileNum + 1;

  file = fopen("F","w+");
  putw(fileNum,file);
  fclose(file);
  }
  waitpid(pID,0,0);
  return 0;
}
