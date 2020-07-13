/**
* File: phone_number_formatter.c
* Author: <<Hoang Do (do000075)>>
* Status:
* Compiles without warning(s): << True >>
* Requirement #1 - exit on input of 0: << complete >>
* Requirement #2 - not a 7-digit number: << complete >>
* Requirement #3 - invalid phone number: << complete >>
* Requirement #4 - formatted phone number: << complete >>
* Requirement #5 - loops until input of 0: << complete >>
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int number = 0;
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	do{
		int backArray[7];
		//int fixedArray[7];
		int areaCode = 0;
		int subcriber = 0;
		printf("Enter a phone number or 0 to exit: ");
		scanf("%d", &number);
		while(number != 0 && (number < 2000000 || number > 9999999)){
			printf("Enter a phone number or 0 to exit: ");
			scanf("%d", &number);
			continue;
		}
		if(number != 0){
			int n = number;
			int count = 0;
			while(n != 0){
				int digit = n % 10;
				n /= 10;
				backArray[count] = digit;
				//printf("%d", backArray[count]);
				count++;
			}
			//printf("\n");

			for(int i = 6; i >= 4; i--){
				areaCode = 10 * areaCode + backArray[i];
//				printf("AreaCode: %d", areaCode);
			}
//			printf("\n");
			for(int i = 3; i >= 0; i--){
				subcriber = 10 * subcriber + backArray[i];
//				printf("AreaCode: %d", subcriber);

			}
			printf("%d-", areaCode);
			printf("%d", subcriber);
			printf("\n");
		}
	}while(number != 0);
	printf("Exiting...");
	return EXIT_SUCCESS;
}
