#ifndef MATRIX_ROTASI_HPP
#define MATRIX_ROTASI_HPP

#include <cmath>

struct struktur_matrix
{
    float data[2][2];
};

class rotasi_matrix_3d
{
private:
    float theta;

public:
    struktur_matrix rotasi_sumbu_x(float &theta);
    struktur_matrix rotasi_sumbu_y(float &theta);
    struktur_matrix rotasi_sumbu_z(float &theta);
};

#endif