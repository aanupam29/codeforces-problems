#include <bits/stdc++.h>
using namespace std;
bool primes_table[1001];
int letter_count[26];
int main() 
{
    string s;
    cin >> s;
    for (int prime = 2; prime <= s.size() / 2; ++prime) 
    {
        if (primes_table[prime]) 
        {
            continue;
        }
        for (int prime_multiple = prime; prime_multiple <= s.size(); prime_multiple += prime) 
        {
            primes_table[prime_multiple] = true;
        }
    }
    for (char c : s) 
    {
        letter_count[c - 'a']++;
    }
    int best_letter_count = -1;
    int best_letter_index;
    char prime_letter;
    for (int i = 0; i < 26; ++i) 
    {
        if (best_letter_count < letter_count[i]) 
        {
            best_letter_count = letter_count[i];
            best_letter_index = i;
            prime_letter = 'a' + i;
        }
    }
    letter_count[best_letter_index] = 0;
    vector<char> free_chars;
    for (int letter = 0; letter < 26; ++letter) 
    {
        for (int letter_c = 0; letter_c < letter_count[letter]; ++letter_c) 
        {
            free_chars.push_back('a' + letter);
        }
    }
    string res;
    for (int i = 0; i < s.size(); ++i) 
    {
        int index = i + 1;
        if (primes_table[index])
        {
            if (best_letter_count <= 0) 
            {
                cout << "NO" << endl;
                return 0;
            }
            best_letter_count--;
            res.push_back(prime_letter);
        } 
        else
        {
            if (!free_chars.empty()) 
            {
                res.push_back(free_chars.back());
                free_chars.pop_back();
            } 
            else
            {
                if (best_letter_count <= 0) 
                {
                    cout << "NO" << endl;
                    return 0;
                }
                best_letter_count--;
                res.push_back(prime_letter);
            }
        }
    }
    cout << "YES" << endl;
    cout << res << endl;
    return 0;
}
