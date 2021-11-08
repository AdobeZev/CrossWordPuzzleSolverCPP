#include "main.h"

// Get Rows and Columns Amount

// Get Rowe and Columns Length

// Fill Rows and Columns [Put them in char tables]

// Get words to find [Put in Table]

// Search rows for first letter in word

// Word Puzzle Class Setup

void WordPuzzle::setColumns(int amount)
{
	columnAmount = amount;
}

int WordPuzzle::getColumns()
{
	return columnAmount;
}

void WordPuzzle::setRows(int amount)
{
	rowAmount = amount;
}

int WordPuzzle::getRows()
{
	return rowAmount;
}

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
	// Setup

	RowsTable.reserve(rowAmount);
}

int main() {
  std::cout << "Hello World!\n";
} 