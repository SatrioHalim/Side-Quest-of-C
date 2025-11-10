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
	/*
		number continue increasing OR decreasing THEN stable
		continue increasing AND decreasing (fluctuative) THEN not stable
		
		INPUT
		Q = number of stock market price
		Ai of Q = price of stock market each time, price wont be same , guaranteed
		
		OUTPUT
		stable IF keep increasing OR decreasing
		ELSE not stable
		
		CONSTRAINT
		0 < Q <= 50 
		0 < ai <= 1,000,000 
	*/
	
	// input Q
	int numberOfStock = 0;
	do{
		printf("Input number of stock market [1 - 50]: ");
		scanf("%d",&numberOfStock);
		getchar();
	}while(numberOfStock < 1 || numberOfStock > 50);
	
	int temp1 = 0;
	int temp2 = 0;
	bool isStable = false;
	bool lock = false; // buat ngelock value unstabble
	for(int i = 1; i <= numberOfStock; i++){
		int x = 0;
		printf("Price of Stock Market #%d: ",i);
		scanf("%d",&x);
		getchar();
		if(i == 1){
			temp1 = x;	
		} else if(i == 2){
			temp2 = x;	
		} else if((temp1 < temp2 && temp2 < x) || (temp1 > temp2 && temp2 > x)){
			if(lock){
				continue;
			} else {
				isStable = true;
				temp1 = temp2;
				temp2 = x;
			}
		} else {
			isStable = false;
			lock = true;
		}
	}
	
	// decision thinking lmao
	system("cls");
	printf("Calculating...\n");
	Sleep(3000);
	system("cls");
	printf("The Decision is.....\n");
	Sleep(3000);
	system("cls");
	
	if(isStable) printf("Computer say: Stable\n");
	else printf("Computer say: Unstable\n");
	
	printf("\nPress enter to continue...");
	getchar();
}
void hollowHourglass(){
	system("cls");
	/*
		Just Loop and make hourglass
		CONSTRAITS : 
		0 < Q <= 10
	*/	

	int size;
	do{
		printf("Input Size of Hourglass [1-10]: ");
		scanf("%d",&size);
		getchar();
	}while(size < 0 || size > 10);
	
	// 5 -> 9, 3 -> 5
	int row = (size * 2) - 1;
	// bagian atas
	for(int i = 0; i < row/2; i++){
		// layer paling atas
		if(i == 0){
			for(int j = 0; j < row; j++){
				printf("* ");				
			}
		} else {
			for(int k = 0; k < row; k++){
				if(k == i + 1){
					printf("* ");
				} else if(k == size - i){
					printf("* ");
				} else {
					printf(" ");
				}
			}	
		}
		printf("\n");
	}
	// bagian tengah
	
	// bagian bawah
	
	
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
