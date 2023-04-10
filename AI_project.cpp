#include<iostream>
#include<string.h>
using namespace std;
void Foodcrops(string crop_name,int size_of_crop,int sowing_date1,int sowing_date2,string disease_incurred,int rain_index)
{
	int time_left[2];
	if(crop_name=="wheat")
	{
		cout<<"\nYour crop type "<<crop_name<<" belongs to the foodcrop family \n";
		cout<<"The maximum height that it can reach is 80cm-90cm. Based on the height provided by you there are still "<<(90-(size_of_crop))<<" cm left.";
		for(int i=0;i<120;i++)
		{
			if(sowing_date1<=30)
			{
				sowing_date1=sowing_date1+1;
			}
			if(sowing_date1>30)
			{
			sowing_date1=1;
			if(sowing_date2<12)
			sowing_date2=sowing_date2+1;
		    }
		    if(sowing_date2>=12)
			{
				sowing_date2=1;
			}
		}
		time_left[0]=sowing_date1;
		time_left[1]=sowing_date2;
		cout<<"\nIt takes 120 days for wheat to grow before it is ready to be harvested. Hence the approximate harvesting date is "<<time_left[0]<<" days "<<time_left[1]<<" months ";
		if((disease_incurred=="barleyyellowdwarf")||(disease_incurred=="blackchaff"))
		{
			cout<<"\nYour plant is suffering from "<<disease_incurred<<" disease.The possible solution for this disease is controlling grassy weeds and volunteer cereals and managing irrigation in such a way as to allow a plant canopy to dry completely between irrigations.";
		}
		if(rain_index>50&&rain_index<100)
		{
		cout<<"\nThe rain index is as per the requirement.No further irrigation is required.";
	    }
	    if(rain_index<50)
	    {
	    	cout<<"\nThe rain index is lower than required.Irrigation is required.";
		}
		if(rain_index>100)
		{
			cout<<"\nThe rain index is higher than required.";
		}
	}
	if(crop_name=="maize")
	{
		cout<<"\nYour crop type "<<crop_name<<" belongs to the foodcrop family \n";
		cout<<"The maximum height that it can reach is 2.5m-3m. Based on the height provided by you there are still "<<(300-(size_of_crop))<<" cm left.";
		for(int i=0;i<95;i++)
		{
			if(sowing_date1<=30)
			{
				sowing_date1=sowing_date1+1;
			}
			if(sowing_date1>30)
			{
			sowing_date1=1;
			if(sowing_date2<12)
			sowing_date2=sowing_date2+1;
		    }
		    if(sowing_date2>=12)
			{
				sowing_date2=1;
			}
		}
		time_left[0]=sowing_date1;
		time_left[1]=sowing_date2;
		cout<<"\nIt takes 95 days for maize to grow before it is ready to be harvested. Hence the approximate harvesting date is "<<time_left[0]<<" days "<<time_left[1]<<" months ";
		if((disease_incurred=="stalkrot")||(disease_incurred=="latewitt"))
		{
			cout<<"\nYour plant is suffering from "<<disease_incurred<<" disease.The possible solution for this disease is to avoid water loggingand and use disease resistance varities i.e DHM103 , Ganga Safed2.";
		}
		if(rain_index>60&&rain_index<110)
		{
		cout<<"\nThe rain index is as per the requirement.No further irrigation is required.";
	    }
	    if(rain_index<60)
	    {
	    	cout<<"\nThe rain index is lower than required.Irrigation is required.";
		}
		if(rain_index>110)
		{
			cout<<"\nThe rain index is higher than required.";
		}
	}
	if(crop_name=="rice")
	{
		cout<<"\nYour crop type "<<crop_name<<" belongs to the foodcrop family \n";
		cout<<"The maximum height that it can reach is 1m-1.8m. Based on the height provided by you there are still "<<(100-(size_of_crop))<<" cm left.";
		for(int i=0;i<135;i++)
		{
			if(sowing_date1<=30)
			{
				sowing_date1=sowing_date1+1;
			}
			if(sowing_date1>30)
			{
			sowing_date1=1;
			if(sowing_date2<12)
			sowing_date2=sowing_date2+1;
		    }
		    if(sowing_date2>=12)
			{
				sowing_date2=1;
			}
		}
		time_left[0]=sowing_date1;
		time_left[1]=sowing_date2;
		cout<<"\nIt takes 135 days for rice to grow before it is ready to be harvested. Hence the approximate harvesting date is "<<time_left[0]<<" days "<<time_left[1]<<" months ";
		if(disease_incurred=="sheathblight")
		{
			cout<<"\nYour plant is suffering from "<<disease_incurred<<" disease.The possible solution for this disease is use of plant resistant varities and fungicides.";
		}
		if(rain_index>75&&rain_index<115)
		{
		cout<<"\nThe rain index is as per the requirement.No further irrigation is required.";
	    }
	    if(rain_index<75)
	    {
	    	cout<<"\nThe rain index is lower than required.Irrigation is required.";
		}
		if(rain_index>115)
		{
			cout<<"\nThe rain index is higher than required.";
		}
	}
}
void Cashcrops(string crop_name,int size_of_crop,int sowing_date1,int sowing_date2,string disease_incurred,int rain_index)
{
	int time_left[2];
	if(crop_name=="sugarcane")
	{
		cout<<"\nYour crop type "<<crop_name<<" belongs to the cashcrops family \n";
		cout<<"The maximum height that it can reach is 2m-6m. Based on the height provided by you there are still "<<(600-(size_of_crop))<<" cm left.";
		for(int i=0;i<480;i++)
		{
			if(sowing_date1<=30)
			{
				sowing_date1=sowing_date1+1;
			}
		   if(sowing_date1>30)
			{
			sowing_date1=1;
			if(sowing_date2<12)
			sowing_date2=sowing_date2+1;
		    }
		    if(sowing_date2>=12)
			{
				sowing_date2=1;
			}
		}
		time_left[0]=sowing_date1;
		time_left[1]=sowing_date2;
		cout<<"\nIt takes 480 days for sugarcane to grow before it is ready to be harvested. Hence the approximate harvesting date is "<<time_left[0]<<" days "<<time_left[1]<<" months ";
		if((disease_incurred=="redrot")||(disease_incurred=="redstripe"))
		{
			cout<<"\nYour plant is suffering from "<<disease_incurred<<" disease.The possible solution for this disease is phytosanitation.";
		}
		if(rain_index>110&&rain_index<150)
		{
		cout<<"\nThe rain index is as per the requirement.No further irrigation is required.";
	    }
	    if(rain_index<110)
	    {
	    	cout<<"\nThe rain index is lower than required.Irrigation is required.";
		}
		if(rain_index>150)
		{
			cout<<"\nThe rain index is higher than required.";
		}
	}
	if(crop_name=="tobacco")
	{
		cout<<"\nYour crop type "<<crop_name<<" belongs to the cashcrops family \n";
		cout<<"The maximum height that it can reach is 1.2m-1.8m. Based on the height provided by you there are still "<<(180-(size_of_crop))<<" cm left.";
		for(int i=0;i<100;i++)
		{
			if(sowing_date1<=30)
			{
				sowing_date1=sowing_date1+1;
			}
			if(sowing_date1>30)
			{
			sowing_date1=1;
			if(sowing_date2<12)
			sowing_date2=sowing_date2+1;
		    }
		    if(sowing_date2>=12)
			{
				sowing_date2=1;
			}
		}
		time_left[0]=sowing_date1;
		time_left[1]=sowing_date2;
		cout<<"\nIt takes 100 days for tobacco to grow before it is ready to be harvested. Hence the approximate harvesting date is "<<time_left[0]<<" days "<<time_left[1]<<" months ";
		if((disease_incurred=="dampingoff")||(disease_incurred=="blackshank"))
		{
			cout<<"\nYour plant is suffering from "<<disease_incurred<<" disease.The possible solution for this disease is to burn the seed beds with paddy husk before sowing and another solution is to destroy the affected plants.";
		}
		if(rain_index>75&&rain_index<125)
		{
		cout<<"\nThe rain index is as per the requirement.No further irrigation is required.";
	    }
	    if(rain_index<75)
	    {
	    	cout<<"\nThe rain index is lower than required.Irrigation is required.";
		}
		if(rain_index>125)
		{
			cout<<"\nThe rain index is higher than required.";
		}
	}
	if(crop_name=="cotton")
	{
		cout<<"\nYour crop type "<<crop_name<<" belongs to the cashcrops family \n";
		cout<<"The maximum height that it can reach is 1m-1.3m. Based on the height provided by you there are still "<<(130-(size_of_crop))<<" cm left.";
		for(int i=0;i<160;i++)
		{
			if(sowing_date1<=30)
			{
				sowing_date1=sowing_date1+1;
			}
			if(sowing_date1>30)
			{
			sowing_date1=1;
			if(sowing_date2<12)
			sowing_date2=sowing_date2+1;
		    }
		    if(sowing_date2>=12)
			{
				sowing_date2=1;
			}
		}
		time_left[0]=sowing_date1;
		time_left[1]=sowing_date2;
		cout<<"\nIt takes 160 days for cotton to grow before it is ready to be harvested. Hence the approximate harvesting date is "<<time_left[0]<<" days "<<time_left[1]<<" months ";
		if((disease_incurred=="rootrot")||(disease_incurred=="bollrot"))
		{
			cout<<"\nYour plant is suffering from "<<disease_incurred<<" disease.The possible solution for this disease is to adopt optimum spacing and inter cropping with sorgum and moth bean.";
		}
		if(rain_index>50&&rain_index<75)
		{
		cout<<"\nThe rain index is as per the requirement.No further irrigation is required.";
	    }
	    if(rain_index<50)
	    {
	    	cout<<"\nThe rain index is lower than required.Irrigation is required.";
		}
		if(rain_index>75)
		{
			cout<<"\nThe rain index is higher than required.";
		}
	}
}
void Plantationcrops(string crop_name,int size_of_crop,int sowing_date1,int sowing_date2,string disease_incurred,int rain_index)
{
	int time_left[2];
	if(crop_name=="coffee")
	{
		cout<<"\nYour crop type "<<crop_name<<" belongs to the plantation crops family \n";
		cout<<"The maximum height that it can reach is 1.6m-1.8m. Based on the height provided by you there are still "<<(180-(size_of_crop))<<" cm left.";
		cout<<"\nIt takes 1228 days for coffee to grow before it is ready to be harvested.";
		if((disease_incurred=="berryborer")||(disease_incurred=="rootmealybug"))
		{
			cout<<"\nYour plant is suffering from "<<disease_incurred<<" disease.The possible solution for this disease is bottle trapping and use products like dimethoate and diazinon";
		}
		if(rain_index>100&&rain_index<200)
		{
		cout<<"\nThe rain index is as per the requirement.No further irrigation is required.";
	    }
	    if(rain_index<100)
	    {
	    	cout<<"\nThe rain index is lower than required.Irrigation is required.";
		}
		if(rain_index>200)
		{
			cout<<"\nThe rain index is higher than required.";
		}
	}
	if(crop_name=="tea")
	{
		cout<<"\nYour crop type "<<crop_name<<" belongs to the plantation crops family \n";
		cout<<"The maximum height that it can reach is 6m. Based on the height provided by you there are still "<<(600-(size_of_crop))<<" cm left.";
		cout<<"\nIt takes 1095 days for tea to grow before it is ready to be harvested.";
		if((disease_incurred=="algolleafspot")||(disease_incurred=="blisterblight"))
		{
			cout<<"\nYour plant is suffering from "<<disease_incurred<<" disease.The possible solution for this disease is to apply appropriate fungicides and avoid overhead irrigation.";
		}
		if(rain_index>150&&rain_index<200)
		{
		cout<<"\nThe rain index is as per the requirement.No further irrigation is required.";
	    }
	    if(rain_index<150)
	    {
	    	cout<<"\nThe rain index is lower than required.Irrigation is required.";
		}
		if(rain_index>200)
		{
			cout<<"\nThe rain index is higher than required.";
		}
	}
	if(crop_name=="rubber")
	{
		cout<<"\nYour crop type "<<crop_name<<" belongs to the cashcrops family \n";
		cout<<"The maximum height that it can reach is 15-30m. Based on the height provided by you there are still "<<(300-(size_of_crop))<<" cm left.";
		cout<<"\nIt takes 13 years for rubber to grow before it is ready to be harvested.";
		if((disease_incurred=="leafspot")||(disease_incurred=="leafblight"))
		{
			cout<<"\nYour plant is suffering from "<<disease_incurred<<" disease.The possible solution for this disease is weekly spraying with dithane M-45 and use of fungicides like vitigram blue and daconil.";
		}
		if(rain_index<200)
		{
	    	cout<<"\nThe rain index is lower than required.Irrigation is required.";
		}
	}
}
int main()
{

	cout<<"Please pick the appropriate option resembling you choice. \n\n"<<"Enter 1 for Food crops \n"<<"Enter 2 for Cash crops \n"<<"Enter 3 for Plantation crops.\n";
	int choice;   // declaration of variable for choice pick.
	cin>>choice;
	string crop_name;
	int size_of_crop;
	int sowing_date[2];
	string disease_incurred;
	int rain_index;    // line 24 to 29 declares the six parameters we need, to produce the output.
	switch(choice)
	{
		case 1:
			cout<<"Enter the Crop name(e.g rice,wheat etc.) \t";
			cin>>crop_name;
			cout<<"Enter the size of the crop(in cm) \t";
			cin>>size_of_crop;
			cout<<"Enter the sowing date(dd) \t";
			cin>>sowing_date[0];
			cout<<"Enter the sowing date(mm) \t";
			cin>>sowing_date[1];
			cout<<"Enter the disease incurred by the plant(if any) \t";
			cin>>disease_incurred;
			cout<<"Enter the rain index(in mm) \t";
			cin>>rain_index;  //line 30 to 43 initiates these variables.
			Foodcrops(crop_name,size_of_crop,sowing_date[0],sowing_date[1],disease_incurred,rain_index);
			break;
		case 2:

			cout<<"Enter the Crop name(e.g rice,wheat etc.) \t";
			cin>>crop_name;
			cout<<"Enter the size of the crop(in cm) \t";
			cin>>size_of_crop;
			cout<<"Enter the sowing date(dd) \t";
			cin>>sowing_date[0];
			cout<<"Enter the sowing date(mm) \t";
			cin>>sowing_date[1];
			cout<<"Enter the disease incurred by the plant(if any) \t";
			cin>>disease_incurred;
			cout<<"Enter the rain index(in mm) \t";
			cin>>rain_index;  //line 30 to 43 initiates these variables.
			Cashcrops(crop_name,size_of_crop,sowing_date[0],sowing_date[1],disease_incurred,rain_index);
			break;
		case 3:
			
			cout<<"Enter the Crop name(e.g rice,wheat etc.) \t";
			cin>>crop_name;
			cout<<"Enter the size of the crop(in cm) \t";
			cin>>size_of_crop;
			cout<<"Enter the sowing date(dd) \t";
			cin>>sowing_date[0];
			cout<<"Enter the sowing date(mm) \t";
			cin>>sowing_date[1];
			cout<<"Enter the disease incurred by the plant(if any) \t";
			cin>>disease_incurred;
			cout<<"Enter the rain index(in mm)\t";
			cin>>rain_index;  //line 30 to 43 initiates these variables.
			Plantationcrops(crop_name,size_of_crop,sowing_date[0],sowing_date[1],disease_incurred,rain_index);
			break;
	}
	return 0;
}
