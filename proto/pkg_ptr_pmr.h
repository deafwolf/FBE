//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: pkg.fbe
// FBE version: 1.11.0.0
//------------------------------------------------------------------------------

#pragma once

#ifdef isset
#undef isset
#endif

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe.h"
#include "arena/arena.hpp"

#include "osa_pmr.h"

namespace pkg_pmr {
using namespace FBE;
using allocator_type = pmr::polymorphic_allocator<char>;
} // namespace pkg_pmr

namespace FBE {
using namespace ::pkg_pmr;
} // namespace FBE

#include "fbe_ptr.h"

namespace pkg_pmr {

struct Info : FBE::Base
{
    ArenaManagedCreateOnlyTag;

    stdb::memory::arena_string info;
    ::osa_pmr::Sex sex;
    ::osa_pmr::MyFLags flag;
    ::osa_pmr::Extra extra;

    size_t fbe_type() const noexcept { return 1; }

    Info();
    explicit Info(allocator_type alloc);
    Info(const stdb::memory::arena_string& arg_info, ::osa_pmr::Sex arg_sex, ::osa_pmr::MyFLags arg_flag, ::osa_pmr::Extra arg_extra);
    Info(const Info& other) = default;
    Info(Info&& other) noexcept;
    ~Info() override;

    Info& operator=(const Info& other) = default;
    Info& operator=(Info&& other) noexcept;

    bool operator==(const Info& other) const noexcept;
    bool operator!=(const Info& other) const noexcept { return !operator==(other); }
    bool operator<(const Info& other) const noexcept;
    bool operator<=(const Info& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Info& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Info& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const Info& value);

    void swap(Info& other) noexcept;
    friend void swap(Info& value1, Info& value2) noexcept { value1.swap(value2); }
};

} // namespace pkg_pmr

template<>
struct std::hash<pkg_pmr::Info>
{
    typedef pkg_pmr::Info argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace pkg_pmr {

struct Detail : FBE::Base
{
    ArenaManagedCreateOnlyTag;

    pmr::vector<::osa_pmr::Extra> extrav;
    pmr::map<int32_t, ::osa_pmr::Extra> extram;

    size_t fbe_type() const noexcept { return 2; }

    Detail();
    explicit Detail(allocator_type alloc);
    Detail(pmr::vector<::osa_pmr::Extra> arg_extrav, pmr::map<int32_t, ::osa_pmr::Extra> arg_extram);
    Detail(const Detail& other) = default;
    Detail(Detail&& other) noexcept;
    ~Detail() override;

    Detail& operator=(const Detail& other) = default;
    Detail& operator=(Detail&& other) noexcept;

    bool operator==(const Detail& other) const noexcept;
    bool operator!=(const Detail& other) const noexcept { return !operator==(other); }
    bool operator<(const Detail& other) const noexcept;
    bool operator<=(const Detail& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Detail& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Detail& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const Detail& value);

    void swap(Detail& other) noexcept;
    friend void swap(Detail& value1, Detail& value2) noexcept { value1.swap(value2); }
};

} // namespace pkg_pmr

template<>
struct std::hash<pkg_pmr::Detail>
{
    typedef pkg_pmr::Detail argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace pkg_pmr {

} // namespace pkg_pmr
