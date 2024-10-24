#include "Writer.h"

    Writer::Writer(const std::string& path) : path(path), out(path) {
        Is_open();
    }

    Writer::~Writer() {
        Is_close();
    }

    Writer::Writer(const Writer& other) : path(other.path), out(other.path) {}

    void Writer::Write(Capacity& obj) {
        out << "word," << "frequency," << "%" << std::endl;;
        out << obj;

    }


    void Writer:: Is_open() {
        if (!out.is_open()) {
            std::cerr << "Output file not open" << std::endl;
        }
    }

    void Writer:: Is_close() {
        if (out.is_open()) {
            out.close();
        }
    }
