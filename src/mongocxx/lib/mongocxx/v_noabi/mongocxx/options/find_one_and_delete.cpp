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

#include <mongocxx/options/find_one_and_delete.hpp>

#include <mongocxx/config/private/prelude.hh>

namespace mongocxx {
inline namespace v_noabi {
namespace options {

find_one_and_delete& find_one_and_delete::collation(bsoncxx::document::view_or_value collation) {
    _collation = std::move(collation);
    return *this;
}

find_one_and_delete& find_one_and_delete::max_time(std::chrono::milliseconds max_time) {
    _max_time = std::move(max_time);
    return *this;
}

find_one_and_delete& find_one_and_delete::projection(bsoncxx::document::view_or_value projection) {
    _projection = std::move(projection);
    return *this;
}

find_one_and_delete& find_one_and_delete::sort(bsoncxx::document::view_or_value ordering) {
    _ordering = std::move(ordering);
    return *this;
}

find_one_and_delete& find_one_and_delete::write_concern(mongocxx::write_concern write_concern) {
    _write_concern = std::move(write_concern);
    return *this;
}

find_one_and_delete& find_one_and_delete::hint(mongocxx::hint index_hint) {
    _hint = std::move(index_hint);
    return *this;
}

find_one_and_delete& find_one_and_delete::let(bsoncxx::document::view_or_value let) {
    _let = let;
    return *this;
}

find_one_and_delete& find_one_and_delete::comment(
    bsoncxx::types::bson_value::view_or_value comment) {
    _comment = std::move(comment);
    return *this;
}

const stdx::optional<mongocxx::hint>& find_one_and_delete::hint() const {
    return _hint;
}

const stdx::optional<bsoncxx::document::view_or_value>& find_one_and_delete::collation() const {
    return _collation;
}

const stdx::optional<bsoncxx::document::view_or_value>& find_one_and_delete::projection() const {
    return _projection;
}

const stdx::optional<bsoncxx::document::view_or_value>& find_one_and_delete::sort() const {
    return _ordering;
}

const stdx::optional<std::chrono::milliseconds>& find_one_and_delete::max_time() const {
    return _max_time;
}

const stdx::optional<mongocxx::write_concern>& find_one_and_delete::write_concern() const {
    return _write_concern;
}

const stdx::optional<bsoncxx::document::view_or_value> find_one_and_delete::let() const {
    return _let;
}

const stdx::optional<bsoncxx::types::bson_value::view_or_value> find_one_and_delete::comment()
    const {
    return _comment;
}

}  // namespace options
}  // namespace v_noabi
}  // namespace mongocxx
