#include<iostream>
using namespace std;
class Item
{
	public:
        int item_no;
        string item_name;
        float item_price;
};
class DiscountedItem : public Item
{
    public:
    	int discount_percent;
    	int discounted_price;
    	void get_details()
        {
            cout<<"\n Enter Item Name : ";
            cin>>item_name;
            cout<<"\n Enter Item No. : ";
            cin>>item_no;
			cout<<"\n Enter Item Price : ";
			cin>>item_price;
            cout<<"\n Enter Discount Percent : ";
            cin>>discount_percent;
			cout<<"\n---------------------------"<<endl;
            discounted_price = item_price - item_price * discount_percent / 100;
        }
        void display_details()
        {
            cout<<"\n Item Name : "<<item_name;
            cout<<"\n Item No.  : "<<item_no;
            cout<<"\n Item Price : "<<item_price;
			cout<<"\n Discount Percent : "<<discount_percent;
            cout<<"\n Discounted Price : "<<discounted_price;
            cout<<"\n---------------------------"<<endl;
        }
};
int main()
{
    int i, items, discount = 0, price = 0;
	DiscountedItem dt[50];
    cout<<"\n How many items you want to enter? : ";
    cin>>items;
    for(i=1; i<=items; i++)
    {
        dt[i].get_details();
    }
	for(i=1;i<=items;i++)
    {
        dt[i].display_details();
    }
    for(i=1;i<=items;i++)
    {
		price = price + dt[i].item_price;
    }
    for(i=1;i<=items;i++)
    {
        discount = discount + dt[i].item_price-dt[i].discounted_price;
    }
		cout<<"\n Total Price : "<<price;
		cout<<"\n Total Discount : "<<discount;
    	return 0;
}
