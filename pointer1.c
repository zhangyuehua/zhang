#include<stdio.h>
main()
{
	char *name[] = {
		"Illegal month",
		"January",	"Ferbruary",  "March",
		"April", "May", "June", 
		"July", "Augest", "September", 
		"October", "November", "December"
	};
	int i;
	i = 0;

	while(name[i] != NULL){
		printf("%s", name[i]);
		i++;	
	}
} 
