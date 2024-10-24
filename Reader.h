#pragma once

#pragma once
#include <fstream>
#include <iostream>
#include <string>
class Reader {
private:
    std::string path;
    std::ifstream in;

public:
    Reader(const std::string& path);

    ~Reader();

    Reader(const Reader& other);

    bool Read(std::string& str);

    void Is_open();

    void Is_close();
};
