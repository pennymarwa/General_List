
const int MAX_ITEMS = 5;

class unsorted_list
{
		
	public:
		
		unsorted_list();
		void MakeEmpty();
		bool IsFull();
		int GetLength();
		int GetItem(int item);
		void PutItem(int item);
		int DeleteItem(int item);
		//void ResetList();
		//int GetNextItem();
	private:
		int length;
		int info[MAX_ITEMS];
};