#ifndef LIB_H
#define LIB_H

#include <cstdint>
#include <memory>

// Keep lines commented to build the first version of the library (you need to link with it)
// Uncomment lines to build the second version of the library
// (don't link with it, jist put it instead of first version after linking)

namespace my
{

class Interface
{
public:
    virtual ~Interface() = default;

    virtual void a() = 0;
//    virtual int b(char* s, std::uint64_t number) = 0;
//    virtual void c() = 0;
    virtual void d() = 0;
};

class Realisation : public Interface
{
public:
    void a() override;
//    int b(char* s, std::uint64_t number) override;
//    void c() override;
    void d() override;
};

void foo();
//void act();
void bar();

} // namespace my

extern "C"
{
    my::Interface* make_instance();
}

#endif // LIB_H
