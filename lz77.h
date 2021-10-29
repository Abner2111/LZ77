#ifndef LZ77_H
#define LZ77_H
#include <vector>
#include <string>

using namespace std;



class LZ77
{
public:
    LZ77();
    vector <string> getCompressed(string);
    string getDecompressed(vector<string> triplets);
private:
    



};



#endif // LZ77_H
