add_library(math STATIC
        vector.hh vector.hxx
        matrix.hh matrix.hxx
        dummy.cc
)

target_compile_options(math PUBLIC -Wall -Werror -Wextra -Wold-style-cast -pedantic)
