#include<iostream>
#include<string>
int u;
int b;
int a;
int main()
{
	std::cout << "Welcome to The Field Of Wonders!\n";
	std::cout << "Enter your word: ";
	std::string t;
	std::cin >> t;
	std::cout << t.length() << "\n";
	int n = t.length();
	std::string prob[100];
	for ( int i = 0; i < n ; i++)
	{
		prob[i] = "_ ";
		std::cout << prob[i];
	}
	std::cout << "\n\n";
	u = 0;
	b = 0;
	while (u!=n && b == 0 && a ==0)
	{
	std::cout << "Enter a letter: ";
	std::string letter;
	std::cin >> letter;
	int lens = letter.length();
	int y = 0;
	int g = 0;
	u = 0;
	int r = 0;
	int q = 0;
	if (lens == 1)
	{
	for ( int k = 0; k < n ;  k++)
	{   
		if (letter[0] == t[k])
		{
			r++;
		}
		if (letter[0] == t[k] && y == 0)
		{

			if (prob[k] == "_ ")
			{
            std::cout << "You guessed a letter!\n";
			prob[k] = letter;
			y++;
			}
			else if (prob[k] != "_ ")
			{
				q++;
			}

		}
		else if (letter[0] != t[k])
		{
			g++;
		}

	}
	if (g == n)
	{
		std::cout << "There is no such letter in the word!\n";
	}
	else
	{
	for (int x = 0; x <= n; x++)
	{
		std::cout << prob[x];
		if (prob[x] != "_ " && prob[x] != "\0")
		{
            u++;
		}
	 }
	if (u == n)
		{
			std::cout << "\n";
			std::cout << "Game Over!";
			std::cout << "\n";
		}
	std::cout << "\n";
	if ( (q != 0 || r != 0) && q == r)
	{
		std::cout << "This letter has already been entered. Tried again!\n";
	}
	} 
	}
	else if (lens >= 1)
	{
		if (t == letter)
		{
			std::cout << "You guessed the whole word! Game Over!\n";
			b++;
		}
		else if (t != letter)
		{
			std::cout << "You didn't guess the word! Game Over!\n";
			a++;
			
		}
	}
	}
	int c = 0;
	std::cin >> c;
	return 0;
}
