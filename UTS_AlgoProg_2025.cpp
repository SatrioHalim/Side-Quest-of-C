#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>

void letsPlayRoblox(){
	system("cls");
	
	/*
		Q number of distinct task
		Each of Q -> Ai minutes need to complete one task and Bi number of copies of the task
		Output :
		 “LET’S PARTY BOIZZZZZ!” IF total time <= 09.00 PM
		 ELSE “Awww man! Life is not daijoubu...”
		 
		 CONSTRAITS : 
			0 < Q <= 10 
			0 < Ai <= 120 
			0 <= Bi <= 10 
			
		8am - 9pm -> 780 minutes

	*/
	
	// input Q
	int distinctTask = 0;
	do{
		printf("Input Number of Distinct Task [1 - 10]: ");
		scanf("%d",&distinctTask);	
	}while(distinctTask < 1 || distinctTask > 10);
	
	// get total minutes of task
	int totalMinutes = 0;
	for(int i = 1; i <= distinctTask;i++){
		int tempMinute;
		int tempCopy;
		printf("\nTask - %d\n", i);
		printf("--------------\n");
		printf("Time to complete task: ", i);
		scanf("%d",&tempMinute);
		printf("Many copies of task : ");
		scanf("%d",&tempCopy);
		
		// assign to total minutes for each task - i
		tempMinute *= tempCopy;
		totalMinutes += tempMinute;
		tempCopy = 0;
		tempMinute= 0;
	} 
	system("cls");
	printf("Calculating...\n");
	Sleep(3000);
	system("cls");
	printf("The Decision is.....\n");
	Sleep(3000);
	system("cls");
	
	// 8am - 9pm -> 780 minutes
	if(totalMinutes > 780){
		printf("Computer say : Awww man! Life is not daijoubu...\n");
	} else {
		printf("Computer say : LETS PARTY BOIZZZZZ!");
	}
	
	totalMinutes = 0;	
	printf("\n\nPress enter to continue...");
	getchar();
	getchar();
}
void trading(){
	system("cls");

	// code
	
	
	printf("\nPress enter to continue...");
	getchar();
}
void hollowHourglass(){
	system("cls");
	printf("Hollow Hourglass selected");
	printf("\nPress enter to continue...");
	getchar();
}
void theLoudWord(){
	system("cls");
	printf("The Loud Word selected");
	printf("\nPress enter to continue...");
	getchar();
}
void letsGoGambling(){
	system("cls");
	printf("Lets Go Gambling selected");
	printf("\nPress enter to continue...");
	getchar();
}

void menu(){
	int choice = 0;
	do{
		system("cls");
		printf("List of case solved\n");
		printf("====================\n");
		printf("1. Let's Play roblox\n");
		printf("2. Trading\n");
		printf("3. Hollow Hourglass\n");
		printf("4. The Loud Word: Revenge of the Caps Lock\n");
		printf("5. Let's Go Gambling\n");
		printf("6. Exit\n");
		printf(">> ");
		scanf("%d",&choice);
		getchar();
		switch(choice){
			case 1: 
				letsPlayRoblox();
				break;
			case 2: 
				trading();
				break;
			case 3:
				hollowHourglass();
				break;
			case 4:
				theLoudWord();
				break;
			case 5:
				letsGoGambling();
				break;
			case 6:
				system("cls");
				printf("Exiting program...");
				Sleep(3000); // setelah 5 detik / 5000ms baru line berikutnya di execute
				break;
			default:
				printf("Invalid Input! [1-6 only]\n");
				printf("Press enter to continue...");
				getchar();
				break;
		}
	}while(choice != 6);
}

void intro(){
	printf("++++++++++++++++++++++++\n");
	printf("Pre-UTS AlgoProg 2025   \n");
	printf("========================\n");
	printf("         By          \n");
	printf("    Silver Bullet    \n");
	printf("\n\nPress enter to continue...");
	getchar();
}

void closing(){
	system("cls");
	printf("Thank You... :)\n");
}


int main(){
	intro();
	menu();
	closing();	
	
	return 0;
}
