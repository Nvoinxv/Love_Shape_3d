#ifndef BENTUK_LOVE_HPP
#define BENTUK_LOVE_HPP

#include <cmath>
#include "matrix_rotasi.hpp"
#include "vektor_3d.hpp"

class Love_Bentuk_3D
{
private:
    struktur_matrix matrix;
    rotasi_matrix_3d operasi_matrix;

    struktur_vektor_3d vektor_struktur;
    operasi_vektor operasi_hitung_vektor;

    float t;
    float z;

    float sudut;

    float pi = 3.14159265358979323846264;

public:
    Love_Bentuk_3D();

    float perhitungan_sudut(float sudut);

    struktur_vektor_3d bentuk_geometris_love();
    struktur_vektor_3d penggabungan_geometris_love();

    struktur_vektor_3d operasi_aljabar_vektor_geometris_love();
    struktur_matrix rotasi_pada_geometris();
};

#endif