#include "bentuk_love.hpp"

Love_Bentuk_3D::Love_Bentuk_3D() : matrix(), operasi_matrix(),
                                   vektor_struktur(), operasi_hitung_vektor(),
                                   t(0.0f), s(0.0f),
                                   sudut(0.0f), pi()
{
    // kosong
}

float Love_Bentuk_3D::perhitungan_sudut(float sudut)
{
    float hasil_perhitungan;
    hasil_perhitungan = sudut * pi / 180.0f;

    return hasil_perhitungan;
}

struktur_vektor_3d Love_Bentuk_3D::bentuk_geometris_love()
{
    for (int i = 0; i < t; i++)
    {
        vektor_struktur.x = 16.0f * std::pow(std::sin(t[i]), 3.0f);
        vektor_struktur.y = (13.0f * std::cos(t[i]) - 5.0f * std::cos(2.0f * t) - 2.0f * std::cos(3.0f * t) -
                             std::cos(4.0f * t[i]));

        for (int j = -1; j = < s >= 1; j++)
        {
            vektor_struktur.z = s[j];
        }
    }

    return vektor_struktur;
}