#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

char* delete_first(char *s, char *pattern)
{
	char *aux;
	if(strstr(s, pattern) != NULL)
	{
		aux = strstr(s, pattern) + strlen(pattern);
		printf("%s\n", aux);

		int s_len = strlen(s);
		int aux_len = strlen(aux);
		int pattern_len = strlen(pattern);
		printf("%d %d %d\n", s_len, aux_len, pattern_len);
		*(s + s_len - aux_len - pattern_len) = '\0';
		strcat(s, aux);
	}
	printf("%s\n", s);

}

int main(){
	char *s = malloc(100 * sizeof(char));
	strcpy(s, "Ana are mere");
	char *pattern = "re";

	delete_first(s, pattern);
	free(s);

	return 0;
}