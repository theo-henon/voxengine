#pragma once

#include <cstddef>

namespace voxengine::math
{
    class AbstractVector
    {
    public:
        virtual ~AbstractVector() = default;

        [[nodiscard]] virtual size_t get_size() const = 0;
        [[nodiscard]] virtual float get_coord(size_t index) const = 0;
        virtual void set_coord(size_t index, float value) = 0;
        [[nodiscard]] virtual const float* get_data() const = 0;
    };
} // namespace voxengine::math
