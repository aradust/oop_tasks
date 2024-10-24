#include "Capacity.h"
    Capacity::Capacity() {
        counter = 0;
    };

    Capacity::Capacity(const Capacity& other) : line(other.line), capacity(other.capacity), counter(other.counter) {}

    Capacity::~Capacity() = default;

    void Capacity:: Read(Reader& reader) {
        while (reader.Read(line)) {
            std::string word;
            for (const char ch : line) {
                if (isalpha(ch) || isdigit(ch)) {
                    word += ch;
                }
                else if (!word.empty()) { 
                    capacity[word]++;
                    counter++;
                    
                    word.clear();
                }
            }
            if (!word.empty()) { 
                capacity[word]++;
                counter++;
                
            }
        }
    }
std::ostream& operator<<(std::ostream& os_2, const Capacity& obj) {
    for (const auto& pair : obj.capacity) {
        os_2 << pair.first << "," << pair.second << "," << pair.second * 100 / obj.counter << std::endl;
    }
    return os_2;
}