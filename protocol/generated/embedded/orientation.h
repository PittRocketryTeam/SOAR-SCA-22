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


class Orientation final: public ::EmbeddedProto::MessageInterface
{
  public:
    Orientation() = default;
    Orientation(const Orientation& rhs )
    {
      set_quat_x(rhs.get_quat_x());
      set_quat_y(rhs.get_quat_y());
      set_quat_z(rhs.get_quat_z());
      set_quat_w(rhs.get_quat_w());
      set_euler_x(rhs.get_euler_x());
      set_euler_y(rhs.get_euler_y());
      set_euler_z(rhs.get_euler_z());
      set_omega_x(rhs.get_omega_x());
      set_omega_y(rhs.get_omega_y());
      set_omega_z(rhs.get_omega_z());
      set_accel_x(rhs.get_accel_x());
      set_accel_y(rhs.get_accel_y());
      set_accel_z(rhs.get_accel_z());
      set_lon(rhs.get_lon());
      set_lat(rhs.get_lat());
      set_alt(rhs.get_alt());
    }

    Orientation(const Orientation&& rhs ) noexcept
    {
      set_quat_x(rhs.get_quat_x());
      set_quat_y(rhs.get_quat_y());
      set_quat_z(rhs.get_quat_z());
      set_quat_w(rhs.get_quat_w());
      set_euler_x(rhs.get_euler_x());
      set_euler_y(rhs.get_euler_y());
      set_euler_z(rhs.get_euler_z());
      set_omega_x(rhs.get_omega_x());
      set_omega_y(rhs.get_omega_y());
      set_omega_z(rhs.get_omega_z());
      set_accel_x(rhs.get_accel_x());
      set_accel_y(rhs.get_accel_y());
      set_accel_z(rhs.get_accel_z());
      set_lon(rhs.get_lon());
      set_lat(rhs.get_lat());
      set_alt(rhs.get_alt());
    }

