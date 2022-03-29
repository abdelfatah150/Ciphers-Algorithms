#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int modulo(int x, int n)
{
    return (x % n + n) % n;
}

void Cipher_0()
{
    string decipher_message;
    map<int, char> mp = {{0, 'A'}, {1, 'B'}, {2, 'C'}, {3, 'D'}, {4, 'E'}, {5, 'F'}, {6, 'G'},
                         {7, 'H'}, {8, 'I'}, {9, 'J'}, {10, 'K'}, {11, 'L'}, {12, 'M'}, {13, 'N'},
                         {14, 'O'}, {15, 'P'}, {16, 'Q'}, {17, 'R'}, {18, 'S'}, {19, 'T'}, {20, 'U'},
                         {21, 'V'}, {22, 'W'}, {23, 'X'}, {24, 'Y'}, {25, 'Z'}};

    cout << "\nPls Enter the message: " << endl;
    cin.clear();
    cin.sync();
    getline(cin, decipher_message);

    cout << "\nPlain text: " << decipher_message << endl;

    transform(decipher_message.begin(), decipher_message.end(), decipher_message.begin(), ::toupper);

    cout << "Cipher: ";
    for (int i = 0; i < decipher_message.size(); ++i) {

        if (decipher_message[i] == ' ') cout << ' ';

        else cout << mp[modulo(5 * (decipher_message[i] - 'A') + 8,26)];
    }

    cout << endl;
}

void DeCipher_0()
{
    string cipher_message;
    map<int, char> mp = {{0, 'A'}, {1, 'B'}, {2, 'C'}, {3, 'D'}, {4, 'E'}, {5, 'F'}, {6, 'G'},
                         {7, 'H'}, {8, 'I'}, {9, 'J'}, {10, 'K'}, {11, 'L'}, {12, 'M'}, {13, 'N'},
                         {14, 'O'}, {15, 'P'}, {16, 'Q'}, {17, 'R'}, {18, 'S'}, {19, 'T'}, {20, 'U'},
                         {21, 'V'}, {22, 'W'}, {23, 'X'}, {24, 'Y'}, {25, 'Z'}};

    cout << "\nPls Enter the message: " << endl;
    cin.clear();
    cin.sync();
    getline(cin, cipher_message);

    cout << "\nPlain text: " << cipher_message << endl;

    transform(cipher_message.begin(), cipher_message.end(), cipher_message.begin(), ::toupper);

    cout << "Decipher: ";
    for (int i = 0; i < cipher_message.size(); ++i) {

        if (cipher_message[i] == ' ') cout << ' ';

        else cout << mp[modulo(21 * (cipher_message[i] - 'A' - 8),26)];
    }

    cout << endl;
}

//------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

void Cipher_1()
{
    int fixed_num;
    string decipher_message;
    map<char, char> mp = {{' ', ' '}};

    cout << "\nPls Enter the Fixed number: " << endl;
    cin >> fixed_num;

    if (fixed_num < 0) fixed_num = (fixed_num % 26) + 26;

    for (int i=0, j = fixed_num; i < 26; ++i, j++) {

        if (j == 26) j = 0;

        mp[char('A' + i)] = char('A' + j);
    }

    cout << "Pls Enter the message: " << endl;
    cin.clear();
    cin.sync();
    getline(cin,decipher_message);

    cout << "\nPlain text: " << decipher_message << endl;

    transform(decipher_message.begin(), decipher_message.end(), decipher_message.begin(), ::toupper);

    cout << "Cipher: ";
    for (int i = 0; i < decipher_message.size(); ++i) cout << mp[decipher_message[i]];

    cout << endl;
}

