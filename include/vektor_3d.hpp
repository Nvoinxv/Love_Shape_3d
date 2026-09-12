#ifndef VEKTOR_3D_HPP
#define VEKTOR_3D_HPP

#include <iostream>

struct struktur_vektor_3d
{
    float x;
    float y;
    float z;
};

class operasi_vektor
{
private:
    struktur_vektor_3d a;
    struktur_vektor_3d b;
    float skalar;

public:
    operasi_vektor();

    struktur_vektor_3d operasi_penjumlahan(
        struktur_vektor_3d &a,
        struktur_vektor_3d &b);

    struktur_vektor_3d operasi_pengurangan(
        struktur_vektor_3d &a,
        struktur_vektor_3d &b);

    struktur_vektor_3d operasi_skalar(
        struktur_vektor_3d &a,
        float &skalar);
};

#endif