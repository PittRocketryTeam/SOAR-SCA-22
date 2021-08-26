/*
 *  Copyright (C) 2020-2021 Embedded AMS B.V. - All Rights Reserved
 *
 *  This file is part of Embedded Proto.
 *
 *  Embedded Proto is open source software: you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as published
 *  by the Free Software Foundation, version 3 of the license.
 *
 *  Embedded Proto  is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Embedded Proto. If not, see <https://www.gnu.org/licenses/>.
 *
 *  For commercial and closed source application please visit:
 *  <https://EmbeddedProto.com/license/>.
 *
 *  Embedded AMS B.V.
 *  Info:
 *    info at EmbeddedProto dot com
 *
 *  Postal address:
 *    Johan Huizingalaan 763a
 *    1066 VH, Amsterdam
 *    the Netherlands
 */

// This file is generated. Please do not edit!
#ifndef HEALTH_H
#define HEALTH_H

#include <cstdint>
#include <MessageInterface.h>
#include <WireFormatter.h>
#include <Fields.h>
#include <MessageSizeCalculator.h>
#include <ReadBufferSection.h>
#include <RepeatedFieldFixedSize.h>
#include <FieldStringBytes.h>
#include <Errors.h>

// Include external proto definitions
#include <component.h>


template<uint32_t name_LENGTH, 
uint32_t compstat_REP_LENGTH>
class Health final: public ::EmbeddedProto::MessageInterface
{
  public:
    Health() = default;
    Health(const Health& rhs )
    {
      set_name(rhs.get_name());
      set_vbat(rhs.get_vbat());
      set_vreg(rhs.get_vreg());
      set_isys(rhs.get_isys());
      set_tbat(rhs.get_tbat());
      set_treg(rhs.get_treg());
      set_tamb(rhs.get_tamb());
      set_trad(rhs.get_trad());
      set_compstat(rhs.get_compstat());
      set_sats(rhs.get_sats());
    }

    Health(const Health&& rhs ) noexcept
    {
      set_name(rhs.get_name());
      set_vbat(rhs.get_vbat());
      set_vreg(rhs.get_vreg());
      set_isys(rhs.get_isys());
      set_tbat(rhs.get_tbat());
      set_treg(rhs.get_treg());
      set_tamb(rhs.get_tamb());
      set_trad(rhs.get_trad());
      set_compstat(rhs.get_compstat());
      set_sats(rhs.get_sats());
    }

