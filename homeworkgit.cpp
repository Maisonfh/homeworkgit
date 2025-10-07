#include <iostream>
#include <list>
int main()
{
	setlocale(LC_ALL, "ukr");
	std::list<int> mylist = { 6,4,3,1,2,5,8,9,10,7 };
	mylist.sort();
	for (auto my : mylist)
	{
		std::cout << my << " ";
	}
	int small{
	mylist.front()
	};
	int big{
		mylist.back()
	};
	std::cout << "\nНайменьший елем: " << small << "\nНайбiльший елем: " << big << std::endl;
	int sum = 0;
	for (auto my : mylist)
	{
		sum += my;
	}
	int average = sum / mylist.size();
	std::cout << "Це тiпа середнє значення а щяс треба удалити все нижче: " << average << std::endl;
	mylist.remove(1);
	mylist.remove(2);
	mylist.remove(3);
	mylist.remove(4);
	mylist.remove(5);
	std::cout << "Новий список: ";
	for (auto my : mylist)
	{
		std::cout << my << " ";
	}

}

