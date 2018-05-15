#include "sorted_list.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int value, value2;
	sorted_list list;
	sorted_list();
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
	// list.DeleteItem(value2);
	// std::cout << list.GetLength() << endl;
	list.GetItem(value2);

}
sorted_list::sorted_list()
{
	length = 0;
	//std::cout << "hello again";
}
int sorted_list::PutItem(int item)
{
	int i=0, j=length; 
	if(length == 0)
	{
		info[length] = item;
		length ++;
		return false;
	}
	while(item > info[i])
	{
		i++;
		if(length == i)
		{
			info[i] = item;
			return false;
		}
	}
	while(i!=j)
	{
		info[j] = info[j-1];
		j--;
	}
	info[i] = item;
	length ++;
	return 0;
}
int sorted_list::GetLength()
{
	return length;
	std::cout << length ;
}
bool sorted_list::IsFull()
{
	if(length == MAX_ITEMS)
		return true;
	else
		return false;
}
void sorted_list::MakeEmpty()
{
	length = 0;
}
int sorted_list::GetItem(int item)
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
int sorted_list::DeleteItem(int item)
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

