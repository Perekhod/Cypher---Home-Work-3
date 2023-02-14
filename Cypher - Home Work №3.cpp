//Cypher - Home Work ¹3
//Perekhod I.S

#include <iostream>

int main()
{
	std::cout << "Hello! I'm encryption machine by Perekhod v0.1" << std::endl;
	std::cout << "Are you interested in encryption or decryption?" << std::endl;

	repeat://11 and 127 line,return if the user wants to go back to the beginning.
	jump:  //12 and 28 line,return if entered an invalid character.

	std::cout << "To encrypt enter '+' to decrypt '-'" << std::endl;

	char x;
	std::cin >> x;
	char encrypt = 43, decrypt = 45;

	if (x == encrypt)
		std::cout << "Okay. You choosed " << encrypt << std::endl;
	else if (x == decrypt)
		std::cout << "Okay. You choosed " << decrypt << std::endl;
	else
	{
		std::cout << "You entered an invalid character" << std::endl;
		if (x != encrypt && x != decrypt)
			goto jump;
	}

	linesize://31 and 41 line, return if entered wrong number of characters
	std::cout << "Enter line size:" << std::endl;
	int size;
	std::cin >> size;

	if (std::cin.fail()) //checking for the correct number of characters in linesize
	{
		std::cout << "Incorrect input." << std::endl;
		std::cin.clear();
		while (std::cin.get()!='\n');
		goto linesize;
	}

	std::cout << "Enter a string of " << size << " letters." << std::endl;

	char arr[]{""};
	
	if (x == encrypt)
	{
		for (int i = 0; i < size; ++i)
		{
			std::cin >> arr[i]; //enter symbol
		}

		for (int i = 0; i < size; ++i)
		{
			std::cout << arr[i]; // print symbol's
		}
			std::cout << std::endl;

			std::cout << "Enter encryption integer 'X' =\n";
			int sl;// shear length
			std::cin >> sl;
			for (int i = 0; i < size; ++i)
			{
				if (arr[i] == 'z')
				{
					arr[i] = 'a';
				}
				else
				{
					arr[i] += sl;
				}
			}
			for (int i = 0; i < size; ++i)
			{
				std::cout << arr[i];
			}
			std::cout << "\n";
	}

	else if (x == decrypt)
	{
		for (int i = 0; i < size; ++i)
		{
			std::cin >> arr[i]; //enter symbol
		}

		for (int i = 0; i < size; ++i)
		{
			std::cout << arr[i]; // print symbol's
		}
			std::cout << std::endl;

			std::cout << "Enter decryption integer 'X' =\n";
			int sl;// shear length
			std::cin >> sl;
			for (int i = 0; i < size; ++i)
			{
				if (arr[i] == 'z')
				{
					arr[i] = 'a';
				}
				else
				{
					arr[i] -= sl;
				}
			}
			for (int i = 0; i < size; ++i)
			{
				std::cout << arr[i];
			}
			std::cout << "\n";
	}

	bool _true = true;
	while (_true = true)
	{
		std::cout << "Return to the beginning or close the program?" << std::endl;
		std::cout << "Enter 'r' to retern or 'q' to exit the program" << std::endl;

		char choice;//Selection variable 'repeat'or 'exit'.
		std::cin >> choice;
		switch (choice)
		{
		case 'r':
			goto repeat;
			break;

		case 'q':
			exit(0);
			break;
		}
	}
}