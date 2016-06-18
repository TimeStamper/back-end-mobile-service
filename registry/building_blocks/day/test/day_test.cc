/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: day_test.cc
 */

#include "gtest/gtest.h"
#include "include/day.h"

namespace time_stamper {

namespace development_test {

/**
 * \brief Fixture used for testing <b>Day</b> module.
 */
class DayFixture : public ::testing::Test {
 protected:
  Day day_;

  /**
   * \brief Default constructor.
   */
  DayFixture();

  /**
   * \brief Destructor.
   */
  virtual ~DayFixture();
};


DayFixture::DayFixture()
: day_() {
}


DayFixture::~DayFixture() {
}


TEST_F(DayFixture,
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