void DeCipher_1()
{
    int fixed_num;
    string cipher_message;
    map<char, char> mp = {{' ', ' '}};

    cout << "\nPls Enter the Fixed number: " << endl;
    cin >> fixed_num;

    if (fixed_num < 0) fixed_num = (fixed_num % 26) + 26;

    for (int i=0, j = fixed_num; i < 26; ++i, j++) {

        if (j == 26) j = 0;

        mp[char('A' + j)] = char('A' + i);
    }

    cout << "Pls Enter the message:: " << endl;
    cin.clear();
    cin.sync();
    getline(cin,cipher_message);

    cout << "\nPlain: " << cipher_message << endl;

    transform(cipher_message.begin(), cipher_message.end(), cipher_message.begin(), ::toupper);

    cout << "DeCipher: ";

    for (int i = 0; i < cipher_message.size(); ++i) cout << mp[cipher_message[i]];
    cout << endl;
}

//------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

void Cipher_2()
{
    string cipher_message;

    map<char,char> mp = {{' ', ' '} ,{'A', 'Z'}, {'B', 'Y'}, {'C', 'X'} ,{'D', 'W'} ,{'E', 'V'} ,{'F', 'U'}, {'G', 'T'}, {'H', 'S'}, {'I', 'R'}, {'J', 'Q'}, {'K', 'P'}, {'L', 'O'}, {'M', 'N'}, {'N', 'M'}, {'O', 'L'}, {'P', 'K'}, {'Q', 'J'}, {'R', 'I'}, {'S', 'H'}, {'T', 'G'}, {'U', 'F'}, {'V', 'E'}, {'W', 'D'}, {'X', 'C'}, {'Y', 'B'}, {'Z', 'A'}};

    cout << "\nPls Enter the message: " << endl;
    cin.clear();
    cin.sync();
    getline(cin,cipher_message);

    cout << "\nPlain text: " << cipher_message << endl;

    transform(cipher_message.begin(), cipher_message.end(), cipher_message.begin(), ::toupper);

    cout << "Cipher: ";
    for (int i = 0; i < cipher_message.size(); i++)
    {
        cout << mp[cipher_message[i]];
    }
}

void DeCipher_2()
{
    string decipher_message;

    map<char,char> mp = {{' ', ' '} ,{'A', 'Z'}, {'B', 'Y'}, {'C', 'X'} ,{'D', 'W'},
                         {'E', 'V'} ,{'F', 'U'}, {'G', 'T'}, {'H', 'S'}, {'I', 'R'},
                         {'J', 'Q'}, {'K', 'P'}, {'L', 'O'}, {'M', 'N'}, {'N', 'M'},
                         {'O', 'L'}, {'P', 'K'}, {'Q', 'J'}, {'R', 'I'}, {'S', 'H'},
                         {'T', 'G'}, {'U', 'F'}, {'V', 'E'}, {'W', 'D'}, {'X', 'C'},
                         {'Y', 'B'}, {'Z', 'A'}};

    cout << "\nPls Enter the message:: " << endl;
    cin.clear();
    cin.sync();
    getline(cin,decipher_message);

    cout << "\nPlain text: " << decipher_message << endl;

    transform(decipher_message.begin(), decipher_message.end(), decipher_message.begin(), ::toupper);

    cout << "Decipher: ";
    for (int i = 0; i < decipher_message.size(); i++) cout << mp[decipher_message[i]];
}

//------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

void Cipher_3()
{
    string decipher_message, key;

    while(true) {
        cout << "\nPls Enter the key that (length <= 8) : " << endl;
        cin >> key;
        if (key.size() <= 8) break;
    }

    transform(key.begin(), key.end(), key.begin(), ::toupper);

    cout << "Pls Enter the message:: " << endl;
    cin.clear();
    cin.sync();
    getline(cin, decipher_message);

    cout << "\nPlain text: " << decipher_message << endl;

    transform(decipher_message.begin(), decipher_message.end(), decipher_message.begin(), ::toupper);

    cout << "Cipher: ";
    for (int i=0, j=0; i < decipher_message.size(); i++, j++)
    {
        if (j == key.size()) j = 0;

        if (decipher_message[i] == ' ' or isdigit(decipher_message[i])){
            cout << decipher_message[i];
            continue;
        }

        else cout << char('A' + (int(key[j]) + int(decipher_message[i])) % 26);
    }
}

