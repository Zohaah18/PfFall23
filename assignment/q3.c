#include <stdio.h>
#include <string.h>

struct Personal{
    int id;
    char name[50];
};
struct Department{
    int id;
    float salary;
};
struct Combine{
    int id;
    char name[50];
    float salary;
};
int main(){
    int size=3;
    struct Personal p[3];
    struct Department d[3];
    struct Combine c[3];
    FILE *fptr=fopen("personal.txt","r");
    FILE *fptr2=fopen("department.txt","r");
    FILE *fptr3=fopen("combine.txt","w");
    if(fptr==NULL || fptr2==NULL || fptr3==NULL){
        printf("Unable to open file");
    }
    else{
        fread(p,3,sizeof(struct Personal),fptr);
        fread(d,3,sizeof(struct Department),fptr2);
        for(int i=0;i<size;i++){
            c[i].id=p[i].id;
            strcpy(c[i].name,p[i].name);
        }
        for(int i=0;i<size;i++){
         for(int j=0;j<size;j++){
            if(c[i].id==d[j].id){
                c[i].salary=d[j].salary;
            }
         }
        }
        fwrite(c,3,sizeof(struct Combine),fptr3);
         fclose(fptr);
         fclose(fptr2);
         fclose(fptr3);
    }

}
