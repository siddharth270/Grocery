#include<iostream>
using namespace std;

class Grocery {
	public:
		
		int quantity;
		char item[50];
		void enter_item()	
		{

			cout<<"\nEnter the item and the quantity of that item: ";
			cin>>item>>quantity;
			
			
		}
		
		void output()
		{
			cout<<"\nThis is your final list- ";
			cout<<"\n--------------------------";
			cout<<"\nItem: "<< item << "\tQuantity: "<< quantity;
			
		}

		
};

int main()
{
	int n,i,ch;
	cout<<"\n####### Welcome to the Grocery List #########";
	cout<<"\nEnter the number of items: ";
	cin>>n;
	class Grocery g[n];
	for(i = 0;i<n;i++)
	{
		g[n].enter_item();
	}
	
	for(i =0;i<n;i++)
	{
		g[n].output();
	}
	
	return 0;
	
}
