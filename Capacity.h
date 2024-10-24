#pragma once
#include "Reader.h"
#include <unordered_map>
class Capacity {
private:
    std::unordered_map<std::string, long int> capacity;
    std::string line;
    int counter;

public:
    Capacity();

    Capacity(const Capacity& other);

    ~Capacity();

    void Read(Reader& reader);

    friend std::ostream& operator<<(std::ostream& os_1, const Capacity& obj);
};
