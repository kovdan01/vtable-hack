#include <lib.h>

#include <memory>
#include <iostream>
#include <iomanip>

void print_arr(std::uint8_t* arr)
{
    std::cout << std::hex << std::internal << std::setfill('0');
    std::cout << "{ ";
    for (std::size_t i = 0; i < 8; ++i)
        std::cout << std::setw(2) << static_cast<int>(arr[i]) << " ";
    std::cout << "}" << std::endl;
}

int main()
{
    std::uint8_t arr1[8] = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07 };

    my::Realisation obj;
    obj.a(); // Realisation::a() with both old and new shared library
    obj.d(); // Realisation::d() with both old and new shared library

    std::uint8_t arr2[8] = { 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F };

    std::shared_ptr<my::Interface> ptr = std::make_shared<my::Realisation>();
    ptr->a(); // Realisation::a() with both old and new shared library
    ptr->d(); // Realisation::d() with old, Realisation::b() and new shared library

    std::uint8_t arr3[8] = { 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17 };

    my::foo(); // foo() with both old and new shared library
    my::bar(); // bar() with both old and new shared library

    std::uint8_t arr4[8] = { 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F };

    std::cout << "Client arr1: " << reinterpret_cast<void*>(arr1) << std::endl;
    print_arr(arr1);
    std::cout << "Client arr2: " << reinterpret_cast<void*>(arr2) << std::endl;
    print_arr(arr2);
    std::cout << "Client arr3: " << reinterpret_cast<void*>(arr3) << std::endl;
    print_arr(arr3);
    std::cout << "Client arr4: " << reinterpret_cast<void*>(arr4) << std::endl;
    print_arr(arr4);
}