void DeCipher_3()
{
    string cipher_message, key;

    while(true) {
        cout << "\nPls Enter the key that (length <= 8) : " << endl;
        cin >> key;
        if (key.size() <= 8) break;
    }

    transform(key.begin(), key.end(), key.begin(), ::toupper);

    cout << "Pls Enter the message:: " << endl;
    cin.clear();
    cin.sync();
    getline(cin, cipher_message);

    cout << "\nPlain text: " << cipher_message << endl;

    transform(cipher_message.begin(), cipher_message.end(), cipher_message.begin(), ::toupper);

    cout << "Cipher massage: ";
    for (int i=0, j=0, tmp = 0; i < cipher_message.size(); i++, j++)
    {
        if (j == key.size()) j = 0;

        if (cipher_message[i] == ' ' or isdigit(cipher_message[i])) {
            cout << cipher_message[i];
            continue;
        }
        while(char('A' + (int(key[j]) + int('A' + tmp)) % 26) != cipher_message[i]){
            tmp++;
        }
        cout << char('A' + tmp);
        tmp = 0;
    }
}

//------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

void Cipher_4()
{
    map<char, string> mp_cipher ={{'A', "aaaaa "}, {'B', "aaaab "}, {'C', "aaaba "}, {'D', "aaabb "}, {'E', "aabaa "},{'F', "aabab "},
                                  {'G', "aabba "}, {'H', "aabbb "}, {'I', "abaaa "}, {'J', "abaab "}, {'K', "ababa "}, {'L', "ababb "},
                                  {'M', "abbaa "}, {'N', "abbab "}, {'O', "abbba "}, {'P', "abbbb "}, {'Q', "baaaa "}, {'R', "baaab "},
                                  {'S', "baaba "}, {'T', "baabb "}, {'U', "babaa "}, {'V', "babab "}, {'W', "babba "}, {'X', "babbb "},
                                  {'Y', "bbaaa "}, {'Z', "bbaab "}};

    string word_decipher;

    cout << "\nPls Enter the message: " << endl;
    cin >> word_decipher;

    cout << "\nPlain text: " << word_decipher << endl;

    transform(word_decipher.begin(), word_decipher.end(), word_decipher.begin(), ::toupper);

    cout << "\nCipher: ";
    for (int i = 0; i < word_decipher.size(); ++i) cout << mp_cipher[word_decipher[i]];

    cout << endl;
}

void DeCipher_4()
{
    map<string, char> mp_decipher ={{"aaaaa", 'A'}, {"aaaab", 'B'}, {"aaaba", 'C'}, {"aaabb", 'D'}, {"aabaa", 'E'},{"aabab", 'F'},
                                    {"aabba", 'G'}, {"aabbb", 'H'}, {"abaaa", 'I'}, {"abaab", 'J'}, {"ababa", 'K'}, {"ababb", 'L'},
                                    {"abbaa", 'M'}, {"abbab", 'N'}, {"abbba", 'O'}, {"abbbb", 'P'}, {"baaaa", 'Q'}, {"baaab", 'R'},
                                    {"baaba", 'S'}, {"baabb", 'T'}, {"babaa", 'U'}, {"babab", 'V'}, {"babba", 'W'}, {"babbb", 'X'},
                                    {"bbaaa", 'Y'}, {"bbaab", 'Z'}};

    string word_cipher;

    cout << "\nPls Enter the message: " << endl;

    cin.clear();
    cin.sync();
    getline(cin, word_cipher);

    cout << "\nPlain text: " << word_cipher << endl;

    transform(word_cipher.begin(), word_cipher.end(), word_cipher.begin(), ::toupper);
    word_cipher.erase(remove(word_cipher.begin(), word_cipher.end(), ' '), word_cipher.end());
    // remove all spaces from the string(word_cipher)

    cout << "Decipher: ";
    for (int i = 0 ,k = 0; i < word_cipher.size()/5; ++i)
    {
        cout << mp_decipher[word_cipher.substr(k,5)];
        k += 5;
    }

    cout << endl;
}

//------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

