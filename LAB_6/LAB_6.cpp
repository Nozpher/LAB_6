#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string>
#include <vector>


using namespace std;

int main()
{
    string mas, g, o;
    int i = 0, b = 0, a = 0, words = 0;
    bool running = true;
    char p[255];
    vector <string> word;
    

    getline(cin, mas, '.'); // Получаем строку mas в типе string (gets(s) не работает в новой версии c++ из-за проблем с безопасностью)
    
    for (int i = 0; i < 255; i++) { // цикл на разделение слов по пробелу для последующей работы с ними
        if (mas[i] != ' ') {
            g.push_back(mas[i]);
        }
        

        else {     
            word.push_back(g);
            g.clear();
            words++;
            b = 0;
            
        } 
        b++;
        if (mas[i + 1] == NULL) {
            word.push_back(g);
            g.clear();
            words++;
            goto next_l;
        }
        
    }

    cout << "\n";

next_l:
    for (int i = 0; i < words; i++) {

        try {
            int t = stoi(word[i]);
            word[i] = " ";
        }
        catch (invalid_argument) {

        }
    }
    cout << "\n";

    for (int i = 0; i < words; i++) {

        cout << word[i] << ' ';
    }
    return 0;
}
