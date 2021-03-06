/**
 * Copyright (c) 2014-present, The osquery authors
 *
 * This source code is licensed as defined by the LICENSE file found in the
 * root directory of this source tree.
 *
 * SPDX-License-Identifier: (Apache-2.0 OR GPL-2.0-only)
 */

// Sanity check integration test for safari_extensions
// Spec file: specs/darwin/safari_extensions.table

#include <osquery/tests/integration/tables/helper.h>

namespace osquery {
namespace table_tests {

class safariExtensions : public testing::Test {
 protected:
  void SetUp() override {
    setUpEnvironment();
  }
};

TEST_F(safariExtensions, test_sanity) {
  // 1. Query data
  auto const data = execute_query("select * from safari_extensions");
  // 2. Check size before validation
  // ASSERT_GE(data.size(), 0ul);
  // ASSERT_EQ(data.size(), 1ul);
  // ASSERT_EQ(data.size(), 0ul);
  // 3. Build validation map
  // See helper.h for avaialbe flags
  // Or use custom DataCheck object
  // ValidationMap row_map = {
  //      {"uid", IntType}
  //      {"name", NormalType}
  //      {"identifier", NormalType}
  //      {"version", NormalType}
  //      {"sdk", NormalType}
  //      {"update_url", NormalType}
  //      {"author", NormalType}
  //      {"developer_id", NormalType}
  //      {"description", NormalType}
  //      {"path", NormalType}
  //}
  // 4. Perform validation
  // validate_rows(data, row_map);
}

} // namespace table_tests
} // namespace osquery