void Cipher_5()
{
    string key, decipher_message;
    map<char, char> mp = {{' ',' '}};

    cout << "\nPls Enter the Key that (length = 5): " << endl;
    cin >> key;

    // make the string key lower case.
    transform(key.begin(), key.end(), key.begin(), ::tolower);

    for (int i=0; i<5; i++) mp[(char)('a' + i)] = key[i];

    for (int i=0, j=0; i < 21; i++, j++){

        while(key.find((char)('a' + j)) != string::npos) j++;

        mp[(char)('f' + i)] = (char)('a' + j);
    }

    cout << "Pls Enter the message: " << endl;
    cin.clear();
    cin.sync();
    getline(cin, decipher_message);

    cout << "\nPlain text: " << decipher_message << endl;

    // make the string deCipher_massage lower case.
    transform(decipher_message.begin(), decipher_message.end(), decipher_message.begin(), ::tolower);

    cout << "Cipher text: ";
    for (int i=0; i < decipher_message.size(); i++) cout << mp[decipher_message[i]];

    cout << endl;
}

void DeCipher_5()
{
    string key, cipher_message;
    map<char, char> mp = {{' ',' '}};

    cout << "\nPls Enter the Key that (length = 5): " << endl;
    cin >> key;

    // make the string key lower case.
    transform(key.begin(), key.end(), key.begin(), ::tolower);

    for (int i=0; i<5; i++) mp[key[i]] = (char)('a' + i);

    for (int i=0, j=0; i < 21; i++, j++){

        while(key.find((char)('a' + j)) != string::npos) j++;

        mp[(char)('a' + j)] = (char)('f' + i);
    }

    cout << "Pls Enter the message:: " << endl;
    cin.clear();
    cin.sync();
    getline(cin, cipher_message);

    cout << "\nPlain text: " << cipher_message << endl;

    // make the string deCipher_massage lower case.
    transform(cipher_message.begin(), cipher_message.end(), cipher_message.begin(), ::tolower);

    cout << "DeCipher text: ";
    for (int i=0; i < cipher_message.size(); i++) cout << mp[cipher_message[i]];

    cout << endl;
}

//------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

void Cipher_6()
{
    string decipher_message;
    int key[5];

    cout << "\nEnter the key: " << endl;
    for (int i = 0; i < 5; ++i) cin >> key[i];

    /* {{' '},{'1'},{'2'},{'3'},{'4'},{'5'},
        {'1'},{'A'},{'B'},{'C'},{'D'},{'E'},
        {'2'},{'F'},{'G'},{'H'},{'I'},{'K'},
        {'3'},{'L'},{'M'},{'N'},{'O'},{'P'},
        {'4'},{'Q'},{'R'},{'S'},{'T'},{'U'},
        {'5'},{'V'},{'W'},{'X'},{'Y'},{'Z'}};*/

    map<char, string> mp = {{' ', " "}, {'J', to_string(key[1]) + to_string(key[3])}};

    for (int i = 0, tmp = 65; i < 5; ++i) {
        for (int j = 0; j < 5; ++j, ++tmp) {

            if ((char)(tmp) == 'J') continue;

            mp[(char)(tmp)] = to_string(key[i]) + to_string(key[j]);
        }
    }

    cout << "Pls Enter the massage: " << endl;
    cin.clear();
    cin.sync();
    getline(cin,decipher_message);

    cout << "\nPlain text: " << decipher_message << endl;

    transform(decipher_message.begin(), decipher_message.end(), decipher_message.begin(), ::toupper);

    cout << "Cipher text: ";
    for (int i = 0; i < decipher_message.size(); ++i) cout << mp[decipher_message[i]];

    cout << endl;
}

