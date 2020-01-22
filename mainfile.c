#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define RED "\x1B[31m"
#define RESET "\x1B[0m"
#define GRN "\x1B[32m"

int main()
{
system("clear");
printf("\n\n\n");
int choice,imgchoice;
printf(RED "							Welcome to Image Enhancement Program\n" RESET);
					       									
printf("							____________________________________\n\n\n");
printf(GRN "press 0 for Orignal Photos\n" RED);
printf(GRN "press 1 for GreyScale\n" RED);
printf(GRN "print 2 for GreyScale_Average\n" RED);
printf(GRN "press 3 for Scaling\n" RED);
printf(GRN "press 4 for Histogram\n"RED); 
printf(GRN "press 5 for Negative_Image\n" RED);
printf(GRN "press 6 for Bluetone_Image\n" RED);
printf(GRN "press 7 for Sepia_Image\n" RED);
printf(GRN "press 8 for Exit\n\n" RESET);

scanf("%d",&choice);
printf(RESET);
	if (choice==0)
		{
				system("eog img1.bmp");
				system("gcc mainfile.c");
				system("./a.out");
		}
	if(choice==1)
		{
		printf("hellp there");
	system("./sh_file/greyscale.sh");
		}		
        else if(choice==2)
                {
        system("./sh_file/GreyscaleAvg.sh");
                }
	else if(choice==3)
                {
        system("./sh_file/scaling.sh");
                }
	else if(choice==4)
                {
        system("./sh_file/histogram.sh");
                }
	else if(choice==5)
                {
        system("./sh_file/negative.sh");
                }
	else if(choice==6)
                {
        system("./sh_file/bluetone.sh");
                }
	else if(choice==7)
                {
        system("./sh_file/sepia.sh");
                }
	else if(choice==8)
                {
        system("exit");
                }	
	else 
		printf("Go check your Eye_Sight \n\n\n");

return 0;

}
