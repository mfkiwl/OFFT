add_library(offt
    src/fourier_parameters.cpp
    src/math/even_q.cpp
    src/math/extended_gcd.cpp
    src/math/factor_integer.cpp
    src/math/gcd.cpp
    src/math/list_product.cpp
    src/math/miller_rabin_probable_prime_q.cpp
    src/math/mod.cpp
    src/math/odd_q.cpp
    src/math/power_mod.cpp
    src/math/prime_q.cpp
    src/math/primitive_root.cpp
    src/math/times_plus_mod.cpp                     
    src/backend/fourier_base.cpp
    src/backend/module_manager.cpp
    src/backend/phasors.cpp
    src/backend/program.cpp
    src/backend/rader_module.cpp
    src/backend/storage.cpp
    src/backend/standard_modules/module_2.cpp
    src/backend/standard_modules/module_3.cpp
    src/backend/standard_modules/module_4.cpp
    src/backend/standard_modules/module_5.cpp
    src/backend/standard_modules/module_6.cpp
    src/backend/standard_modules/module_7.cpp
    src/backend/standard_modules/module_8.cpp
    src/backend/standard_modules/module_9.cpp
    src/backend/standard_modules/module_10.cpp
    src/backend/standard_modules/module_11.cpp
    src/backend/standard_modules/module_12.cpp
    src/backend/standard_modules/module_13.cpp
    src/backend/standard_modules/module_14.cpp
    src/backend/standard_modules/module_15.cpp
    src/backend/standard_modules/module_16.cpp
    src/backend/standard_modules/module_17.cpp
    src/backend/standard_modules/module_18.cpp
    src/backend/standard_modules/module_19.cpp
    src/backend/standard_modules/module_20.cpp
    src/backend/standard_modules/module_21.cpp
    src/backend/standard_modules/module_22.cpp
    src/backend/standard_modules/module_23.cpp
    src/backend/standard_modules/module_24.cpp
    src/backend/standard_modules/module_25.cpp
    src/backend/standard_modules/module_26.cpp
    src/backend/standard_modules/module_27.cpp
    src/backend/standard_modules/module_28.cpp
    src/backend/standard_modules/module_29.cpp
    src/backend/standard_modules/module_30.cpp
    src/backend/standard_modules/module_31.cpp
    src/backend/standard_modules/module_32.cpp
)

target_include_directories(offt PUBLIC include)

target_compile_features(offt PUBLIC cxx_std_11)
