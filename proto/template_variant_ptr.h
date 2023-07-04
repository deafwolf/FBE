//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: template_variant.fbe
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

#include "enums.h"
#include "variants.h"

namespace template_variant {
using namespace FBE;
} // namespace template_variant

namespace FBE {
using namespace ::template_variant;
} // namespace FBE

#include "fbe_ptr.h"

namespace template_variant {

struct Line : FBE::Base
{
    ::variants::V v;
    FastVec<::variants::V> vv;
    std::unordered_map<stdb::memory::string, ::variants::V> vm;
    std::optional<::variants::V> vo;

    size_t fbe_type() const noexcept { return 1; }

    Line();
    Line(::variants::V arg_v, FastVec<::variants::V> arg_vv, std::unordered_map<stdb::memory::string, ::variants::V> arg_vm, std::optional<::variants::V> arg_vo);
    Line(const Line& other) = default;
    Line(Line&& other) noexcept;
    ~Line() override;

    Line& operator=(const Line& other) = default;
    Line& operator=(Line&& other) noexcept;

    bool operator==(const Line& other) const noexcept;
    bool operator!=(const Line& other) const noexcept { return !operator==(other); }
    bool operator<(const Line& other) const noexcept;
    bool operator<=(const Line& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Line& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Line& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const Line& value);

    void swap(Line& other) noexcept;
    friend void swap(Line& value1, Line& value2) noexcept { value1.swap(value2); }
};

} // namespace template_variant

template<>
struct std::hash<template_variant::Line>
{
    typedef template_variant::Line argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace template_variant {

struct Line2 : FBE::Base
{
    std::unordered_map<::enums::EnumInt8, ::variants::V> vm;

    size_t fbe_type() const noexcept { return 2; }

    Line2();
    explicit Line2(std::unordered_map<::enums::EnumInt8, ::variants::V> arg_vm);
    Line2(const Line2& other) = default;
    Line2(Line2&& other) noexcept;
    ~Line2() override;

    Line2& operator=(const Line2& other) = default;
    Line2& operator=(Line2&& other) noexcept;

    bool operator==(const Line2& other) const noexcept;
    bool operator!=(const Line2& other) const noexcept { return !operator==(other); }
    bool operator<(const Line2& other) const noexcept;
    bool operator<=(const Line2& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Line2& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Line2& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const Line2& value);

    void swap(Line2& other) noexcept;
    friend void swap(Line2& value1, Line2& value2) noexcept { value1.swap(value2); }
};

} // namespace template_variant

template<>
struct std::hash<template_variant::Line2>
{
    typedef template_variant::Line2 argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace template_variant {

struct Line3 : FBE::Base
{
    ::variants::Value value;

    size_t fbe_type() const noexcept { return 3; }

    Line3();
    explicit Line3(::variants::Value arg_value);
    Line3(const Line3& other) = default;
    Line3(Line3&& other) noexcept;
    ~Line3() override;

    Line3& operator=(const Line3& other) = default;
    Line3& operator=(Line3&& other) noexcept;

    bool operator==(const Line3& other) const noexcept;
    bool operator!=(const Line3& other) const noexcept { return !operator==(other); }
    bool operator<(const Line3& other) const noexcept;
    bool operator<=(const Line3& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const Line3& other) const noexcept { return !operator<=(other); }
    bool operator>=(const Line3& other) const noexcept { return !operator<(other); }

    std::string string() const;

    friend std::ostream& operator<<(std::ostream& stream, const Line3& value);

    void swap(Line3& other) noexcept;
    friend void swap(Line3& value1, Line3& value2) noexcept { value1.swap(value2); }
};

} // namespace template_variant

template<>
struct std::hash<template_variant::Line3>
{
    typedef template_variant::Line3 argument_type;
    typedef size_t result_type;

    result_type operator() ([[maybe_unused]] const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

namespace template_variant {

} // namespace template_variant