    ~Health() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      NAME = 1,
      VBAT = 2,
      VREG = 3,
      ISYS = 4,
      TBAT = 5,
      TREG = 6,
      TAMB = 7,
      TRAD = 8,
      COMPSTAT = 9,
      SATS = 10
    };

    Health& operator=(const Health& rhs)
    {
      set_name(rhs.get_name());
      set_vbat(rhs.get_vbat());
      set_vreg(rhs.get_vreg());
      set_isys(rhs.get_isys());
      set_tbat(rhs.get_tbat());
      set_treg(rhs.get_treg());
      set_tamb(rhs.get_tamb());
      set_trad(rhs.get_trad());
      set_compstat(rhs.get_compstat());
      set_sats(rhs.get_sats());
      return *this;
    }

    Health& operator=(const Health&& rhs) noexcept
    {
      set_name(rhs.get_name());
      set_vbat(rhs.get_vbat());
      set_vreg(rhs.get_vreg());
      set_isys(rhs.get_isys());
      set_tbat(rhs.get_tbat());
      set_treg(rhs.get_treg());
      set_tamb(rhs.get_tamb());
      set_trad(rhs.get_trad());
      set_compstat(rhs.get_compstat());
      set_sats(rhs.get_sats());
      return *this;
    }

    inline void clear_name() { name_.clear(); }
    inline ::EmbeddedProto::FieldString<name_LENGTH>& mutable_name() { return name_; }
    inline void set_name(const ::EmbeddedProto::FieldString<name_LENGTH>& rhs) { name_.set(rhs); }
    inline const ::EmbeddedProto::FieldString<name_LENGTH>& get_name() const { return name_; }
    inline const char* name() const { return name_.get_const(); }

    inline void clear_vbat() { vbat_.clear(); }
    inline void set_vbat(const EmbeddedProto::uint32& value) { vbat_ = value; }
    inline void set_vbat(const EmbeddedProto::uint32&& value) { vbat_ = value; }
    inline EmbeddedProto::uint32& mutable_vbat() { return vbat_; }
    inline const EmbeddedProto::uint32& get_vbat() const { return vbat_; }
    inline EmbeddedProto::uint32::FIELD_TYPE vbat() const { return vbat_.get(); }

    inline void clear_vreg() { vreg_.clear(); }
    inline void set_vreg(const EmbeddedProto::uint32& value) { vreg_ = value; }
    inline void set_vreg(const EmbeddedProto::uint32&& value) { vreg_ = value; }
    inline EmbeddedProto::uint32& mutable_vreg() { return vreg_; }
    inline const EmbeddedProto::uint32& get_vreg() const { return vreg_; }
    inline EmbeddedProto::uint32::FIELD_TYPE vreg() const { return vreg_.get(); }

    inline void clear_isys() { isys_.clear(); }
    inline void set_isys(const EmbeddedProto::uint32& value) { isys_ = value; }
    inline void set_isys(const EmbeddedProto::uint32&& value) { isys_ = value; }
    inline EmbeddedProto::uint32& mutable_isys() { return isys_; }
    inline const EmbeddedProto::uint32& get_isys() const { return isys_; }
    inline EmbeddedProto::uint32::FIELD_TYPE isys() const { return isys_.get(); }

    inline void clear_tbat() { tbat_.clear(); }
    inline void set_tbat(const EmbeddedProto::uint32& value) { tbat_ = value; }
    inline void set_tbat(const EmbeddedProto::uint32&& value) { tbat_ = value; }
    inline EmbeddedProto::uint32& mutable_tbat() { return tbat_; }
    inline const EmbeddedProto::uint32& get_tbat() const { return tbat_; }
    inline EmbeddedProto::uint32::FIELD_TYPE tbat() const { return tbat_.get(); }

    inline void clear_treg() { treg_.clear(); }
    inline void set_treg(const EmbeddedProto::uint32& value) { treg_ = value; }
    inline void set_treg(const EmbeddedProto::uint32&& value) { treg_ = value; }
    inline EmbeddedProto::uint32& mutable_treg() { return treg_; }
    inline const EmbeddedProto::uint32& get_treg() const { return treg_; }
    inline EmbeddedProto::uint32::FIELD_TYPE treg() const { return treg_.get(); }

    inline void clear_tamb() { tamb_.clear(); }
    inline void set_tamb(const EmbeddedProto::uint32& value) { tamb_ = value; }
    inline void set_tamb(const EmbeddedProto::uint32&& value) { tamb_ = value; }
    inline EmbeddedProto::uint32& mutable_tamb() { return tamb_; }
    inline const EmbeddedProto::uint32& get_tamb() const { return tamb_; }
    inline EmbeddedProto::uint32::FIELD_TYPE tamb() const { return tamb_.get(); }

    inline void clear_trad() { trad_.clear(); }
    inline void set_trad(const EmbeddedProto::uint32& value) { trad_ = value; }
    inline void set_trad(const EmbeddedProto::uint32&& value) { trad_ = value; }
    inline EmbeddedProto::uint32& mutable_trad() { return trad_; }
    inline const EmbeddedProto::uint32& get_trad() const { return trad_; }
    inline EmbeddedProto::uint32::FIELD_TYPE trad() const { return trad_.get(); }

    inline const CompStatus& compstat(uint32_t index) const { return compstat_[index]; }
    inline void clear_compstat() { compstat_.clear(); }
    inline void set_compstat(uint32_t index, const CompStatus& value) { compstat_.set(index, value); }
    inline void set_compstat(uint32_t index, const CompStatus&& value) { compstat_.set(index, value); }
    inline void set_compstat(const ::EmbeddedProto::RepeatedFieldFixedSize<CompStatus, compstat_REP_LENGTH>& values) { compstat_ = values; }
    inline void add_compstat(const CompStatus& value) { compstat_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<CompStatus, compstat_REP_LENGTH>& mutable_compstat() { return compstat_; }
    inline CompStatus& mutable_compstat(uint32_t index) { return compstat_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<CompStatus, compstat_REP_LENGTH>& get_compstat() const { return compstat_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<CompStatus, compstat_REP_LENGTH>& compstat() const { return compstat_; }

    inline void clear_sats() { sats_.clear(); }
    inline void set_sats(const EmbeddedProto::uint32& value) { sats_ = value; }
    inline void set_sats(const EmbeddedProto::uint32&& value) { sats_ = value; }
    inline EmbeddedProto::uint32& mutable_sats() { return sats_; }
    inline const EmbeddedProto::uint32& get_sats() const { return sats_; }
    inline EmbeddedProto::uint32::FIELD_TYPE sats() const { return sats_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = name_.serialize_with_id(static_cast<uint32_t>(id::NAME), buffer);
      }

      if((0U != vbat_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = vbat_.serialize_with_id(static_cast<uint32_t>(id::VBAT), buffer);
      }

      if((0U != vreg_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = vreg_.serialize_with_id(static_cast<uint32_t>(id::VREG), buffer);
      }

      if((0U != isys_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = isys_.serialize_with_id(static_cast<uint32_t>(id::ISYS), buffer);
      }

      if((0U != tbat_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = tbat_.serialize_with_id(static_cast<uint32_t>(id::TBAT), buffer);
      }

      if((0U != treg_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = treg_.serialize_with_id(static_cast<uint32_t>(id::TREG), buffer);
      }

      if((0U != tamb_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = tamb_.serialize_with_id(static_cast<uint32_t>(id::TAMB), buffer);
      }

      if((0U != trad_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = trad_.serialize_with_id(static_cast<uint32_t>(id::TRAD), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = compstat_.serialize_with_id(static_cast<uint32_t>(id::COMPSTAT), buffer);
      }

      if((0U != sats_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = sats_.serialize_with_id(static_cast<uint32_t>(id::SATS), buffer);
      }

      return return_value;
    };

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      ::EmbeddedProto::WireFormatter::WireType wire_type = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      uint32_t id_number = 0;
      id id_tag = id::NOT_SET;

      ::EmbeddedProto::Error tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
      while((::EmbeddedProto::Error::NO_ERRORS == return_value) && (::EmbeddedProto::Error::NO_ERRORS == tag_value))
      {
        id_tag = static_cast<id>(id_number);
        switch(id_tag)
        {
          case id::NAME:
            return_value = name_.deserialize_check_type(buffer, wire_type);
            break;

          case id::VBAT:
            return_value = vbat_.deserialize_check_type(buffer, wire_type);
            break;

          case id::VREG:
            return_value = vreg_.deserialize_check_type(buffer, wire_type);
            break;

          case id::ISYS:
            return_value = isys_.deserialize_check_type(buffer, wire_type);
            break;

          case id::TBAT:
            return_value = tbat_.deserialize_check_type(buffer, wire_type);
            break;

          case id::TREG:
            return_value = treg_.deserialize_check_type(buffer, wire_type);
            break;

          case id::TAMB:
            return_value = tamb_.deserialize_check_type(buffer, wire_type);
            break;

          case id::TRAD:
            return_value = trad_.deserialize_check_type(buffer, wire_type);
            break;

          case id::COMPSTAT:
            return_value = compstat_.deserialize_check_type(buffer, wire_type);
            break;

          case id::SATS:
            return_value = sats_.deserialize_check_type(buffer, wire_type);
            break;

          default:
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag.
          tag_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, wire_type, id_number);
        }
      }

      // When an error was detect while reading the tag but no other errors where found, set it in the return value.
      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::Error::NO_ERRORS != tag_value)
         && (::EmbeddedProto::Error::END_OF_BUFFER != tag_value)) // The end of the buffer is not an array in this case.
      {
        return_value = tag_value;
      }

      return return_value;
    };

    void clear() override
    {
      clear_name();
      clear_vbat();
      clear_vreg();
      clear_isys();
      clear_tbat();
      clear_treg();
      clear_tamb();
      clear_trad();
      clear_compstat();
      clear_sats();

    }

    private:

      ::EmbeddedProto::FieldString<name_LENGTH> name_;
      EmbeddedProto::uint32 vbat_ = 0U;
      EmbeddedProto::uint32 vreg_ = 0U;
      EmbeddedProto::uint32 isys_ = 0U;
      EmbeddedProto::uint32 tbat_ = 0U;
      EmbeddedProto::uint32 treg_ = 0U;
      EmbeddedProto::uint32 tamb_ = 0U;
      EmbeddedProto::uint32 trad_ = 0U;
      ::EmbeddedProto::RepeatedFieldFixedSize<CompStatus, compstat_REP_LENGTH> compstat_;
      EmbeddedProto::uint32 sats_ = 0U;

};

#endif // HEALTH_H