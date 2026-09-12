#include "vektor_3d.hpp"

operasi_vektor::operasi_vektor() : a(), b(),
                                   skalar(0.0f)
{
}

struktur_vektor_3d operasi_vektor::operasi_penjumlahan(
    struktur_vektor_3d &a,
    struktur_vektor_3d &b)
{
    return {
        a.x + b.x,
        a.y + b.y,
        a.z + b.z};
}

struktur_vektor_3d operasi_vektor::operasi_pengurangan(
    struktur_vektor_3d &a,
    struktur_vektor_3d &b)
{
    return {
        a.x - b.x,
        a.y - b.y,
        a.z - b.z};
}

struktur_vektor_3d operasi_vektor::operasi_skalar(
    struktur_vektor_3d &a,
    float &skalar)
{
    return {
        skalar * a.x,
        skalar * a.y,
        skalar * a.z};
}
