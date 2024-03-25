#include<stdio.h>
int main () {
int hour,miniute;  
//                                      	  -Ayres- :)   
                                          




printf("                                --<<hello user>>--\n");
printf("\n<<this programe request from user input number of hour and number of minute for output the time of the minute that come after the minute befor, So lets start:\n");
/*here you need to inpute number for hour from 0 to 23 and number for minute from 0 to 59*/
printf("\n                              --<<input the hour>>--\n");
printf("\n                  --<<you need to choise number from 0 to 23>>--\n");
printf("\nthe hour is: ");
/*the number must be from 0 to 23*/
scanf("%d",&hour);
printf("\n                              --<<input the minute>>-\n");
printf("\n                  --<<you need to choise number from 0 to 59>>--\n");
printf("\nthe miniute is: ");
/*the number must be from 0 to 59*/
scanf("%d",&miniute);
if((hour<0||hour>=24)||(miniute<0||miniute>=60)){
	/*if the hour was less than 0 or greater than 24 right erore and if the minute was less than 0 or greather than 60 right erore*/
	printf("\n                                 --<<try again>>--\n");
	}
	else
	if(miniute==59&&hour==23){
	/*if the miniute egale 59 and the houre egale 23 here the hour well be egale 0 and the minute will be egale 0 */	
		hour=hour*0;
		miniute=00;
		printf("\n               --<<the miniute that come after the minute befor is>>--           ");
		printf("                                  --<<%d%d:%d%d>>--\n",hour,hour,miniute,miniute);
	}
	else
	if(miniute==59){
	/*if just the minute was egale 59 here the miniute will be egale 00 and the hour will be hour plus one */
		hour=hour+1;
		miniute=miniute*0;
		printf("\n               --<<the miniute that come after the minute befor is>>--           ");
		printf("                                 --<<%d:%d%d>>--\n",hour,miniute,miniute);
	}
	else
	if((hour>0||hour<23)||(miniute>0||miniute<60)){
	/*if the hour was greather than 0 and less than 23 right minute plus one and if the miniute was graether than 0 and less than 60 right the minute plus one */
	miniute=miniute+1;
	printf("\n               --<<the miniute that come after the minute befor is>>--           ");
	printf("                               --<<%d:%d>>--\n",hour,miniute);
	}
    /*                                               well done :)                                              */


}
