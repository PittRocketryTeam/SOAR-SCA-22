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
#ifndef EVENT_H
#define EVENT_H

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


enum class EventType : uint32_t
{
  BAD = 0,
  LAUNCH = 1,
  APOGEE = 2,
  ENERGETIC = 3,
  DROGUE = 4,
  MAIN = 5,
  LANDING = 6
};

class Event final: public ::EmbeddedProto::MessageInterface
{
  public:
    Event() = default;
    Event(const Event& rhs )
    {
      set_timestamp(rhs.get_timestamp());
      set_type(rhs.get_type());
    }

    Event(const Event&& rhs ) noexcept
    {
      set_timestamp(rhs.get_timestamp());
      set_type(rhs.get_type());
    }

    ~Event() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      TIMESTAMP = 1,
      TYPE = 2
    };

    Event& operator=(const Event& rhs)
    {
      set_timestamp(rhs.get_timestamp());
      set_type(rhs.get_type());
      return *this;
    }

    Event& operator=(const Event&& rhs) noexcept
    {
      set_timestamp(rhs.get_timestamp());
      set_type(rhs.get_type());
      return *this;
    }

    inline void clear_timestamp() { timestamp_.clear(); }
    inline void set_timestamp(const EmbeddedProto::uint32& value) { timestamp_ = value; }
    inline void set_timestamp(const EmbeddedProto::uint32&& value) { timestamp_ = value; }
    inline EmbeddedProto::uint32& mutable_timestamp() { return timestamp_; }
    inline const EmbeddedProto::uint32& get_timestamp() const { return timestamp_; }
    inline EmbeddedProto::uint32::FIELD_TYPE timestamp() const { return timestamp_.get(); }

    inline void clear_type() { type_ = static_cast<EventType>(0); }
    inline void set_type(const EventType& value) { type_ = value; }
    inline void set_type(const EventType&& value) { type_ = value; }
    inline const EventType& get_type() const { return type_; }
    inline EventType type() const { return type_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((0U != timestamp_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = timestamp_.serialize_with_id(static_cast<uint32_t>(id::TIMESTAMP), buffer);
      }

      if((static_cast<EventType>(0) != type_) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        EmbeddedProto::uint32 value = 0;
        value.set(static_cast<uint32_t>(type_));
        return_value = value.serialize_with_id(static_cast<uint32_t>(id::TYPE), buffer);
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
          case id::TIMESTAMP:
            return_value = timestamp_.deserialize_check_type(buffer, wire_type);
            break;

          case id::TYPE:
            if(::EmbeddedProto::WireFormatter::WireType::VARINT == wire_type)
            {
              uint32_t value = 0;
              return_value = ::EmbeddedProto::WireFormatter::DeserializeVarint(buffer, value);
              if(::EmbeddedProto::Error::NO_ERRORS == return_value)
              {
                set_type(static_cast<EventType>(value));
              }
            }
            else
            {
              // Wire type does not match field.
              return_value = ::EmbeddedProto::Error::INVALID_WIRETYPE;
            }
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
      clear_timestamp();
      clear_type();

    }

    private:

      EmbeddedProto::uint32 timestamp_ = 0U;
      EventType type_ = static_cast<EventType>(0);

};

#endif // EVENT_H