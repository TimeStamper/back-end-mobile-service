/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: week_test.cc
 */

#include "gtest/gtest.h"
#include "include/week.h"

namespace time_stamper {

namespace development_test {

/**
 * \brief Fixture used for testing <b>Week</b> module.
 */
class WeekFixture : public ::testing::Test {
 protected:
  Week week_;

  /**
   * \brief Default constructor.
   */
  WeekFixture();

  /**
   * \brief Destructor.
   */
  virtual ~WeekFixture();
};


WeekFixture::WeekFixture()
: week_() {
}


WeekFixture::~WeekFixture() {
}


TEST_F(WeekFixture,
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
