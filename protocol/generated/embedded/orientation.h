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
#ifndef ORIENTATION_H
#define ORIENTATION_H

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


template<uint32_t quat_REP_LENGTH, 
uint32_t euler_REP_LENGTH, 
uint32_t omega_REP_LENGTH, 
uint32_t accel_REP_LENGTH, 
uint32_t magneto_REP_LENGTH>
class Orientation final: public ::EmbeddedProto::MessageInterface
{
  public:
    Orientation() = default;
    Orientation(const Orientation& rhs )
    {
      set_quat(rhs.get_quat());
      set_euler(rhs.get_euler());
      set_omega(rhs.get_omega());
      set_accel(rhs.get_accel());
      set_magneto(rhs.get_magneto());
      set_lon(rhs.get_lon());
      set_lat(rhs.get_lat());
      set_alt(rhs.get_alt());
    }

    Orientation(const Orientation&& rhs ) noexcept
    {
      set_quat(rhs.get_quat());
      set_euler(rhs.get_euler());
      set_omega(rhs.get_omega());
      set_accel(rhs.get_accel());
      set_magneto(rhs.get_magneto());
      set_lon(rhs.get_lon());
      set_lat(rhs.get_lat());
      set_alt(rhs.get_alt());
    }

    ~Orientation() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      QUAT = 1,
      EULER = 2,
      OMEGA = 3,
      ACCEL = 4,
      MAGNETO = 5,
      LON = 6,
      LAT = 7,
      ALT = 8
    };

    Orientation& operator=(const Orientation& rhs)
    {
      set_quat(rhs.get_quat());
      set_euler(rhs.get_euler());
      set_omega(rhs.get_omega());
      set_accel(rhs.get_accel());
      set_magneto(rhs.get_magneto());
      set_lon(rhs.get_lon());
      set_lat(rhs.get_lat());
      set_alt(rhs.get_alt());
      return *this;
    }

    Orientation& operator=(const Orientation&& rhs) noexcept
    {
      set_quat(rhs.get_quat());
      set_euler(rhs.get_euler());
      set_omega(rhs.get_omega());
      set_accel(rhs.get_accel());
      set_magneto(rhs.get_magneto());
      set_lon(rhs.get_lon());
      set_lat(rhs.get_lat());
      set_alt(rhs.get_alt());
      return *this;
    }

    inline const EmbeddedProto::sint32& quat(uint32_t index) const { return quat_[index]; }
    inline void clear_quat() { quat_.clear(); }
    inline void set_quat(uint32_t index, const EmbeddedProto::sint32& value) { quat_.set(index, value); }
    inline void set_quat(uint32_t index, const EmbeddedProto::sint32&& value) { quat_.set(index, value); }
    inline void set_quat(const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, quat_REP_LENGTH>& values) { quat_ = values; }
    inline void add_quat(const EmbeddedProto::sint32& value) { quat_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, quat_REP_LENGTH>& mutable_quat() { return quat_; }
    inline EmbeddedProto::sint32& mutable_quat(uint32_t index) { return quat_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, quat_REP_LENGTH>& get_quat() const { return quat_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, quat_REP_LENGTH>& quat() const { return quat_; }

    inline const EmbeddedProto::sint32& euler(uint32_t index) const { return euler_[index]; }
    inline void clear_euler() { euler_.clear(); }
    inline void set_euler(uint32_t index, const EmbeddedProto::sint32& value) { euler_.set(index, value); }
    inline void set_euler(uint32_t index, const EmbeddedProto::sint32&& value) { euler_.set(index, value); }
    inline void set_euler(const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, euler_REP_LENGTH>& values) { euler_ = values; }
    inline void add_euler(const EmbeddedProto::sint32& value) { euler_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, euler_REP_LENGTH>& mutable_euler() { return euler_; }
    inline EmbeddedProto::sint32& mutable_euler(uint32_t index) { return euler_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, euler_REP_LENGTH>& get_euler() const { return euler_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, euler_REP_LENGTH>& euler() const { return euler_; }

    inline const EmbeddedProto::sint32& omega(uint32_t index) const { return omega_[index]; }
    inline void clear_omega() { omega_.clear(); }
    inline void set_omega(uint32_t index, const EmbeddedProto::sint32& value) { omega_.set(index, value); }
    inline void set_omega(uint32_t index, const EmbeddedProto::sint32&& value) { omega_.set(index, value); }
    inline void set_omega(const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, omega_REP_LENGTH>& values) { omega_ = values; }
    inline void add_omega(const EmbeddedProto::sint32& value) { omega_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, omega_REP_LENGTH>& mutable_omega() { return omega_; }
    inline EmbeddedProto::sint32& mutable_omega(uint32_t index) { return omega_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, omega_REP_LENGTH>& get_omega() const { return omega_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, omega_REP_LENGTH>& omega() const { return omega_; }

    inline const EmbeddedProto::sint32& accel(uint32_t index) const { return accel_[index]; }
    inline void clear_accel() { accel_.clear(); }
    inline void set_accel(uint32_t index, const EmbeddedProto::sint32& value) { accel_.set(index, value); }
    inline void set_accel(uint32_t index, const EmbeddedProto::sint32&& value) { accel_.set(index, value); }
    inline void set_accel(const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, accel_REP_LENGTH>& values) { accel_ = values; }
    inline void add_accel(const EmbeddedProto::sint32& value) { accel_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, accel_REP_LENGTH>& mutable_accel() { return accel_; }
    inline EmbeddedProto::sint32& mutable_accel(uint32_t index) { return accel_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, accel_REP_LENGTH>& get_accel() const { return accel_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, accel_REP_LENGTH>& accel() const { return accel_; }

    inline const EmbeddedProto::sint32& magneto(uint32_t index) const { return magneto_[index]; }
    inline void clear_magneto() { magneto_.clear(); }
    inline void set_magneto(uint32_t index, const EmbeddedProto::sint32& value) { magneto_.set(index, value); }
    inline void set_magneto(uint32_t index, const EmbeddedProto::sint32&& value) { magneto_.set(index, value); }
    inline void set_magneto(const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, magneto_REP_LENGTH>& values) { magneto_ = values; }
    inline void add_magneto(const EmbeddedProto::sint32& value) { magneto_.add(value); }
    inline ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, magneto_REP_LENGTH>& mutable_magneto() { return magneto_; }
    inline EmbeddedProto::sint32& mutable_magneto(uint32_t index) { return magneto_[index]; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, magneto_REP_LENGTH>& get_magneto() const { return magneto_; }
    inline const ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, magneto_REP_LENGTH>& magneto() const { return magneto_; }

    inline void clear_lon() { lon_.clear(); }
    inline void set_lon(const EmbeddedProto::sint32& value) { lon_ = value; }
    inline void set_lon(const EmbeddedProto::sint32&& value) { lon_ = value; }
    inline EmbeddedProto::sint32& mutable_lon() { return lon_; }
    inline const EmbeddedProto::sint32& get_lon() const { return lon_; }
    inline EmbeddedProto::sint32::FIELD_TYPE lon() const { return lon_.get(); }

    inline void clear_lat() { lat_.clear(); }
    inline void set_lat(const EmbeddedProto::sint32& value) { lat_ = value; }
    inline void set_lat(const EmbeddedProto::sint32&& value) { lat_ = value; }
    inline EmbeddedProto::sint32& mutable_lat() { return lat_; }
    inline const EmbeddedProto::sint32& get_lat() const { return lat_; }
    inline EmbeddedProto::sint32::FIELD_TYPE lat() const { return lat_.get(); }

    inline void clear_alt() { alt_.clear(); }
    inline void set_alt(const EmbeddedProto::sint32& value) { alt_ = value; }
    inline void set_alt(const EmbeddedProto::sint32&& value) { alt_ = value; }
    inline EmbeddedProto::sint32& mutable_alt() { return alt_; }
    inline const EmbeddedProto::sint32& get_alt() const { return alt_; }
    inline EmbeddedProto::sint32::FIELD_TYPE alt() const { return alt_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = quat_.serialize_with_id(static_cast<uint32_t>(id::QUAT), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = euler_.serialize_with_id(static_cast<uint32_t>(id::EULER), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = omega_.serialize_with_id(static_cast<uint32_t>(id::OMEGA), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = accel_.serialize_with_id(static_cast<uint32_t>(id::ACCEL), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = magneto_.serialize_with_id(static_cast<uint32_t>(id::MAGNETO), buffer);
      }

      if((0 != lon_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = lon_.serialize_with_id(static_cast<uint32_t>(id::LON), buffer);
      }

      if((0 != lat_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = lat_.serialize_with_id(static_cast<uint32_t>(id::LAT), buffer);
      }

      if((0 != alt_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = alt_.serialize_with_id(static_cast<uint32_t>(id::ALT), buffer);
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
          case id::QUAT:
            return_value = quat_.deserialize_check_type(buffer, wire_type);
            break;

          case id::EULER:
            return_value = euler_.deserialize_check_type(buffer, wire_type);
            break;

          case id::OMEGA:
            return_value = omega_.deserialize_check_type(buffer, wire_type);
            break;

          case id::ACCEL:
            return_value = accel_.deserialize_check_type(buffer, wire_type);
            break;

          case id::MAGNETO:
            return_value = magneto_.deserialize_check_type(buffer, wire_type);
            break;

          case id::LON:
            return_value = lon_.deserialize_check_type(buffer, wire_type);
            break;

          case id::LAT:
            return_value = lat_.deserialize_check_type(buffer, wire_type);
            break;

          case id::ALT:
            return_value = alt_.deserialize_check_type(buffer, wire_type);
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
      clear_quat();
      clear_euler();
      clear_omega();
      clear_accel();
      clear_magneto();
      clear_lon();
      clear_lat();
      clear_alt();

    }

    private:

      ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, quat_REP_LENGTH> quat_;
      ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, euler_REP_LENGTH> euler_;
      ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, omega_REP_LENGTH> omega_;
      ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, accel_REP_LENGTH> accel_;
      ::EmbeddedProto::RepeatedFieldFixedSize<EmbeddedProto::sint32, magneto_REP_LENGTH> magneto_;
      EmbeddedProto::sint32 lon_ = 0;
      EmbeddedProto::sint32 lat_ = 0;
      EmbeddedProto::sint32 alt_ = 0;

};

#endif // ORIENTATION_H