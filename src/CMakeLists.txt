rock_library(checkout_of_test_dependencies_make
    SOURCES Dummy.cpp
    HEADERS Dummy.hpp)

rock_executable(checkout_of_test_dependencies_make_bin Main.cpp
    DEPS checkout_of_test_dependencies_make)

