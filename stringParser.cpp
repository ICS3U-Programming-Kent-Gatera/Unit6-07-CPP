// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date : Dec 21, 2022
// This program parses the user's string and
// prints each word on a new line

#include <bits/stdc++.h>

#include <iostream>

void DisplayWordsWithoutSpaces(std::string aString) {
    std::string word = "";
    // The iterator is a char that checks:
    for (auto iter : aString) {
        // if the character is a space...
        if (iter == ' ') {
            // Display the word (accumulated characters)
            std::cout << word << "\n";
            word = "";
        } else {
            /* If the next character is not a space,
             add it to the ones we have already. */
            word = word + iter;
        }
    }
    std::cout << word << "\n";
}

int main() {
    std::string userString;
    // Getting input.
    std::cout << "Enter a string: ";
    std::getline(std::cin, userString);

    DisplayWordsWithoutSpaces(userString);
}