void DeCipher_6()
{
    string cipher_message;
    int key[5];

    cout << "Pls Enter the key: " << endl;
    for (int i = 0; i < 5; ++i) cin >> key[i];

    map<string, char> mp = {{" ", ' '}, {to_string(key[1]) + to_string(key[3]), 'J'}};

    for (int i = 0, tmp = 65; i < 5; ++i) {
        for (int j = 0; j < 5; ++j, ++tmp) {

            if ((char)(tmp) == 'J') continue;

            mp[to_string(key[i]) + to_string(key[j])] = (char)(tmp);
        }
    }

    cout << "Pls Enter the message: " << endl;
    cin.clear();
    cin.sync();
    getline(cin,cipher_message);

    cout << "\nPlain text: " << cipher_message << endl;

    transform(cipher_message.begin(), cipher_message.end(), cipher_message.begin(), ::toupper);

    cout << "DeCipher text: ";

    for (int i = 0; i < cipher_message.size(); i+=2) {
        if (cipher_message[i] == ' ')
        {
            cout << ' ';
            i--;
            continue;
        }
        cout << mp[cipher_message.substr(i, 2)];
    }

    cout << endl;
}

//------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

void Cipher_7()
{
    string decipher_message;
    map<char, string> mp_cryption =  {{'a', ".- "}, {'b', "-... "}, {'c', "-.-. "},
                                      {'d', "-.. "}, {'e',". "}, {'f',"-.. "},
                                      {'g', "--. "}, {'h', ".... "}, {'i', ".. "},
                                      {'j' ,".--- "}, {'k', "-.- "}, {'l', ".-.. "},
                                      {'m', "-- "},{'n', "-. "}, {'o', "--- "},
                                      {'p', ".--. "} , {'q', "--.- "},{'r', ".-. "},
                                      {'s', "... "},{'t' ,"- "}, {'u', "..- "},
                                      {'v', "...- "}, {'w', ".-- "}, {'x', "-..- "},
                                      {'y', "-.-- "}, {'z', "--.. "},{' ', "   "}};

    cout << "Pls Enter the message: " << endl;
    cin.sync();
    cin.clear();
    getline(cin, decipher_message);

    cout << "\nPlain text: " << decipher_message << endl;

    transform(decipher_message.begin(), decipher_message.end(), decipher_message.begin(), ::tolower);

    cout << "Cipher: ";
    for (int i = 0; i < decipher_message.size(); i++) cout << mp_cryption[decipher_message[i]];

    cout << endl;
}
void DeCipher_7()
{
    string cipher_message;
    map<string, char> mp_decryption =  {{".- ", 'a'}, {"-... ", 'b'}, {"-.-. ", 'c'},
                                        {"-.. ",'d'},{". ",'e'}, {"-.. ",'f'},
                                        {"--. ",'g'}, {".... ", 'h'}, {".. ", 'i'},
                                        {".--- ",'j'}, {"-.- ",'k'}, {".-.. ",'l'},
                                        {"-- ",'m'},{"-. ",'n'}, {"--- ",'o'} ,
                                        {".--. ",'p'} , {"--.- ",'q'},{".-. ",'r'},
                                        {"... ",'s'},{"- ",'t'}, {"..- ",'u'},
                                        {"...- ",'v'}, {".-- ",'w'}, {"-..- ",'x'},
                                        {"-.-- ",'y'}, {"--.. ",'z'}};

    cout << "Pls Enter the message with (2 spaces per word): " << endl;
    cin.sync();
    cin.clear();
    getline(cin, cipher_message);

    size_t pos = 0;
    string token, delimiter = " ";

    cout << "\nPlain text: " << cipher_message << endl;

    cout << "Decipher: ";

    while ((pos = cipher_message.find(delimiter)) != string::npos) {

        token = cipher_message.substr(0, pos);

        cipher_message.erase(0, pos + delimiter.length());

        cout << mp_decryption[token + ' '];
    }
    cout << mp_decryption[cipher_message + ' '] << endl;
}

//------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

