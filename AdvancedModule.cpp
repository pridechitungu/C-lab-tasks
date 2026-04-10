#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// Function to reverse a string
string Reverse(string text) {
    string reversed = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

int main() {
    string fileData;

    // (i) Open file and read contents
    ifstream file("input.txt");

    if (!file) {
        cout << "Error opening file." << endl;
        return 1;
    }

    getline(file, fileData); // read entire line
    file.close();

    // (iii) Count vowels
    int vowelCount = 0;
    for (char c : fileData) {
        char lower = tolower(c);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            vowelCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;

    // (iv) Count words
    int wordCount = 0;
    stringstream ss(fileData);
    string word;

    while (ss >> word) {
        wordCount++;
    }

    cout << "Number of words: " << wordCount << endl;

    // (v) Reverse string
    cout << "Reversed statement: " << Reverse(fileData) << endl;

    // (vi) Capitalize second letter of each word
    stringstream ss2(fileData);
    string result = "";

    while (ss2 >> word) {
        if (word.length() >= 2) {
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }

    cout << "Second letter capitalized: " << result << endl;

    return 0;
}