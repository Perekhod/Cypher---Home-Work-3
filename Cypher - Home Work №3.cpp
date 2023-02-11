//Cypher - Home Work ¹3
//Perekhod I.S

#include <iostream>

int main()
{
	std::cout << "Hello! I'm encryption machine by Perekhod v0.1" << std::endl;
	std::cout << "Are you interested in encryption or decryption?" << std::endl;

	repeat://11 and 43 line, if the user wants to go back to the beginning

	std::cout << "To encrypt enter '+' to decrypt '-'" << std::endl;

	char x;
	std::cin >> x;
	char cypher = 43;
	char decryption = 45;

	if (x == cypher)
		std::cout << "Okay. You choosed " << cypher << std::endl;
	else if (x == decryption)
		std::cout << "Okay. You choosed " << decryption << std::endl;
	else
	{
		std::cout << "You entered an invalid character" << std::endl;
		goto invalidchar;
	}

	std::cout << "+";
	int size;
	std::cout << "Enter line size:" << std::endl;
	std::cin >> size;

	//try adding a long line and the article itself through a for loop!!!

	std::cout << "Enter the string:" << std::endl;


	char arr[5]{};
	std::cout << arr << std::endl;

	invalidchar:// 27 and 30 line, if enter not '+' or '-'.
	bool _true = true;
	while (_true = true)
	{
		std::cout << "Return to the beginning or close the program?" << std::endl;
		std::cout << "Enter 'r' to retern or 'q' to exit the program" << std::endl;

		char choice;
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