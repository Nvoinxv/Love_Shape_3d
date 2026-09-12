#include "matrix_rotasi.hpp"

rotasi_matrix_3d::rotasi_matrix_3d() : theta(0.0f), hasil_operasi()
{
    // kosong
}

struktur_matrix rotasi_matrix_3d::rotasi_sumbu_x(float &theta)
{
    hasil_operasi.data[0][0] = 1.0f;
    hasil_operasi.data[0][1] = 0.0f;
    hasil_operasi.data[0][2] = 0.0f;

    hasil_operasi.data[0][1] = 0.0f;
    hasil_operasi.data[1][1] = std::cos(theta);
    hasil_operasi.data[1][2] = -(std::sin(theta));

    hasil_operasi.data[2][0] = 0.0f;
    hasil_operasi.data[2][1] = std::sin(theta);
    hasil_operasi.data[2][2] = std::cos(theta);
}

struktur_matrix rotasi_matrix_3d::rotasi_sumbu_y(float &theta)
{
    hasil_operasi.data[0][0] = std::cos(theta);
    hasil_operasi.data[0][1] = 0.0f;
    hasil_operasi.data[0][2] = std::sin(theta);

    hasil_operasi.data[1][0] = 0.0f;
    hasil_operasi.data[1][1] = 1.0f;
    hasil_operasi.data[1][2] = 0.0f;

    hasil_operasi.data[2][0] = -(std::sin(theta));
    hasil_operasi.data[2][1] = 0.0f;
    hasil_operasi.data[2][2] = std::cos(theta);
}

struktur_matrix rotasi_matrix_3d::rotasi_sumbu_z(float &theta)
{
    hasil_operasi.data[0][0] = std::cos(theta);
    hasil_operasi.data[0][1] = -(std::sin(theta));
    hasil_operasi.data[0][2] = 0.0f;

    hasil_operasi.data[1][0] = std::sin(theta);
    hasil_operasi.data[1][1] = std::cos(theta);
    hasil_operasi.data[1][2] = 0.0f;

    hasil_operasi.data[2][0] = 0.0f;
    hasil_operasi.data[2][1] = 0.0f;
    hasil_operasi.data[2][2] = 0.0f;
}