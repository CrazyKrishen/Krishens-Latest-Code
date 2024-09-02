//2-Array of classes
#include <iostream>
#include <string>
using namespace std;

const int size=3;  //array size

class Item
{
	private:
		string name;
		double price;
		
	public:
		void inputItem();
		void outputItem();
};

void Item::inputItem()
{
	cout <<"Item name: ";
	cin >>name;
	cout <<"Item price: ";
	cin >>price;
}

void Item::outputItem()
{
	cout <<name<<" R"<<price<<endl;
}

int main()
{
	
	Item data[size];   //Now we made the object of the class an array
	
	for(int i=0; i<size; i++)  //input calling
	{
		cout <<"Item "<<i+1<<": "<<'\n';
		data[i].inputItem();     //calling function, note data[i] is the array and .inputItem() is the fucntion being called.
	}
	
	cout <<'\n'<<'\n';
	cout <<"The listed items is: "<<'\n';
	
	for(int i=0; i<size; i++) //output calling
	{
		cout <<"Item "<<i+1<<": "<<'\n';
		data[i].outputItem();     //calling function, note data[i] is the array and .outputItem() is the fucntion being called.
	}
	
	
	
	
	return 0;
}
