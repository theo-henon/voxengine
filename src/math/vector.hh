#pragma once

#include <array>
#include <cstddef>
#include <voxengine/math/abstract_vector.hh>

namespace voxengine::math
{
    template <size_t N>
    class Vector : public AbstractVector
    {
    public:
        ~Vector() override = default;

        [[nodiscard]] size_t get_size() const override;
        [[nodiscard]] float get_coord(size_t index) const override;
        void set_coord(size_t index, float value) override;
        [[nodiscard]] const float* get_data() const override;

        float& operator[](size_t index);

    private:
        std::array<float, N> coords_;
    };

    using Vector3 = Vector<3>;
    using Vector4 = Vector<4>;
} // namespace voxengine::math

#include "vector.hxx"