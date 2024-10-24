#include "Reader.h"
   Reader::Reader(const std::string& path) : path(path), in(path) {
        Is_open();
    }

    Reader::~Reader() {
        Is_close();
    }

   Reader:: Reader(const Reader& other) : path(other.path), in(other.path) {}

    bool Reader:: Read(std::string& str) {
       getline(in, str, '\n');
        return !in.fail(); 
    }


    void Reader:: Is_open() {
        if (!in.is_open()) {
            std::cerr << "Input file not open" << std::endl;
        }
    }

    void Reader:: Is_close() {
        if (in.is_open()) {
            in.close();
        }
    }
