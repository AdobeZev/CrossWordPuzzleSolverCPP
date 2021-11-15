#include "main.h"

// Variables

// Word Puzzle

// Word Puzzle Variables

int WordPuzzle::Rows = 0;
int WordPuzzle::Columns = 0;
int WordPuzzle::WordsAmount = 0;

// Word Puzzle Conversion Class

bool conversions::checkIfStringIsInt(const std::string stringToCheck)
{

	for (int i = 0; i < stringToCheck.length(); i++)
	{
		if (isdigit(stringToCheck[i]) == false)
		{
			return false;
		}
	}

	return true;

};

bool conversions::convertStringToInt(std::string stringToConvert, int* intToChange)
{

	if (!checkIfStringIsInt(stringToConvert)) 
	{
		return false;
	}

	try
	{
		*intToChange = std::stoi(stringToConvert);
		return true;
	}
	catch(...)
	{
		return false;
	};

};

int conversions::convertStringToInt(std::string stringToConvert)
{

	if (!checkIfStringIsInt(stringToConvert)) 
	{
		return false;
	}

	try
	{
		return std::stoi(stringToConvert);
	}
	catch(...)
	{
		return -1;
	}
	

};

std::string conversions::removeWhiteSpace(std::string stringToRemove)
{

	std::string newString = "";

	for (char x : stringToRemove)
	{

		if (x != ' ')
		{
			newString += x;
		}
		else
		{
			std::cout << "\n" << x << " is a space";
		}

	};

	return newString;
};

void conversions::removeWhiteSpace(std::string* stringToRemove)
{
	std::string newString = "";

	for (char x : *stringToRemove)
	{

		if (x != ' ')
		{
			std::cout << "\n" << "'" << x << "' is not a space!";
			newString += x;
		}
		else
		{
			std::cout << "\n" << x << " is a space";
		}

	};

	*stringToRemove = newString;
};

// Word Puzzle GetSets Class

int WordPuzzle::getRows()
{
	return Rows;
};

int WordPuzzle::getColumns()
{
	return Columns;
};

int WordPuzzle::getWordsAmount()
{
	return WordsAmount;
};

bool WordPuzzle::setRows(const int numberToSet)
{
	Rows = numberToSet;

	return Rows == numberToSet;
};

bool WordPuzzle::setColumns(const int numberToSet)
{
	Columns = numberToSet;

	return Columns == numberToSet;
};

bool WordPuzzle::setWordsAmount(const int numberToSet)
{
	WordsAmount = numberToSet;

	return WordsAmount == numberToSet;
};

bool WordPuzzle::setupRows()
{

	conversions currentConv;

	std::string amount;
	int amountInt;

	std::cout << "\nRows (up to down): ";
	std::getline(std::cin,amount);

	currentConv.removeWhiteSpace(&amount);

	if (!currentConv.checkIfStringIsInt(amount))
	{ 
		return false;
	}

	if (currentConv.convertStringToInt(amount, &amountInt))
	{
		try
		{
			setRows(amountInt);
			return true;
		}
		catch(...)
		{
			return false;
		}

	}
	else
	{
		std::cout << "\n\nCouldnt convert " << amount << " to int.";
		try
		{setupRows();}
		catch(...)
		{
			return false;
		}
		return true;
	}

};

bool WordPuzzle::setupColumns()
{

	conversions currentConv;

	std::string amount;
	int amountInt;

	std::cout << "\nColumns (left to right): ";
	std::getline(std::cin,amount);

	std::cout << "\nAmount: " << amount;
	currentConv.removeWhiteSpace(&amount);
	std::cout << "\nAmount: " << amount;

	if (!currentConv.checkIfStringIsInt(amount)) 
	{
		return false;
	};

	if (currentConv.convertStringToInt(amount, &amountInt))
	{
		return setColumns(amountInt);
	}
	else
	{
		std::cout << "\n\nCouldnt convert " << amount << " to int.";
		return setupColumns();
	}

};

bool WordPuzzle::setupWords()
{

	conversions currentConv;

	std::string amount;
	int amountInt;

	std::cout << "\nWords (Amount of words): ";
	std::getline(std::cin,amount);

	currentConv.removeWhiteSpace(&amount);

	if (!currentConv.checkIfStringIsInt(amount))
	{
		return false;
	}

	if (currentConv.convertStringToInt(amount, &amountInt))
	{
		return setWordsAmount(amountInt);
	}
	else
	{
		std::cout << "\n\nCouldnt convert " << amount << " to int.";
		return setupWords();
	}

};

// Conversion Class Declaration

conversions::conversions()
{

};

// Word Puzzle Declaration

// Row Vect Info

// Row Vect Info Functions

std::vector<std::string> WordPuzzle::RowVectInfo::getLetters()
{
	return letters;
};

// Row Vect Info Declartion

WordPuzzle::RowVectInfo::RowVectInfo(int RowAmount, int ColumnAmount)
{

	// Set Letters length

	letters.reserve(ColumnAmount);

}

WordPuzzle::WordPuzzle()
{
	// Get Rows

	if (setupRows() && setupColumns() && setupWords())
	{

		std::cout << "\nRows: " << getRows();
		std::cout << "\nColumns: " << getColumns();
		std::cout << "\nWords: " << getWordsAmount();

		// Start to get the Words and the characters in the word search
	
	}

};

int main()
{

	WordPuzzle newPuzzle = WordPuzzle();

	return 0;
}