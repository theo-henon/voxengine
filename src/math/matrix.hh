#pragma once

#include <array>
#include <voxengine/math/abstract_matrix.hh>

namespace voxengine::math
{
    template <unsigned M, unsigned N>
    class Matrix : public AbstractMatrix
    {
    public:
        ~Matrix() override = default;

        [[nodiscard]] unsigned get_rows() const override;
        [[nodiscard]] unsigned get_cols() const override;
        [[nodiscard]] float get_value(unsigned row, unsigned col) const override;
        void set_value(unsigned row, unsigned col, float value) override;
        [[nodiscard]] const float* get_data() const override;

    private:
        std::array<float, M * N> values_;
    };

    using Matrix3 = Matrix<3, 3>;
    using Matrix4 = Matrix<4, 4>;

} // namespace voxengine::math

#include "matrix.hxx"
