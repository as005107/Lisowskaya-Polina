#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif
void delete_any_directory(){
	char path[50];
	char command[] = "rm -r ";
	fgets(path, 50, stdin);
	strcat(command, path);
	system(command);
}
#ifdef __cplusplus
}
#endif