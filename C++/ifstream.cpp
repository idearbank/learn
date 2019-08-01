#include <iostream>
#include <fstream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::ifstream t;
    int length;
    char *buffer;
    t.open("file.txt");      // open input file

    //取文件内容长度
    t.seekg(0, std::ios::end);    // go to the end
    length = t.tellg();           // report location (this is the length)

    t.seekg(0, std::ios::beg);    // go back to the beginning

    //读取文件内容
    buffer = new char[length];    // allocate memory for a buffer of appropriate dimension
    t.read(buffer, length);       // read the whole file into the buffer
    t.close();                    // close file handle

    std::cout << "file content size: " << length << std::endl;
    std::cout << buffer << std::endl;

    return 0;
}

