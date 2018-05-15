
const int MAX_ITEMS = 8;

class sorted_list
{
		
	public:
		
		sorted_list();
		void MakeEmpty();
		bool IsFull();
		int GetLength();
		int GetItem(int item);
		int PutItem(int item);
		int DeleteItem(int item);
		//void ResetList();
		//int GetNextItem();
	private:
		int length;
		int info[MAX_ITEMS];
};