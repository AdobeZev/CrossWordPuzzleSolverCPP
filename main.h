#include <iostream>

class WordPuzzle
{

	protected:

	int rowAmount;
	int columnAmount;

	private:

	public:

	int getRows();
	int getColumns();

	void setRows(int amount);
	void setColumns(int amount);	

	WordPuzzle();

};