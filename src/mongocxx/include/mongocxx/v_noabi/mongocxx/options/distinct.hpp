// Copyright 2014 MongoDB Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <chrono>
#include <cstdint>
#include <string>

#include <mongocxx/options/distinct-fwd.hpp>

#include <bsoncxx/document/view_or_value.hpp>
#include <bsoncxx/stdx/optional.hpp>
#include <bsoncxx/types/bson_value/view_or_value.hpp>
#include <mongocxx/read_preference.hpp>

#include <mongocxx/config/prelude.hpp>

namespace mongocxx {
inline namespace v_noabi {
namespace options {

///
/// Class representing the optional arguments to a MongoDB distinct command.
///
class distinct {
   public:
    ///
    /// Sets the collation for this operation.
    ///
    /// @param collation
    ///   The new collation.
    ///
    /// @return
    ///   A reference to the object on which this member function is being called.  This facilitates
    ///   method chaining.
    ///
    /// @see https://www.mongodb.com/docs/manual/reference/command/distinct/
    ///
    distinct& collation(bsoncxx::document::view_or_value collation);

    ///
    /// Retrieves the current collation for this operation.
    ///
    /// @return
    ///   The current collation.
    ///
    /// @see https://www.mongodb.com/docs/manual/reference/command/distinct/
    ///
    const stdx::optional<bsoncxx::document::view_or_value>& collation() const;

    ///
    /// Sets the maximum amount of time for this operation to run (server-side) in milliseconds.
    ///
    /// @param max_time
    ///   The max amount of time (in milliseconds).
    ///
    /// @return
    ///   A reference to the object on which this member function is being called.  This facilitates
    ///   method chaining.
    ///
    /// @see https://www.mongodb.com/docs/manual/reference/command/distinct/
    ///
    distinct& max_time(std::chrono::milliseconds max_time);

    ///
    /// The current max_time setting.
    ///
    /// @return The current max time (in milliseconds).
    ///
    /// @see https://www.mongodb.com/docs/manual/reference/command/distinct/
    ///
    const stdx::optional<std::chrono::milliseconds>& max_time() const;

    ///
    /// Sets the comment for this operation.
    ///
    /// @param comment
    ///   The new comment.
    ///
    /// @return
    ///   A reference to the object on which this member function is being called.  This facilitates
    ///   method chaining.
    ///
    /// @see https://www.mongodb.com/docs/manual/reference/command/distinct/
    ///
    distinct& comment(bsoncxx::types::bson_value::view_or_value comment);

    ///
    /// The current comment for this operation.
    ///
    /// @return The current comment
    ///
    /// @see https://www.mongodb.com/docs/manual/reference/command/distinct/
    ///
    const stdx::optional<bsoncxx::types::bson_value::view_or_value>& comment() const;

    ///
    /// Sets the read_preference for this operation.
    ///
    /// @param rp
    ///   The new read_preference.
    ///
    /// @return
    ///   A reference to the object on which this member function is being called.  This facilitates
    ///   method chaining.
    ///
    /// @see https://www.mongodb.com/docs/manual/reference/command/distinct/
    ///
    distinct& read_preference(mongocxx::read_preference rp);

    ///
    /// The current read_preference for this operation.
    ///
    /// @return the current read_preference.
    ///
    /// @see https://www.mongodb.com/docs/manual/reference/command/distinct/
    ///
    const stdx::optional<mongocxx::read_preference>& read_preference() const;

   private:
    stdx::optional<bsoncxx::document::view_or_value> _collation;
    stdx::optional<std::chrono::milliseconds> _max_time;
    stdx::optional<bsoncxx::types::bson_value::view_or_value> _comment;
    stdx::optional<mongocxx::read_preference> _read_preference;
};

}  // namespace options
}  // namespace v_noabi
}  // namespace mongocxx

#include <mongocxx/config/postlude.hpp>
