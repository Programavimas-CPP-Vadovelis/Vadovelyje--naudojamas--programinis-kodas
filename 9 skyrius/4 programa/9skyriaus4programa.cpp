import <iostream>;
import <string>;
import <vector>;
//
int main() {
    std::vector<std::string> names; // pavardžių sąrašui
    std::string name;  // įvedamai atskirai pavardei
    //
    // Įvedimas
    //
    for (;;) { // begalinis ciklas
        std::cout << "Enter name. Enter blank to stop\n";
        std::getline(std::cin,name); // funkcija string objektui įvesti
        if (name.empty()) break; // įvedus tuščią eilutę - ciklas baigiamas
        std::cout << "Entered:  " << name << std::endl;
        names.push_back(name); // įdėti įvestą pavardę į vector
    }
    //
    // Rūšiavimas
    //
    bool flag{}; // jei vėliavėlės reikšmė ciklo gale „taip“ - pavardės išrūšiuotos
    do {
        flag = true;
        for (size_t i = 1; i < names.size(); i++) { // size – vector ilgio funkcija
            if (names[i - 1] > names[i]) {
                names[i].swap(names[i - 1]); // swap - sukeitimo funkcija
                flag = false; // dar yra ką rūšiuoti
            }
        }
    } while (!flag);
    //
    // Išvedimas
    //
    for (auto name : names)
        std::cout << name << std::endl;
    //
}