void Cipher_8()      // Function to cipher the message
{
    int secret = secretLetter();       // Stores the ASCII value of the secret letter to be used
    string ciphered = "", message;

    cout << "Enter the message you want to cipher: ";
    cin.clear();
    cin.sync();
    getline(cin, message);       // Takes the message from the user

    transform(message.begin(), message.end(), message.begin(), ::toupper);

    for (int i = 0; i < message.size(); i++) {   // For each letter in the message
        ciphered += char((secret ^ int(message[i])) + 96);  // XOR the secret letter and the current letter of the message
    }													    // Store each ciphered character in the string variable
    cout << "Ciphered text: " << ciphered << "  (Hexa ";   // Print the ciphered message

    for (int i = 0; i < message.length(); i++) {    // For each letter in the message
        cout << hex << (secret ^ int(message[i])) + 96;   // Print the hex of the result of XOR
    }

    cout << ")\n" << endl;
}

void DeCipher_text()              // Function to decipher the ciphered text (input in the form of text)
{
    int secret = secretLetter();
    string deciphered = "", text;
    cout << "\nEnter the text you want to decipher: " << endl;
    cin.sync();
    cin.clear();
    getline(cin, text);       // Take the ciphered text to be deciphered

    transform(text.begin(), text.end(), text.begin(), ::tolower);

    for (int i = 0; i < text.size(); i++) {
        deciphered += char((int(text[i]) -96) ^ secret);    // XOR the secret letter and the current letter of the text
    }														   // Store each deciphered character in the string variable

    transform(deciphered.begin(), deciphered.end(), deciphered.begin(), ::toupper);

    cout << "Deciphered text: " << deciphered << endl << endl;  // Print the deciphered message
}

void DeCipher_hex()				// Function to decipher the ciphered text (input in the form of hexadecimal)
{
    int secret = secretLetter(), hex;
    string deciphered = "", text, sub;
    cout << "Enter the hexadecimal you want to decipher: ";
    cin.sync();
    cin.clear();
    getline(cin, text);				// Take the hexadecimal input

    for (int i = 0; i < text.length(); i += 2) {
        sub = text.substr(i, 2);      // Take a substring of the input of length 2 (bec. the hex of a char is 2 numbers)
        hex = stoi(sub, 0, 16);       // Turn the hexadecimal string to a decimal integer
        deciphered += char( (hex - 96) ^ secret );  // XOR  the decimal value of the current character with the secret letter
    }
    cout << "Deciphered text: " << deciphered << endl << endl;  // Print the deciphered message
}

void DeCipher_8()
{
    int x;
    while (x < 1 || x > 2) {
        cout << "Enter the number of what you want to do\n";    // Ask what type of input to use
        cout << "1- Decipher text\n";
        cout << "2- Decipher hexa\n";
        cin >> x;
    }

    switch (x) {
        case 1:         // If the user chose 1
            DeCipher_text();   // call the decipher function using text
            break;
        case 2:         // If the user chose 2
            DeCipher_hex();   // call the decipher function using text
            break;
    }
}

//------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

int get_depth() {
    int depth;
    cout << "\nEnter the depth of the encryption:";
    cin >> depth;
    return depth;
}

void Cipher_9()
{
    string text;
    int key = get_depth();

    cout << "Please enter the message:" << endl;
    cin.clear();
    cin.sync();
    getline(cin, text);
    text.erase(remove(text.begin(), text.end(), ' '), text.end());

    string output = "";
    int size = text.length();
    char rail_fence[key][size];
    // initialise with null ascii value

    for (int r = 0; r < key; ++r) {
        for (int c = 0; c < size; ++c) {
            rail_fence[r][c] = 0;
        }
    }
    // create rail fence pattern with 2d array
    for (int r = 0, c = 0, d = 1; c < size; r += d, ++c) {
        rail_fence[r][c] = text[c];
        if (r == key - 1) d = -1;
        else if (r == 0) d = +1;
    }
    //  reads the 2d array row by row
    for (int r = 0; r < key; ++r) {
        for (int c = 0; c < size; ++c) {
            if (rail_fence[r][c] != 0) {
                output += rail_fence[r][c];
            }
        }
    }
    cout << output;
}
void DeCipher_9()
{
    int key = get_depth();

    cout << "Please enter the message:" << endl;
    cin.clear();
    cin.sync();
    getline(cin, original_string);
    original_string.erase(remove(original_string.begin(), original_string.end(), ' '), original_string.end());

    string output = "";
    int size = text.length();
    char rail_fence[key][size];
    // initialise with null ascii value
    for (int r = 0; r < key; ++r) {
        for (int c = 0; c < size; ++c) {
            rail_fence[r][c] = 0;
        }
    }
    // create rail fence pattern with 2d array
    for (int r = 0, c = 0, d = 1; c < size; r += d, ++c) {
        rail_fence[r][c] = '-';
        if (r == key - 1) d = -1;
        else if (r == 0) d = +1;
    }
    // tracking the pattern and assigning text value to it
    int counter = 0;
    for (int r = 0; r < key; r++) {
        for (int c = 0; c < size; c++) {
            if (rail_fence[r][c] == '-') {
                rail_fence[r][c] = text[counter++];
            }
        }
    }
    for (int r = 0, c = 0, d = 1; c < size; r += d, ++c) {
        output += rail_fence[r][c];
        if(r == key - 1) d = -1;
        else if (r == 0) d = +1;
    }
    cout << output;
}

