#pragma once

#include "vector.hh"

namespace voxengine::math
{
    template<size_t N>
    size_t Vector<N>::get_size() const
    {
        return N;
    }

    template <size_t N>
    float Vector<N>::get_coord(std::size_t index) const
    {
        return coords_[index];
    }

    template <size_t N>
    void Vector<N>::set_coord(std::size_t index, float value)
    {
        coords_[index] = value;
    }

    template <size_t N>
    const float* Vector<N>::get_data() const
    {
        return coords_.data();
    }

    template <size_t N>
    float& Vector<N>::operator[](size_t index)
    {
        return coords_[index];
    }
} // namespace voxengine::math