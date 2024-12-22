#include<stdio.h>
int fun(float b)
{
	int m;
	printf("\n1. 07:00A.M. - 03:00P.M.\n");
	printf("2. 03:00P.M. - 11:00P.M.\n");
	printf("3. 11:00P.M. - 07:00A.M.\n");
	printf("Enter Current Time Zone:");
	scanf("%d",&m);
	if(m==1)
	{
		b*=0.1;
		return b;
	}
	if(m==2)
	{
		b*=0.2;
		return b;
	}
	if(m==3)
	{
		b*=0.3;
		return b;
	}
}
int main()
{
	int choice,subchoice,p,a;
	float bill,totalbill,finalbill,v,n,tc,s;
	printf("1.Telangana\n");
	printf("2.Maharastra\n");
	printf("3.Andhra Pradesh\n");
	printf("4.Karnataka\n");
	printf("5.Tamil Nadu\n");
	printf("Enter Your Current Location:");
	scanf("%d",&choice);
	printf("-------\n");
	printf("\n1.Two Wheeler-Bike\n");
	printf("2.Three Wheeler-Auto\n");
	printf("3.Four Wheeler-Car\n");
	printf("Choose Mode Of Transportation:");
	scanf("%d",&p);
if(p==1)
	s=18;
	if(p==2)
	s=30;
	if(p==3)
	{
		printf("\n1.Maruthi Suzuki\tRS.40 per KM\n");
		printf("2.Swift\t\t\tRS.45 per KM\n");
		printf("3.Renault\t\tRS.50 per KM\n");
		printf("4.Mahindra\t\tRS.55 per KM\n");
		printf("Enter Your Cab Choice:");
		scanf("%d",&a);
		if(a==1)
		s=40;
		if(a==2)
		s=45;
		if(a==3)
		s=50;
		if(a==4)
		s=55;
	}
	switch(choice)
	{
		case 1:
			printf("\n1.Hanamkonda\t5KM\n");
			printf("2.Warangal\t6KM\n");
			printf("3.Hasanparthy\t15KM\n");
			printf("4.Parkal\t20KM\n");
			printf("5.Hyderabad\t100KM\n");
			printf("Enter Your Desitination Location:");
			scanf("%d",&subchoice);
			switch(subchoice)
			{
				case 1:
					bill=5*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 2:
					bill=6*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 3:
					bill=15*s;
					n=fun(bill);
					
totalbill=n+bill;
					break;	
				case 4:
					bill=20*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 5:
					bill=100*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				default:
					printf("Location Not Available!!");					
			}
			break;
		case 2:
			printf("\n1.Shiridi\t15KM\n");
			printf("2.Nashik\t20KM\n");
			printf("3.Ratnagiri\t35KM\n");
			printf("4.Aurangabad\t25KM\n");
			printf("5.Solapur\t30KM\n");
			printf("Enter Your Desitination Location:");
			scanf("%d",&subchoice);
			switch(subchoice)
			{
				case 1:
					bill=15*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 2:
					bill=20*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 3:
					printf("\nSorry!!No Vehicles Available");
					goto flag;
					break;
				case 4:
					bill=25*s;
					n=fun(bill);
					totalbill=n+bill;
					
break;
				
case 5:
					bill=30*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				default:
					printf("Location Not Available!!");					
			}
			break;
		case 3:
			printf("\n1.Bhimavaram\t25KM\n");
			printf("2.Vishakapatnam\t36KM\n");
			printf("3.Chittor\t19KM\n");
			printf("4.Guntur\t22KM\n");
			printf("5.Gudimallam\t15KM\n");
			printf("Enter Your Desitination Location:");
			scanf("%d",&subchoice);
			switch(subchoice)
			{
				case 1:
					bill=25*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 2:
					bill=36*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 3:
					bill=19*s;
					n=fun(bill);
					totalbill=n+bill;
					break;	
				case 4:
					bill=22*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 5:
					bill=15*s;
					n=fun(bill);
					
totalbill=n+bill;
					break;
				default:
					printf("Location Not Available!!");		
			}
			break;
		case 4:
			printf("\n1.Ballari\t16KM\n");
			printf("2.Koppal\t17KM\n");
			printf("3.Raichur\t25KM\n");
			printf("4.Udupi\t\t20KM\n");
			printf("5.Vijayapura\t31KM\n");
			printf("Enter Your Desitination Location:");
			scanf("%d",&subchoice);
			switch(subchoice)
			{
				case 1:
					bill=16*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 2:
					bill=17*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 3:
					bill=25*s;
					n=fun(bill);
					totalbill=n+bill;
					break;	
				case 4:
					printf("\nSorry!!No Vehicles Available");
					goto flag;
					break;
				case 5:
					bill=31*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				default:
					printf("Location Not Available!!");					
			}
			break;
		
case 5:
			printf("\n1.Coimbatore\t56KM\n");
			printf("2.Kanchipuram\t17KM\n");
			printf("3.Vellore\t55KM\n");
	  	           printf("4.Madurai\t30KM\n");
			printf("5.Chennai\t70KM\n");
			printf("Enter Your Desitination Location:");
			scanf("%d",&subchoice);
			switch(subchoice)
			{
				case 1:
					bill=56*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				case 2:
					printf("\nSorry!!No Vehicles Available");
					goto flag;
					break;
				case 3:
					bill=30*s;
					n=fun(bill);
					totalbill=n+bill;
					break;	
				case 4:
					printf("\nSorry!!No Vehicles Available");
					goto flag;
					break;
				case 5:
					bill=70*s;
					n=fun(bill);
					totalbill=n+bill;
					break;
				default:
					printf("Location Not Available!!");					
			}
			break;
			default:
			printf("Location Not Available!!");
	}
	printf("\n-----\n");
	tc=totalbill*0.05;
	printf("\n5 Percent GST:%.2f",tc);
finalbill=totalbill+tc;
	
printf("\n\nYour Total Bill Is:%.2f",finalbill);
	printf("\n--------------\n");
	printf("\n\nDon't Forget To Rate us!!");
	flag:
	return 0;	
}
