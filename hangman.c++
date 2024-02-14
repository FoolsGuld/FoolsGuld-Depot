#include <iostream>
#include <ctime>

using namespace std;

int main(){
    string words[100] = {"administration", "advice", "advance", "agreement", "another", "approach", "audience", "behavior", "business", "campaign", "careful", "certainly", "character", "commercial", "cultural", "development", "difference", "economic", "environmental", "executive", "experience", "explain", "federal", "financial", "foreign", "future", "generation", "government", "growth", "happen", "hospital", "however", "hundred", "important", "increase", "information", "international", "issue", "kitchen", "knowledge", "language", "likely", "local", "machine", "magazine", "marriage", "message", "movement", "never", "newspaper", "nothing", "number", "official", "operation", "opportunity", "organization", "outside", "painting", "participant", "performance", "physical", "population", "professional", "purpose", "quality", "questionable", "reality", "relationship", "remember", "responsibility", "scene", "security", "significant", "situation", "something", "standard", "statement", "structure", "surface", "technology", "television", "themselves", "throughout", "together", "traditional", "treatment", "understand", "unusual", "variety", "violence", "voice", "weapon", "whatever", "whether", "window", "without", "writer", "yard", "yourself", "zip"};
    srand(time(0));
    string word = words[rand() % 100];
    int wordLength = word.length();
    for(int i=0; i< wordLength; i++){
        if()
        cout << "_ ";
    }


    return 0;
}