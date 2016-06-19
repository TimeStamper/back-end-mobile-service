/**
 * Copyright 2015 Erik Ahlberg
 * Created: 2 aug. 2015
 *  Author: Erik
 *    File: stamp_test.cc
 */

#include "gtest/gtest.h"
#include "include/stamp.h"
#include "include/time_stamper_types.h"

namespace time_stamper {

namespace development_test {

/**
 * @brief Fixture used for testing <b>Stamp</b> module.
 */
class StampFixture : public ::testing::Test {
 protected:
    Stamp stamp_;

  /**
   * @brief Default constructor.
   */
  StampFixture();

  /**
   * @brief Destructor.
   */
  virtual ~StampFixture();
};


StampFixture::StampFixture()
: stamp_() {
}


StampFixture::~StampFixture() {
}


TEST_F(StampFixture,
       testThatDeepCopyConstructionIsDoneCorrectly) {
  // Test setup
  stamp_.checkIn();
  stamp_.checkOut();

  // Execute
  const Stamp stamp_copy(stamp_);

  // Verify
  ASSERT_TRUE(stamp_.isActive() == stamp_copy.isActive()) <<
              "Activity status should be equal.";

  ASSERT_TRUE(stamp_.getCheckInTime() == stamp_copy.getCheckInTime()) <<
              "Check in time should be equal.";

  ASSERT_TRUE(stamp_.getCheckOutTime() == stamp_copy.getCheckOutTime()) <<
              "Check out time should be equal.";
}


TEST_F(StampFixture,
       testThatDeepAssignmentIsDoneCorrectly) {
  // Test setup
  stamp_.checkIn();
  stamp_.checkOut();

  // Execute
  Stamp stamp_assignment;
  stamp_assignment = stamp_;

  // Verify
  ASSERT_TRUE(stamp_.isActive() == stamp_assignment.isActive()) <<
              "Activity status should be equal.";

  ASSERT_TRUE(stamp_.getCheckInTime() == stamp_assignment.getCheckInTime()) <<
              "Check in time should be equal.";

  ASSERT_TRUE(stamp_.getCheckOutTime() == stamp_assignment.getCheckOutTime()) <<
              "Check out time should be equal.";
}


TEST_F(StampFixture,
       testThatCheckInSetsStampToActive) {
  // Test setup
  const BooleanType expected_status = true;

  // Execute
  stamp_.checkIn();

  // Verify
  ASSERT_TRUE(expected_status == stamp_.isActive()) <<
              "Activity status should be as expected.";
}


TEST_F(StampFixture,
       testThatCheckOutSetsStampToInactive) {
  // Test setup
  const BooleanType expected_status = false;

  // Execute
  stamp_.checkIn();
  stamp_.checkOut();

  // Verify
  ASSERT_TRUE(expected_status == stamp_.isActive()) <<
              "Activity status should be as expected.";
}

}  // namespace development_test

}  // namespace time_stamper