//------------------------------------------------------------------------------------------------------------------//
//------------------------------------------------------------------------------------------------------------------//

void Cipher_choice(int choice_user)
{
    switch (choice_user) {
        case 1:
            Cipher_0();
            break;
        case 2:
            Cipher_1();
            break;
        case 3:
            Cipher_2();
            break;
        case 4:
            Cipher_3();
            break;
        case 5:
            Cipher_4();
            break;
        case 6:
            Cipher_5();
            break;
        case 7:
            Cipher_6();
            break;
        case 8:
            Cipher_7();
            break;
        case 9:
            Cipher_8();
            break;
        case 10:
            Cipher_9();
            break;
    }
}

void DeCipher_choice(int choice_user)
{
    case 1:
        DeCipher_0();
        break;
    case 2:
        DeCipher_1();
        break;
    case 3:
        DeCipher_2();
        break;
    case 4:
        DeCipher_3();
        break;
    case 5:
        DeCipher_4();
        break;
    case 6:
        DeCipher_5();
        break;
    case 7:
        DeCipher_6();
        break;
    case 8:
        DeCipher_7();
        break;
    case 9:
        DeCipher_8();
        break;
    case 10:
        DeCipher_9();
        break;
}

int main()
{
    int choice1_user, choice2_user;

    cout << "    (^_^) Welcome To Message Encryption and Decryption Program (^_^)" << endl;

    while (true) {
        cout << "\nPlease choose one of the following types of Cipher or (Exit):" << endl;

        cout << "Enter (1): Affine Cipher." << endl;
        cout << "Enter (2): Caesar Cipher." << endl;
        cout << "Enter (3): Atbash Cipher." << endl;
        cout << "Enter (4): Vignere Cipher." << endl;
        cout << "Enter (5): Baconian Cipher." << endl;
        cout << "Enter (6): Simple Substitution Cipher." << endl;
        cout << "Enter (7): Polybius Square Cipher." << endl;
        cout << "Enter (8): Morse Code." << endl;
        cout << "Enter (9): XOR Cipher." << endl;
        cout << "Enter (10): Rail-fence Cipher." << endl;
        cout << "Enter (0): Exit." << endl;

        cout << "\nEnter your choice (1:10) or (0 to Exit): ";
        cin >> choice1_user;

        if (choice1_user == 0) {
            cout << "\n     Thanks for using our program (^.^)" << endl;
            return 0;
        } else if (choice1_user > 10 || choice1_user < 0) {
            cout << "\n\"Invalid Input!!, Try again.\"" << endl;
            continue;
        }


        cout << "\nEnter (1): If you want to Encrypt a massage." << endl;
        cout << "Enter (2): If you want to Decrypt a massage." << endl;

        cout << "Enter your choice (1 or 2): ";
        cin >> choice2_user;

        if (choice2_user == 1) Cipher_choice(choice1_user);

        else if (choice2_user == 2) DeCipher_choice(choice1_user);

        else {
            cout << "\n\"Invalid Input!!, Try again.\"" << endl;
            continue;
        }
    }
}