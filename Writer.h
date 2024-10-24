#pragma once
#include "Capacity.h"
class Writer {
private:
    std::string path;
    std::ofstream out;
public:
    Writer(const std::string& path);
    
    ~Writer();

    Writer(const Writer& other);

    void Write(Capacity& obj);


    void Is_open();
    

    void Is_close();
};