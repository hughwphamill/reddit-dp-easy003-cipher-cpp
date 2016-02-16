#include <iostream>
#include <string>

using namespace std;

int main()
{
	void encrypt(string*, const int*);
		
	cout << "Enter a phrase: ";
	string phrase;

	getline(cin, phrase);
	cout << "Enter a cipher distance: ";
	int distance;
	cin >> distance;
	cout << endl;

	encrypt(&phrase, &distance);
	cout << "Encrypted phrase: " << phrase;
	
	int reverseDistance = 0 - distance;
	encrypt(&phrase, &reverseDistance);
	cout << endl << "Decrypted again: " << phrase;
}

void encrypt(string* phrase, const int* distance) 
{
	for (int i = 0; i < phrase->length(); i++) 
	{
		phrase->at(i) += *distance;
	}
}