    ~Orientation() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      QUAT_X = 1,
      QUAT_Y = 2,
      QUAT_Z = 3,
      QUAT_W = 4,
      EULER_X = 5,
      EULER_Y = 6,
      EULER_Z = 7,
      OMEGA_X = 8,
      OMEGA_Y = 9,
      OMEGA_Z = 10,
      ACCEL_X = 11,
      ACCEL_Y = 12,
      ACCEL_Z = 13,
      LON = 14,
      LAT = 15,
      ALT = 16
    };

    Orientation& operator=(const Orientation& rhs)
    {
      set_quat_x(rhs.get_quat_x());
      set_quat_y(rhs.get_quat_y());
      set_quat_z(rhs.get_quat_z());
      set_quat_w(rhs.get_quat_w());
      set_euler_x(rhs.get_euler_x());
      set_euler_y(rhs.get_euler_y());
      set_euler_z(rhs.get_euler_z());
      set_omega_x(rhs.get_omega_x());
      set_omega_y(rhs.get_omega_y());
      set_omega_z(rhs.get_omega_z());
      set_accel_x(rhs.get_accel_x());
      set_accel_y(rhs.get_accel_y());
      set_accel_z(rhs.get_accel_z());
      set_lon(rhs.get_lon());
      set_lat(rhs.get_lat());
      set_alt(rhs.get_alt());
      return *this;
    }

    Orientation& operator=(const Orientation&& rhs) noexcept
    {
      set_quat_x(rhs.get_quat_x());
      set_quat_y(rhs.get_quat_y());
      set_quat_z(rhs.get_quat_z());
      set_quat_w(rhs.get_quat_w());
      set_euler_x(rhs.get_euler_x());
      set_euler_y(rhs.get_euler_y());
      set_euler_z(rhs.get_euler_z());
      set_omega_x(rhs.get_omega_x());
      set_omega_y(rhs.get_omega_y());
      set_omega_z(rhs.get_omega_z());
      set_accel_x(rhs.get_accel_x());
      set_accel_y(rhs.get_accel_y());
      set_accel_z(rhs.get_accel_z());
      set_lon(rhs.get_lon());
      set_lat(rhs.get_lat());
      set_alt(rhs.get_alt());
      return *this;
    }

    inline void clear_quat_x() { quat_x_.clear(); }
    inline void set_quat_x(const EmbeddedProto::sint32& value) { quat_x_ = value; }
    inline void set_quat_x(const EmbeddedProto::sint32&& value) { quat_x_ = value; }
    inline EmbeddedProto::sint32& mutable_quat_x() { return quat_x_; }
    inline const EmbeddedProto::sint32& get_quat_x() const { return quat_x_; }
    inline EmbeddedProto::sint32::FIELD_TYPE quat_x() const { return quat_x_.get(); }

    inline void clear_quat_y() { quat_y_.clear(); }
    inline void set_quat_y(const EmbeddedProto::sint32& value) { quat_y_ = value; }
    inline void set_quat_y(const EmbeddedProto::sint32&& value) { quat_y_ = value; }
    inline EmbeddedProto::sint32& mutable_quat_y() { return quat_y_; }
    inline const EmbeddedProto::sint32& get_quat_y() const { return quat_y_; }
    inline EmbeddedProto::sint32::FIELD_TYPE quat_y() const { return quat_y_.get(); }

    inline void clear_quat_z() { quat_z_.clear(); }
    inline void set_quat_z(const EmbeddedProto::sint32& value) { quat_z_ = value; }
    inline void set_quat_z(const EmbeddedProto::sint32&& value) { quat_z_ = value; }
    inline EmbeddedProto::sint32& mutable_quat_z() { return quat_z_; }
    inline const EmbeddedProto::sint32& get_quat_z() const { return quat_z_; }
    inline EmbeddedProto::sint32::FIELD_TYPE quat_z() const { return quat_z_.get(); }

    inline void clear_quat_w() { quat_w_.clear(); }
    inline void set_quat_w(const EmbeddedProto::sint32& value) { quat_w_ = value; }
    inline void set_quat_w(const EmbeddedProto::sint32&& value) { quat_w_ = value; }
    inline EmbeddedProto::sint32& mutable_quat_w() { return quat_w_; }
    inline const EmbeddedProto::sint32& get_quat_w() const { return quat_w_; }
    inline EmbeddedProto::sint32::FIELD_TYPE quat_w() const { return quat_w_.get(); }

    inline void clear_euler_x() { euler_x_.clear(); }
    inline void set_euler_x(const EmbeddedProto::sint32& value) { euler_x_ = value; }
    inline void set_euler_x(const EmbeddedProto::sint32&& value) { euler_x_ = value; }
    inline EmbeddedProto::sint32& mutable_euler_x() { return euler_x_; }
    inline const EmbeddedProto::sint32& get_euler_x() const { return euler_x_; }
    inline EmbeddedProto::sint32::FIELD_TYPE euler_x() const { return euler_x_.get(); }

    inline void clear_euler_y() { euler_y_.clear(); }
    inline void set_euler_y(const EmbeddedProto::sint32& value) { euler_y_ = value; }
    inline void set_euler_y(const EmbeddedProto::sint32&& value) { euler_y_ = value; }
    inline EmbeddedProto::sint32& mutable_euler_y() { return euler_y_; }
    inline const EmbeddedProto::sint32& get_euler_y() const { return euler_y_; }
    inline EmbeddedProto::sint32::FIELD_TYPE euler_y() const { return euler_y_.get(); }

    inline void clear_euler_z() { euler_z_.clear(); }
    inline void set_euler_z(const EmbeddedProto::sint32& value) { euler_z_ = value; }
    inline void set_euler_z(const EmbeddedProto::sint32&& value) { euler_z_ = value; }
    inline EmbeddedProto::sint32& mutable_euler_z() { return euler_z_; }
    inline const EmbeddedProto::sint32& get_euler_z() const { return euler_z_; }
    inline EmbeddedProto::sint32::FIELD_TYPE euler_z() const { return euler_z_.get(); }

    inline void clear_omega_x() { omega_x_.clear(); }
    inline void set_omega_x(const EmbeddedProto::sint32& value) { omega_x_ = value; }
    inline void set_omega_x(const EmbeddedProto::sint32&& value) { omega_x_ = value; }
    inline EmbeddedProto::sint32& mutable_omega_x() { return omega_x_; }
    inline const EmbeddedProto::sint32& get_omega_x() const { return omega_x_; }
    inline EmbeddedProto::sint32::FIELD_TYPE omega_x() const { return omega_x_.get(); }

    inline void clear_omega_y() { omega_y_.clear(); }
    inline void set_omega_y(const EmbeddedProto::sint32& value) { omega_y_ = value; }
    inline void set_omega_y(const EmbeddedProto::sint32&& value) { omega_y_ = value; }
    inline EmbeddedProto::sint32& mutable_omega_y() { return omega_y_; }
    inline const EmbeddedProto::sint32& get_omega_y() const { return omega_y_; }
    inline EmbeddedProto::sint32::FIELD_TYPE omega_y() const { return omega_y_.get(); }

    inline void clear_omega_z() { omega_z_.clear(); }
    inline void set_omega_z(const EmbeddedProto::sint32& value) { omega_z_ = value; }
    inline void set_omega_z(const EmbeddedProto::sint32&& value) { omega_z_ = value; }
    inline EmbeddedProto::sint32& mutable_omega_z() { return omega_z_; }
    inline const EmbeddedProto::sint32& get_omega_z() const { return omega_z_; }
    inline EmbeddedProto::sint32::FIELD_TYPE omega_z() const { return omega_z_.get(); }

    inline void clear_accel_x() { accel_x_.clear(); }
    inline void set_accel_x(const EmbeddedProto::sint32& value) { accel_x_ = value; }
    inline void set_accel_x(const EmbeddedProto::sint32&& value) { accel_x_ = value; }
    inline EmbeddedProto::sint32& mutable_accel_x() { return accel_x_; }
    inline const EmbeddedProto::sint32& get_accel_x() const { return accel_x_; }
    inline EmbeddedProto::sint32::FIELD_TYPE accel_x() const { return accel_x_.get(); }

    inline void clear_accel_y() { accel_y_.clear(); }
    inline void set_accel_y(const EmbeddedProto::sint32& value) { accel_y_ = value; }
    inline void set_accel_y(const EmbeddedProto::sint32&& value) { accel_y_ = value; }
    inline EmbeddedProto::sint32& mutable_accel_y() { return accel_y_; }
    inline const EmbeddedProto::sint32& get_accel_y() const { return accel_y_; }
    inline EmbeddedProto::sint32::FIELD_TYPE accel_y() const { return accel_y_.get(); }

    inline void clear_accel_z() { accel_z_.clear(); }
    inline void set_accel_z(const EmbeddedProto::sint32& value) { accel_z_ = value; }
    inline void set_accel_z(const EmbeddedProto::sint32&& value) { accel_z_ = value; }
    inline EmbeddedProto::sint32& mutable_accel_z() { return accel_z_; }
    inline const EmbeddedProto::sint32& get_accel_z() const { return accel_z_; }
    inline EmbeddedProto::sint32::FIELD_TYPE accel_z() const { return accel_z_.get(); }

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

      if((0 != quat_x_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = quat_x_.serialize_with_id(static_cast<uint32_t>(id::QUAT_X), buffer);
      }

      if((0 != quat_y_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = quat_y_.serialize_with_id(static_cast<uint32_t>(id::QUAT_Y), buffer);
      }

      if((0 != quat_z_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = quat_z_.serialize_with_id(static_cast<uint32_t>(id::QUAT_Z), buffer);
      }

      if((0 != quat_w_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = quat_w_.serialize_with_id(static_cast<uint32_t>(id::QUAT_W), buffer);
      }

      if((0 != euler_x_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = euler_x_.serialize_with_id(static_cast<uint32_t>(id::EULER_X), buffer);
      }

      if((0 != euler_y_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = euler_y_.serialize_with_id(static_cast<uint32_t>(id::EULER_Y), buffer);
      }

      if((0 != euler_z_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = euler_z_.serialize_with_id(static_cast<uint32_t>(id::EULER_Z), buffer);
      }

      if((0 != omega_x_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = omega_x_.serialize_with_id(static_cast<uint32_t>(id::OMEGA_X), buffer);
      }

      if((0 != omega_y_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = omega_y_.serialize_with_id(static_cast<uint32_t>(id::OMEGA_Y), buffer);
      }

      if((0 != omega_z_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = omega_z_.serialize_with_id(static_cast<uint32_t>(id::OMEGA_Z), buffer);
      }

      if((0 != accel_x_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = accel_x_.serialize_with_id(static_cast<uint32_t>(id::ACCEL_X), buffer);
      }

      if((0 != accel_y_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = accel_y_.serialize_with_id(static_cast<uint32_t>(id::ACCEL_Y), buffer);
      }

      if((0 != accel_z_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = accel_z_.serialize_with_id(static_cast<uint32_t>(id::ACCEL_Z), buffer);
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
          case id::QUAT_X:
            return_value = quat_x_.deserialize_check_type(buffer, wire_type);
            break;

          case id::QUAT_Y:
            return_value = quat_y_.deserialize_check_type(buffer, wire_type);
            break;

          case id::QUAT_Z:
            return_value = quat_z_.deserialize_check_type(buffer, wire_type);
            break;

          case id::QUAT_W:
            return_value = quat_w_.deserialize_check_type(buffer, wire_type);
            break;

          case id::EULER_X:
            return_value = euler_x_.deserialize_check_type(buffer, wire_type);
            break;

          case id::EULER_Y:
            return_value = euler_y_.deserialize_check_type(buffer, wire_type);
            break;

          case id::EULER_Z:
            return_value = euler_z_.deserialize_check_type(buffer, wire_type);
            break;

          case id::OMEGA_X:
            return_value = omega_x_.deserialize_check_type(buffer, wire_type);
            break;

          case id::OMEGA_Y:
            return_value = omega_y_.deserialize_check_type(buffer, wire_type);
            break;

          case id::OMEGA_Z:
            return_value = omega_z_.deserialize_check_type(buffer, wire_type);
            break;

          case id::ACCEL_X:
            return_value = accel_x_.deserialize_check_type(buffer, wire_type);
            break;

          case id::ACCEL_Y:
            return_value = accel_y_.deserialize_check_type(buffer, wire_type);
            break;

          case id::ACCEL_Z:
            return_value = accel_z_.deserialize_check_type(buffer, wire_type);
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
      clear_quat_x();
      clear_quat_y();
      clear_quat_z();
      clear_quat_w();
      clear_euler_x();
      clear_euler_y();
      clear_euler_z();
      clear_omega_x();
      clear_omega_y();
      clear_omega_z();
      clear_accel_x();
      clear_accel_y();
      clear_accel_z();
      clear_lon();
      clear_lat();
      clear_alt();

    }

    private:

      EmbeddedProto::sint32 quat_x_ = 0;
      EmbeddedProto::sint32 quat_y_ = 0;
      EmbeddedProto::sint32 quat_z_ = 0;
      EmbeddedProto::sint32 quat_w_ = 0;
      EmbeddedProto::sint32 euler_x_ = 0;
      EmbeddedProto::sint32 euler_y_ = 0;
      EmbeddedProto::sint32 euler_z_ = 0;
      EmbeddedProto::sint32 omega_x_ = 0;
      EmbeddedProto::sint32 omega_y_ = 0;
      EmbeddedProto::sint32 omega_z_ = 0;
      EmbeddedProto::sint32 accel_x_ = 0;
      EmbeddedProto::sint32 accel_y_ = 0;
      EmbeddedProto::sint32 accel_z_ = 0;
      EmbeddedProto::sint32 lon_ = 0;
      EmbeddedProto::sint32 lat_ = 0;
      EmbeddedProto::sint32 alt_ = 0;

};

#endif // ORIENTATION_H