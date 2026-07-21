#include <iostream>
#include <ctime>

int main(){
    std::string words[] = {"short", "apple", "loves"};
    srand(time(NULL));
    int word_index = rand() % (sizeof(words)/sizeof(words[0]));
    std::string& word = words[word_index];
    std::string guess;
    do{
        std::cout << "Podaj slowo (5 liter): ";
        std::cin >> guess;
        if(guess.length() != 5) {
            continue;
        }
        for(int i = 0; i < 5; i++) {
            if(word[i] == guess[i]) {
                std::cout << word[i];
            }
            else {
                std::cout << '*';
            }
        }
        std::cout << '\n';
        
    }while(guess != word);
    std::cout << "Gratulacje! Odgadles slowo: " << word;
}
