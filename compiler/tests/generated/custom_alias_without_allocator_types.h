
#pragma once

#include <bond/core/bond_version.h>

#if BOND_VERSION < 0x0422
#error This file was generated by a newer version of Bond compiler
#error and is incompatible with your version Bond library.
#endif

#if BOND_MIN_CODEGEN_VERSION > 0x0500
#error This file was generated by an older version of Bond compiler
#error and is incompatible with your version Bond library.
#endif

#include <bond/core/config.h>
#include <bond/core/containers.h>



namespace test
{
    
    struct foo
    {
        my::list<bool> l;
        my::vector<bool> v;
        my::set<bool> s;
        my::map<my::string, bool> m;
        my::string st;
        my::string d;
        bond::maybe<my::list<bool> > l1;
        bond::maybe<my::vector<bool> > v1;
        bond::maybe<my::set<bool> > s1;
        bond::maybe<my::map<my::string, bool> > m1;
        bond::maybe<my::string> st1;
        
        foo()
          : l(),
            v(),
            s(),
            m(),
            st(),
            d("foo")
        {
        }

        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated copy ctor OK
        foo(const foo& other) = default;
#endif
        
#if !defined(BOND_NO_CXX11_DEFAULTED_MOVE_CTOR)
        foo(foo&& other) = default;
#elif !defined(BOND_NO_CXX11_RVALUE_REFERENCES)
        foo(foo&& other)
          : l(std::move(other.l)),
            v(std::move(other.v)),
            s(std::move(other.s)),
            m(std::move(other.m)),
            st(std::move(other.st)),
            d(std::move(other.d)),
            l1(std::move(other.l1)),
            v1(std::move(other.v1)),
            s1(std::move(other.s1)),
            m1(std::move(other.m1)),
            st1(std::move(other.st1))
        {
        }
#endif
        
        explicit
        foo(const arena&)
          : l(),
            v(),
            s(),
            m(),
            st(),
            d("foo"),
            l1(),
            v1(),
            s1(),
            m1(),
            st1()
        {
        }
        
        
#ifndef BOND_NO_CXX11_DEFAULTED_FUNCTIONS
        // Compiler generated operator= OK
        foo& operator=(const foo& other) = default;
#endif

        bool operator==(const foo& other) const
        {
            return true
                && (l == other.l)
                && (v == other.v)
                && (s == other.s)
                && (m == other.m)
                && (st == other.st)
                && (d == other.d)
                && (l1 == other.l1)
                && (v1 == other.v1)
                && (s1 == other.s1)
                && (m1 == other.m1)
                && (st1 == other.st1);
        }

        bool operator!=(const foo& other) const
        {
            return !(*this == other);
        }

        void swap(foo& other)
        {
            using std::swap;
            swap(l, other.l);
            swap(v, other.v);
            swap(s, other.s);
            swap(m, other.m);
            swap(st, other.st);
            swap(d, other.d);
            swap(l1, other.l1);
            swap(v1, other.v1);
            swap(s1, other.s1);
            swap(m1, other.m1);
            swap(st1, other.st1);
        }

        struct Schema;

    protected:
        void InitMetadata(const char*, const char*)
        {
        }
    };

    inline void swap(foo& left, foo& right)
    {
        left.swap(right);
    }
} // namespace test

#if !defined(BOND_NO_CXX11_ALLOCATOR)
namespace std
{
    template <typename _Alloc>
    struct uses_allocator< ::test::foo, _Alloc>
        : is_convertible<_Alloc, arena>
    {};
}
#endif
