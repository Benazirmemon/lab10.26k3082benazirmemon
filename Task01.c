#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    char modifiedname[50];
    printf("ener the students full name");
    scanf("%[^\n]",name);
    strcpy(modifiedname,name);
    strcat(modifiedname,"FAST University");
    printf("original name: %s\n",name);
    printf("modifiedname:%s\n",modifiedname);
}
