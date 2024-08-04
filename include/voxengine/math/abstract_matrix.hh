#pragma once

#include <cstddef>

namespace voxengine
{
    namespace math
    {
        class AbstractMatrix
        {
        public:
            virtual ~AbstractMatrix() = default;

            virtual unsigned get_rows() const = 0;
            virtual unsigned get_cols() const = 0;
            virtual float get_value(unsigned row, unsigned col) const = 0;
            virtual void set_value(unsigned row, unsigned col, float value) = 0;
            virtual const float *get_data() const = 0;
        };
    } // namespace math
} // namespace voxengine