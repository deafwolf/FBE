//------------------------------------------------------------------------------
// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: ptrpkg.fbe
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

#include "fbe_custom_models.h"

#include "ptrpkg_ptr_pmr.h"

#include "variants_ptr_ptr_pmr_models.h"

namespace FBE {

class FieldModelPMRPtr_ptrpkg_Line
{
public:
    FieldModelPMRPtr_ptrpkg_Line(FBEBuffer& buffer, size_t offset) noexcept;
    ~FieldModelPMRPtr_ptrpkg_Line();

    // Get the field offset
    size_t fbe_offset() const noexcept { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept { return 5; }
    // Get the field extra size
    size_t fbe_extra() const noexcept;
    // Get the field type
    static constexpr size_t fbe_type() noexcept { return 1; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept { _offset -= size; }

    // Check if the struct value is valid
    bool verify() const noexcept;
    // Check if the struct ptr is nullptr
    bool has_value() const noexcept;

    // Get the struct value (begin phase)
    size_t get_begin() const noexcept;
    // Get the struct value (end phase)
    void get_end(size_t fbe_begin) const noexcept;

    // Get the struct value
    void get(::ptrpkg_pmr::Line** fbe_value, pmr::memory_resource* resource) noexcept;
    // Get the struct fields values
    void get_fields(::ptrpkg_pmr::Line& fbe_value, size_t fbe_struct_size, pmr::memory_resource* resource) noexcept;

    // Set the struct value (begin phase)
    size_t set_begin(bool has_value);
    // Set the struct value (end phase)
    void set_end(size_t fbe_begin);

    // Set the struct value
    void set(const ::ptrpkg_pmr::Line* fbe_value, pmr::memory_resource* resource) noexcept;
    // Set the struct fields values
    void set_fields(const ::ptrpkg_pmr::Line* fbe_value, pmr::memory_resource* resource) noexcept;

private:
    FBEBuffer& _buffer;
    size_t _offset;

public:
    BaseFieldModel* ptr{nullptr};
};

// Fast Binary Encoding ::ptrpkg_pmr::Line field model
class FieldModelPMR_ptrpkg_Line : public BaseFieldModel
{
public:
    FieldModelPMR_ptrpkg_Line(FBEBuffer& buffer, size_t offset) noexcept;

    // Get the field offset
    size_t fbe_offset() const noexcept override { return _offset; }
    // Get the field size
    size_t fbe_size() const noexcept override { return 4; }
    // Get the field body size
    size_t fbe_body() const noexcept;
    // Get the field extra size
    size_t fbe_extra() const noexcept override;
    // Get the field type
    static constexpr size_t fbe_type() noexcept { return 1; }

    // Shift the current field offset
    void fbe_shift(size_t size) noexcept override { _offset += size; }
    // Unshift the current field offset
    void fbe_unshift(size_t size) noexcept override { _offset -= size; }

    // Check if the struct value is valid
    bool verify(bool fbe_verify_type = true) const noexcept override;
    // Check if the struct fields are valid
    bool verify_fields(size_t fbe_struct_size) const noexcept override;

    // Get the struct value (begin phase)
    size_t get_begin() const noexcept override;
    // Get the struct value (end phase)
    void get_end(size_t fbe_begin) const noexcept override;

    // Get the struct value
    void get(::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;
    // Get the struct fields values
    void get_fields(::FBE::Base& fbe_value, size_t fbe_struct_size, pmr::memory_resource* resource) noexcept override;

    // Set the struct value (begin phase)
    size_t set_begin() override;
    // Set the struct value (end phase)
    void set_end(size_t fbe_begin) override;

    // Set the struct value
    void set(const ::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;
    // Set the struct fields values
    void set_fields(const ::FBE::Base& fbe_value, pmr::memory_resource* resource) noexcept override;

private:
    FBEBuffer& _buffer;
    size_t _offset;

public:
    FieldModelPMR_variants_ptr_Value value;
    FieldModelPMRPtr_variants_ptr_Value value_ptr;
};

namespace ptrpkg_pmr {

// Fast Binary Encoding Line model
class LineModel : public FBE::Model
{
public:
    LineModel() : model(this->buffer(), 4) {}
    LineModel(const std::shared_ptr<FBEBuffer>& buffer) : FBE::Model(buffer), model(this->buffer(), 4) {}

    // Get the model size
    size_t fbe_size() const noexcept { return model.fbe_size() + model.fbe_extra(); }
    // Get the model type
    static constexpr size_t fbe_type() noexcept { return FieldModelPMR_ptrpkg_Line::fbe_type(); }

    // Check if the struct value is valid
    bool verify();

    // Create a new model (begin phase)
    size_t create_begin();
    // Create a new model (end phase)
    size_t create_end(size_t fbe_begin);

    // Serialize the struct value
    size_t serialize(const ::ptrpkg_pmr::Line& value, pmr::memory_resource* resource);
    // Deserialize the struct value
    size_t deserialize(::ptrpkg_pmr::Line& value, pmr::memory_resource* resource) noexcept;

    // Move to the next struct value
    void next(size_t prev) noexcept { model.fbe_shift(prev); }

public:
    FieldModelPMR_ptrpkg_Line model;
};

} // namespace ptrpkg_pmr

} // namespace FBE
