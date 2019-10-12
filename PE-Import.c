#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	if(access("PE-1.txt", F_OK) != -1){
		FILE *filep;
		char file[255];
		filep = fopen("PE-1.txt","r");
		//fscanf(filep, "%s", &file);
		fgets(file,255,(FILE*)filep);
		//printf("%sn", file);
		if(strstr(file, "I want to learn PE file format!") != NULL){
			printf("%sn", file);
		}else{
			FILE *fp;
			fp = fopen("PE-1.txt","a");
			fprintf(fp, "I want to learn PE file format!");
			fclose(fp);
		}
		fclose(filep);
	}else{
		FILE *filep;
		filep = fopen("PE-1.txt","w");
		fprintf(filep, "I want to learn PE file format!");
		fclose(filep);	
	}  
	return 0;
}
