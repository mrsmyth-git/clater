#include <stdio.h>
#include <stdlib.h>

int main(int argv, char **argc){

	// declares input variables

	int num;
	int num2;
        char  choice_action;
	char  choice_operator;
	

	// starts program main loop

	while(1){

		// clears the screen - shows welcome of the program each time the loop is initiated
				
		system("clear");
		system("figlet Welcome to mrsmyths Calculator");
		printf("\n");	
	
		// prompts user for input of integers to calculate

		printf("Enter number: ");
		scanf("%d%*c", &num);
		printf("Your number is %d \n", num);
		printf("Enter Operator: ");
		scanf("%c%*c", &choice_operator);
		printf("Your operator is %c \n", choice_operator);
		printf("Enter number: ");
		scanf("%d%*c", &num2);
		printf("Your second number is %d");		






		// checks whether user inputs are equal to N or n to quit any other value entered restarts main loop
		printf("Would you like to do another calculation?(Y or N): ");
		choice_action = getchar();
		if(choice_action == 'N'){
			system("clear"); 
			return 0;	
		}
		if(choice_action == 'n'){
			system("clear"); 
			return 0;
		}else{}

		system("clear");
		
	}

	return 0;

}
