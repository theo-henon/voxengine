#include "matrix.hh"

namespace voxengine::math
{
    template <unsigned M, unsigned N>
    unsigned Matrix<M, N>::get_rows() const
    {
        return M;
    }

    template <unsigned M, unsigned N>
    unsigned Matrix<M, N>::get_cols() const
    {
        return N;
    }

    template <unsigned M, unsigned N>
    float Matrix<M, N>::get_value(unsigned row, unsigned col) const
    {
        return values_[row * N + col];
    }

    template <unsigned M, unsigned N>
    void Matrix<M, N>::set_value(unsigned row, unsigned col, float value)
    {
        values_[row * N + col] = value;
    }

    template <unsigned M, unsigned N>
    const float* Matrix<M, N>::get_data() const
    {
        return values_.data();
    }
} // namespace voxengine::math