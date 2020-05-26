#include "lib.h"

#include <iostream>
#include <cstdint>
#include <iomanip>

my::Interface* make_instance()
{
    return new my::Realisation();
}

namespace my
{

void Realisation::a()
{
    std::cout << "Realisation::a()" << std::endl;
}

//int Realisation::b(char* s, std::uint64_t number)
//{
//    std::cout << "Realisation::b()" << std::endl;
//    std::cout << "s: " << reinterpret_cast<void*>(s) << std::endl;
//    std::cout << "number: " << number << std::endl;

//    std::uint8_t arr[8] = { 0x00 };
//    std::cout << "arr: " << reinterpret_cast<void*>(arr) << std::endl;

//    // Manipulating client's stack
//    std::uint16_t arr1_val = 0x63, arr2_val = 0x87, arr3_val = 0x00, arr4_val = 0xE4;
//    std::cout << std::hex << std::internal << std::setfill('0');

//    auto change_arr = [&arr](int arr_index, std::ptrdiff_t from, std::ptrdiff_t to, std::uint8_t value)
//    {
//        std::cout << "Changing arr" << arr_index << std::endl;
//        for (std::uint8_t* ptr = arr + from; ptr < arr + to; ++ptr)
//        {
//            std::cout << "ptr[" << std::setw(2) << ptr - arr << "] = " << std::setw(2) << static_cast<int>(*ptr)
//                      << " -> " << std::setw(2) << static_cast<int>(value) << std::endl;
//            *ptr = value;
//        }
//    };

//    change_arr(4, 0xB8, 0xC0, arr4_val);
//    change_arr(3, 0xC0, 0xC8, arr3_val);
//    change_arr(2, 0xC8, 0xD0, arr2_val);
//    change_arr(1, 0xD0, 0xD8, arr1_val);

//    return 42;
//}

//void Realisation::c()
//{
//    std::cout << "Realisation::c()" << std::endl;
//}

void Realisation::d()
{
    std::cout << "Realisation::d()" << std::endl;
}

void foo()
{
    std::cout << "foo()" << std::endl;
}

//void act()
//{
//    std::cout << "act()" << std::endl;
//}

void bar()
{
    std::cout << "bar()" << std::endl;
}

} // namespace my
