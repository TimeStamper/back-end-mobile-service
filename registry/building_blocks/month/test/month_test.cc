/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: month_test.cc
 */

#include "gtest/gtest.h"
#include "include/month.h"

namespace time_stamper {

namespace development_test {

/**
 * \brief Fixture used for testing <b>Month</b> module.
 */
class MonthFixture : public ::testing::Test {
 protected:
  const UnsignedIntegerType identifier_;
  Month month_;

  /**
   * \brief Default constructor.
   */
  MonthFixture();

  /**
   * \brief Destructor.
   */
  virtual ~MonthFixture();
};


MonthFixture::MonthFixture()
: identifier_(3),
  month_(identifier_) {
}


MonthFixture::~MonthFixture() {
}


TEST_F(MonthFixture,
       testSomething) {
  // Test setup

  // Execute

  // Verify
  // TODO(eriah): Update this test. For now it is left empty since it is not
  //              yet known exactly how to observe all the data members.
  ASSERT_TRUE(true);
}

}  // namespace development_test

}  // namespace time_stamper
