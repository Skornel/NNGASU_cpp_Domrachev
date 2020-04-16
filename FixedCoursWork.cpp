#include "Windows.h"
#include <stdio.h>

int main()
{

    // Объявляем структуры
    BITMAPFILEHEADER bfh_l;
    BITMAPINFOHEADER bih_l;
    BITMAPFILEHEADER bfh_2;
    BITMAPINFOHEADER bih_2;

    RGBTRIPLE rgb_l;
    RGBTRIPLE rgb_2;

    FILE* f1, * f2 , *f3;

    f1 = fopen("1.bmp", "r+b");
    f2 = fopen("2.bmp", "r+b");
    f3 = fopen("3.bmp", "w+b");


    fread(&bfh_l, sizeof(bfh_l), 1, f1);               
    fread(&bfh_2, sizeof(bfh_2), 1, f2); 
    fwrite(&bfh_2, sizeof(bfh_2), 1, f3);               //Запихиваем файловый заголовок в структуру BITMAPFILEHEADER
    fread(&bih_l, sizeof(bih_l), 1, f1);               
    fread(&bih_2, sizeof(bih_2), 1, f2);
    bih_2.biHeight *= 2;
    fwrite(&bih_2, sizeof(bih_2), 1, f3);               //Запихиваем заголовок изображения в структуру BITMAPINFOHEADER
    bih_2.biHeight /= 2;

    size_t padding = 0;
    if ((bih_l.biWidth * 3) % 4) padding = 4 - (bih_l.biWidth * 3) % 4;

    for (int i = 0; i < bih_l.biHeight; i++)
    {
        for (int j = 0; j < bih_l.biWidth; j++)
        {
            fread(&rgb_l, sizeof(rgb_l), 1, f1);
            fwrite(&rgb_l, sizeof(rgb_l), 1, f3);
        }
        if (padding != 0) {
            fread(&rgb_l, padding, 1, f1);
            fwrite(&rgb_l, padding, 1, f3);
        }
    }
    for (int i = 0; i < bih_2.biHeight; i++)
    {
        for (int j = 0; j < bih_2.biWidth; j++)
        {
            fread(&rgb_2, sizeof(rgb_2), 1, f2);
            fwrite(&rgb_2, sizeof(rgb_2), 1, f3);
        }
        if (padding != 0) {
            fread(&rgb_2, padding, 1, f2);
            fwrite(&rgb_2, padding, 1, f3);
        }

    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}
