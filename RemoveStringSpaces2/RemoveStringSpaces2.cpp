//Remove the spaces from the string, then return the resultant string.

#include <iostream>
#include <string>

std::string no_space(const std::string& x) //usuwa spacje ze stringa
{
    unsigned int amountOfSpaces = 0; //zmienna przechowująca ilość spacji ze stringa x
    for (auto it = x.cbegin(); it < x.cend(); ++it) //for zliczający ilość spacji w stringu x
    {
        if (*it == ' ')
        {
            ++amountOfSpaces;
        }
    }
    std::string newWord = {}; //nowy string, którego będziemy zwracać
    newWord.resize((x.size() - amountOfSpaces)); //nowy string ma mieć rozmiar starego stringa tylko bez spacji
    unsigned int i = 0; // zmienna i do iterowania po nowym stringu
    for (auto it = x.cbegin(); it < x.cend(); ++it) //iterujemy po starym stringu
    {
        if (*it != ' ') //jeśli znak to nie spacja to wrzucamy go do nowego stringa
        {
            newWord.at(i) = *it;
            ++i;
        }

    }
    return newWord; //zwracamy nowego stringa bez spacji
}
int main()
{
    std::string x = "Hello  world      hello world";
    std::cout << no_space(x);
}