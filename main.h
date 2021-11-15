#include <iostream>
#include <vector>
#include <string>
#include <cstring>

class conversions
{

	public:

	bool checkIfStringIsInt(const std::string stringToCheck);

	bool convertStringToInt(std::string stringToConvert, int* intToChange);
	int convertStringToInt(std::string stringToConvert);

	std::string removeWhiteSpace(std::string stringToRemove);
	void removeWhiteSpace(std::string* stringToRemove);

	conversions();

};

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

	static int Rows;
	static int Columns;
	static int WordsAmount;

	// Vector setup || Rows < Columns >
	static std::vector<std::vector<char>> wordPuzzleArray;

	private:

	public:

	public:

	int getRows();
	int getColumns();
	int getWordsAmount();

	bool setRows(const int numberToSet);
	bool setColumns(const int numberToSet);
	bool setWordsAmount(const int numberToSet);

	bool setupRows();
	bool setupColumns(); 
	bool setupWords();

	WordPuzzle();

};

