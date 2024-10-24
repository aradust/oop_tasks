#include "vld.h"
#include "Writer.h"
int main() {
    std::string filePath = "text.txt"; 
    Reader myReader(filePath); 
    Capacity myCapacity; 
    myCapacity.Read(myReader); 
    std::string filePath_2 = "csv.csv";
    Writer myWriter(filePath_2);
    myWriter.Write(myCapacity);
    return 0;
}

