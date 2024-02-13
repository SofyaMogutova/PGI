#include "BMPReader.h"

int main()
{
    BMPReader reader;
    reader.readFile("CAT256.bmp");
    reader.scale(0.5);
    reader.writeFile("ScaledCat.bmp");
}
