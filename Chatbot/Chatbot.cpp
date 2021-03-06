// Chatbot.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>


int main()
{
	std::string Response[] = {
		"I HEARD YOU!",
		"SO, YOU ARE TALKING TO ME.",
		"CONTINUE, I'M LISTENING.",
		"VERY INTERESTING CONVERSATION.",
		"TELL ME MORE..."
	};

	srand((unsigned)time(NULL));

	std::string sInput = "";
	std::string sResponse = "";

	std::cout << "TALK TO ME, OR SAY BYE/QUIT TO EXIT" << std::endl;

	while (1) {
		std::cout << ">";
		std::getline(std::cin, sInput);
		for (int i = 0; sInput[i]; i++) {
			sInput[i] = tolower(sInput[i]);
		}
		int nSelection = rand() % 5;
		if (sInput == "bye" || sInput == "quit") {
			std::cout << "IT WAS NICE TALKING TO YOU, UNTIL NEXT TIME." << std::endl;
			break;
		}
		sResponse = Response[nSelection];
		std::cout << sResponse << std::endl;
	}

    return 0;
}

