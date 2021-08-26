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
#ifndef CHUNK_H
#define CHUNK_H

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


template<uint32_t data_LENGTH>
class Chunk final: public ::EmbeddedProto::MessageInterface
{
  public:
    Chunk() = default;
    Chunk(const Chunk& rhs )
    {
      set_done(rhs.get_done());
      set_size(rhs.get_size());
      set_data(rhs.get_data());
    }

    Chunk(const Chunk&& rhs ) noexcept
    {
      set_done(rhs.get_done());
      set_size(rhs.get_size());
      set_data(rhs.get_data());
    }

    ~Chunk() override = default;

    enum class id : uint32_t
    {
      NOT_SET = 0,
      DONE = 1,
      SIZE = 2,
      DATA = 3
    };

    Chunk& operator=(const Chunk& rhs)
    {
      set_done(rhs.get_done());
      set_size(rhs.get_size());
      set_data(rhs.get_data());
      return *this;
    }

    Chunk& operator=(const Chunk&& rhs) noexcept
    {
      set_done(rhs.get_done());
      set_size(rhs.get_size());
      set_data(rhs.get_data());
      return *this;
    }

    inline void clear_done() { done_.clear(); }
    inline void set_done(const EmbeddedProto::boolean& value) { done_ = value; }
    inline void set_done(const EmbeddedProto::boolean&& value) { done_ = value; }
    inline EmbeddedProto::boolean& mutable_done() { return done_; }
    inline const EmbeddedProto::boolean& get_done() const { return done_; }
    inline EmbeddedProto::boolean::FIELD_TYPE done() const { return done_.get(); }

    inline void clear_size() { size_.clear(); }
    inline void set_size(const EmbeddedProto::uint32& value) { size_ = value; }
    inline void set_size(const EmbeddedProto::uint32&& value) { size_ = value; }
    inline EmbeddedProto::uint32& mutable_size() { return size_; }
    inline const EmbeddedProto::uint32& get_size() const { return size_; }
    inline EmbeddedProto::uint32::FIELD_TYPE size() const { return size_.get(); }

    inline void clear_data() { data_.clear(); }
    inline ::EmbeddedProto::FieldBytes<data_LENGTH>& mutable_data() { return data_; }
    inline void set_data(const ::EmbeddedProto::FieldBytes<data_LENGTH>& rhs) { data_.set(rhs); }
    inline const ::EmbeddedProto::FieldBytes<data_LENGTH>& get_data() const { return data_; }
    inline const uint8_t* data() const { return data_.get_const(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if((false != done_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = done_.serialize_with_id(static_cast<uint32_t>(id::DONE), buffer);
      }

      if((0U != size_.get()) && (::EmbeddedProto::Error::NO_ERRORS == return_value))
      {
        return_value = size_.serialize_with_id(static_cast<uint32_t>(id::SIZE), buffer);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = data_.serialize_with_id(static_cast<uint32_t>(id::DATA), buffer);
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
          case id::DONE:
            return_value = done_.deserialize_check_type(buffer, wire_type);
            break;

          case id::SIZE:
            return_value = size_.deserialize_check_type(buffer, wire_type);
            break;

          case id::DATA:
            return_value = data_.deserialize_check_type(buffer, wire_type);
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
      clear_done();
      clear_size();
      clear_data();

    }

    private:

      EmbeddedProto::boolean done_ = false;
      EmbeddedProto::uint32 size_ = 0U;
      ::EmbeddedProto::FieldBytes<data_LENGTH> data_;

};

#endif // CHUNK_H