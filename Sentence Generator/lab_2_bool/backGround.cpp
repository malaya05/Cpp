#include <iostream> 
#include "Dictionary.h"

using namespace std;

Dictionary dict("nounlist.txt", "verblist.txt", "adverblist.txt", "adjectivelist.txt", "prepositionlist.txt", "articlelist.txt");

string generateNounPhrase();
string generateVerbPhrase();
string generatePrepPhrase();
void generateRandomSentence();

void start()
{
	cout << "Random Sentence Generator" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "This program will generates random Sentences." << endl;
	cout << "---------------------------------------------\n" << endl;

	int q = 0;
	while (q != 2)
	{
		cout << "Choose an option:" << endl;
		cout << "1.  Generate Random Sentence." << endl;
		cout << "2.  Quit" << endl;
		cin >> q;

		if (q == 1)
			generateRandomSentence();
		else if (q == 2)
			cout << "\nThank You for using for Random generator!" << endl;
		else
			cout << "Invalid choice! Try agian." << endl;
		cout << endl;
	}

}

string generateNounPhrase()
{
	int localRand = rand() %3 +1 ;
	
	if(localRand == 1)
		return dict.getNoun();
	else if(localRand == 2)
		return dict.getArticle() + " " + dict.getNoun();
	else
	{
		return 	generateNounPhrase() + " " + generatePrepPhrase();
	}
}
string generateVerbPhrase()
{
	int localRand = rand() % 4 + 1;

	if (localRand == 1)
		return dict.getVerb();
	else if (localRand == 2)
		return generateVerbPhrase() + " " + generateNounPhrase();
	else  if (localRand == 3)
	{
		return 	generateVerbPhrase() + " " + dict.getAdjective();
	}
	else
		return generateVerbPhrase() + " " + dict.getAdverb();

}
string generatePrepPhrase()
{
	return dict.getPreposition() + " " + generateNounPhrase();
}

void generateRandomSentence()
{
	string sentence;
	sentence = generateNounPhrase() + " \"->(VP) \" " + generateVerbPhrase();
	cout << sentence << endl;
}
