#include<stdio.h>
int main()
{
	int day;
	printf("[1] Monday\n[2] Tuesday\n[3] Wednesday\n[4] Thursday\n[5] Friday\n[6] Saturday\n[7] Sunday\nEnter week day : ");
	scanf("%d", & day);
	switch (day)
	{
	case 1:
		printf("09:30-10:10 MATH\n10:10-10:50 MATH\n10:50-11:30 ENG\n11:30-12:10 FCPC\n12:10-12:50 LUNCH\n12:50-01:30 PHY\n01:30-02:10 CHEM\n02:10-02:50 ET LAB\n02:50-03:30 ET LAB\n");
		break;
	case 2:
		printf("09:30-10:10 ENG\n10:10-10:50 MATH\n10:50-11:30 ET\n11:30-12:10 CHEM\n12:10-12:50 LUNCH\n12:50-01:30 EG\n01:30-02:10 ET\n02:10-02:50 FCPC\n02:50-03:30 PHY\n");
		break;
	case 3:
		printf("09:30-10:10 SFP\n10:10-10:50 SFP\n10:50-11:30 PHY\n11:30-12:10 FCPC\n12:10-12:50 LUNCH\n12:50-01:30 PHY/CHEM LAB\n01:30-02:10 PHY/CHEM LAB\n02:10-02:50 ET LAB\n02:50-03:30 ET LAB\n");
		break;
	case 4:
		printf("09:30-10:10 SFP\n10:10-10:50 MATH\n10:50-11:30 FCPC LAB\n11:30-12:10 FCPC LAB\n12:10-12:50 LUNCH\n12:50-01:30 SFP LAB\n01:30-02:10 SFP LAB\n02:10-02:50 ET ENG\n02:50-03:30 BEE\n");
		break;
	case 5:
		printf("09:30-10:10 PHY/CHEM LAB\n10:10-10:50 PHY/CHEM LAB\n10:50-11:30 PHY\n11:30-12:10 FCPC\n12:10-12:50 LUNCH\n12:50-01:30 CHEM\n01:30-02:10 FL\n02:10-02:50 FL\n02:50-03:30\n");
		break;
	case 6:
		printf("WHAT YOU ARE LOOKING AT! EH? YOU GOT STUFF TO DO.\n");
		break;
	case 7:
		printf("WHAT YOU ARE LOOKING AT! EH? YOU GOT STUFF TO DO.\n");
		break;
	}
}
