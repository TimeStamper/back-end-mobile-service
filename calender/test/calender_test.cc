/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: test_calender.cc
 */

#include "gtest/gtest.h"
#include "include/calender.h"

namespace timer_stamper {

namespace development_test {

/**
 * \brief Summary description
 *
 * Optional: Detailed description
 */
class Calender_Fixture : public ::testing::Test {
 protected:
  Calender calender_;
  /**
   * \brief Default constructor.
   */
  Calender_Fixture();

  /**
   * \brief Destructor.
   */
  virtual ~Calender_Fixture();
};


Calender_Fixture::Calender_Fixture() {
}


Calender_Fixture::~Calender_Fixture() {
}


TEST_F(Calender_Fixture,
       Default_Fail) {
  // Test setup

  // Execute

  // Verify
  ASSERT_TRUE(false);
}

} // namespace development_test

}  // namespace timer_stamper
