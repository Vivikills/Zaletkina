#include<iostream>
#include<string>
int u;
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
		//std::cout << " ";
	}
	std::cout << "\n\n";
	u = 0;
	for (int l = 0; ; l++)
	{
	while ( u!=n )
	{
	std::cout << "Enter a letter: ";
	char letter;
	std::cin >> letter;
	int y = 0;
	int g = 0;
	u = 0;
	int r = 0;
	int q = 0;
	for ( int k = 0; k < n ;  k++)
	{   
		if (letter == t[k])
		{
			r++;
		}
		if (letter == t[k] && y == 0)
		{

			if (prob[k] == "_ ")
			{
                        std::cout << "You've guessed a letter!\n";
			prob[k] = letter;
			y++;
			}
			else if (prob[k] != "_ ")
			{
				q++;
			}

		}
		else if (letter != t[k])
		{
			g++;
		}

	}
	//if ( (q != 0 || r != 0) && q == r)
	//{
		//std::cout << "This letter has already been entered\n";
	//}
	if (g == n)
	{
		std::cout << "There isn't this letter!\n";
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
	std::cout << "\n";
	}
	}
	int c = 0;
	std::cin >> c;
	return 0;
}
