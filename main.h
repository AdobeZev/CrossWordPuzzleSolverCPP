#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

class WordPuzzle
{

	public:

	class RowVectInfo
	{
		protected:

		std::vector<std::string> letters;

		private:

		public:

		// Functions

		std::vector<std::string> getLetters();

		// Declaration

		RowVectInfo(int RowAmount, int ColumnAmount);
			
	};

	protected:

	int rowAmount, columnAmount;

	std::vector<RowVectInfo*> RowsTable;

	private:

	public:

	int getRows();
	int getColumns();

	void setRows(int amount);
	void setColumns(int amount);	

	WordPuzzle();

};