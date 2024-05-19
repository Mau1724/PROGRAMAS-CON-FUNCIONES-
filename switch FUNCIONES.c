	#include <stdio.h>
	
	int getDaysInMonth(int month, int year) 
	{
	    int days = 0;
	    switch (month) 
		{
	        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	            days = 31;
	            break;
	        case 4: case 6: case 9: case 11:
	            days = 30;
	            break;
	        case 2:
	            // February
	            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	                days = 29;
	            else
	                days = 28;
	            break;
	        default:
	            printf("\nEl mes no es válido\n");
	            break;
	    }
	    return days;
	}
	
	int main() 
	{
	    int dd = 0, mm = 0, aa = 0;
	    printf("Introducir mes (##) y año (####): ");
	    scanf("%d %d", &mm, &aa);
	
	    int daysInMonth = getDaysInMonth(mm, aa);
	
	    if (mm >= 1 && mm <= 12)
	        printf("\nEl mes %d del año %d tiene %d días\n", mm, aa, daysInMonth);
	
	    return 0;
	}				
