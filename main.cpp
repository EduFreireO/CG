#include <bits/stdc++.h>
using namespace std;

class Pixel
{
    public:
        int red, green, black;
        Pixel()
        {
            red = 0;
            green = 0;
            black = 0;
        }
};
using image = vector < vector < Pixel > >;
bool itsRedOk(int min, int max, int value)
{
    if(value >= min && value <= max)
        return true;
    return false;    
}
bool itsGreenOk(int min, int max, int value)
{
    if(value >= min && value <= max)
        return true;
    return false;
}
bool itsAlphaOk(int min, int max, int value)
{
    if(value >= min && value <= max)
        return true;
    return false;    
}


image readImageForeground()
{
    string type;
    int width, height;
    ifstream file ("sample_640×426");

    if(file.is_open())
    {
        file >> type >> width >> height;
        image img(height);
        Pixel pixel;
        
        for(int i = 0; i < height ; i++)
        {
            for(int j = 0; j < width - 3; j++)
            {       
                file >> pixel.red >> pixel.green >> pixel.black;
                img[i].push_back(pixel);     
            }
        }    
        return img;
    }
    return {};
}


int main()
{
    int redMin;
    int redMax;
    int greenMin;
    int greenMax;
    int alphaMin;
    int alphaMax;

    
}   