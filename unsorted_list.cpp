#include "unsorted_list.h"
#include <iostream>

using namespace std;

int main()
{
	int value, value2;
	unsorted_list list;
	unsorted_list();
	// std::cout << "Enter the value you want to enter :";
	// std::cin >> value ;
	// std::cout << list.GetLength() << endl;
	// list.PutItem(value);
	// std::cout << list.GetLength() << endl;
	// std::cout << "Enter the 2nd value you want to enter :";
	// std::cin >> value ;
	// list.PutItem(value);
	list.PutItem(7);
	list.PutItem(4);
	list.PutItem(3);
	list.PutItem(9);
	//std::cout << list.GetLength() << endl;
	//list.MakeEmpty();
	std::cout << list.GetLength() << endl;
	//std::cout << list.IsFull();
	std::cout << "Enter the value you want to see :";
	std::cin >> value2 ;
	list.DeleteItem(value2);
	std::cout << list.GetLength() << endl;
	list.GetItem(value2);

}
unsorted_list::unsorted_list()
{
	length = 0;
	//std::cout << "hello again";
}
void unsorted_list::PutItem(int item)
{
	info[length] = item;
	length ++;
}
int unsorted_list::GetLength()
{
	return length;
	std::cout << length ;
}
bool unsorted_list::IsFull()
{
	if(length == MAX_ITEMS)
		return true;
	else
		return false;
}
void unsorted_list::MakeEmpty()
{
	length = 0;
}
int unsorted_list::GetItem(int item)
{
	int i = 0;
	while(info[i] != item)
	{
		i++;	
		if(i == MAX_ITEMS)
		{
			std::cout << "no such value exists" << endl;
			return false;
		}
	}
	std::cout << "The desired value exist at location " << i << endl;
	return i;
}
int unsorted_list::DeleteItem(int item)
{
	int j = 0;
	while(info[j] != item)
	{
		j++;	
		if(j == MAX_ITEMS)
		{
			std::cout << "no such value exists" << endl;
			return false;
		}
	}
	info[j] = info[j+1];
	length-- ;
	std::cout << "The desired value is deleted" << endl;
	return true;
}

