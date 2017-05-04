
#include <fcntl.h>
#include<stdio.h>
#include <pthread.h>

#include <stdlib.h>
 
// A normal C function that is executed as a thread when its name
// is specified in pthread_create()

void *myThreadFun1(void *vargp)
{
    //sleep(1);
FILE *pFile;
FILE *pFile2;
char *buffer;
size_t len=0;

pFile=fopen("test.txt", "r");
pFile2=fopen("/dev/scull0","r+");
int sz;
if(pFile==NULL) {
    perror("Error opening file.");
}
else {
/*int k=0;*/
    while(!feof(pFile)) {
        if(getline(&buffer, &len, pFile) != -1) {
        fseek(pFile2, 0L, SEEK_END);
	//sz=ftell(pFile2);
       fprintf(pFile2, buffer);
//k++;
//printf(buffer);
    }
}}

fclose(pFile);
fclose(pFile2);
    //printf("Printing GeeksQuiz from Thread \n");
    //return NULL;
}void *myThreadFun2(void *vargp)
{
    //sleep(1);
FILE *pFile;
FILE *pFile2;
char *buffer;
size_t len=0;

pFile=fopen("test2.txt", "r");
pFile2=fopen("/dev/scull0","r+");
int sz;
if(pFile==NULL) {
    perror("Error opening file.");
}
else {
/*int k=0;*/
    while(!feof(pFile)) {
        if(getline(&buffer, &len, pFile) !=-1) {
        fseek(pFile2, 0L, SEEK_END);
	//sz=ftell(pFile2);
       fprintf(pFile2, buffer);
//k++;
//printf(buffer);
    }

}}

fclose(pFile);
fclose(pFile2);

    //printf("Printing GeeksQuiz from Thread \n");
    //return NULL;
}
int main(){
pthread_t tid1;pthread_t tid2;

 pthread_create(&tid1, NULL, myThreadFun1, NULL);

pthread_create(&tid2, NULL, myThreadFun2, NULL);
    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);
//printf("%d File Size \n",sz);
return 0;
}
