/**
 * Copyright 2015 Erik Ahlberg
 * Created: 10 aug. 2015
 *  Author: Erik
 *    File: day_entry_test.cc
 */

#include "gtest/gtest.h"
#include "include/day_entry.h"
#include "include/time_stamper_types.h"

namespace time_stamper {

namespace development_test {

/**
 * @brief Fixture used for testing the <b>Day Entry</b> module.
 */
class DayEntryFixture : public ::testing::Test {
 protected:
  DayEntry day_entry_;

  /**
   * @brief Default constructor.
   */
  DayEntryFixture();

  /**
   * @brief Destructor.
   */
  virtual ~DayEntryFixture();
};


DayEntryFixture::DayEntryFixture()
: day_entry_() {
}


DayEntryFixture::~DayEntryFixture() {
}


TEST_F(DayEntryFixture,
       testThatActiveStampIsNotFinalized) {
  // Test setup
  const UnsignedIntegerType expected_stamp_list_size = 0;

  // Execute
  day_entry_.stamp();
  const StampList& actual_stamps(day_entry_.getStamps());

  // Verify
  ASSERT_EQ(expected_stamp_list_size,
            static_cast<UnsignedIntegerType>(actual_stamps.size())) <<
            "The size of the stamp list should be as expected.";
}


TEST_F(DayEntryFixture,
       testThatStampIsOnlyFinalizedWhenActive) {
  // Test setup
  const UnsignedIntegerType expected_stamp_list_size = 1;

  // Execute
  day_entry_.stamp();
  day_entry_.stamp();
  const StampList& actual_stamps(day_entry_.getStamps());

  // Verify
  ASSERT_EQ(expected_stamp_list_size,
            static_cast<UnsignedIntegerType>(actual_stamps.size())) <<
            "The size of the stamp list should be as expected.";
}


TEST_F(DayEntryFixture,
       testThatDefaultDayEntryObjectDoesNotContainAnyStamps) {
  // Test setup
  const BooleanType expected_stamp_status = false;

  // Execute
  const BooleanType actual_stamp_status = day_entry_.containsStamps();

  // Verify
  ASSERT_TRUE(expected_stamp_status == actual_stamp_status) <<
              "The stamp status should be as expected.";
}


TEST_F(DayEntryFixture,
       testThatStampedDayEntryObjectContainsStamps) {
  // Test setup
  const BooleanType expected_stamp_status = true;

  // Execute
  day_entry_.stamp();
  const BooleanType actual_stamp_status = day_entry_.containsStamps();

  // Verify
  ASSERT_TRUE(expected_stamp_status == actual_stamp_status) <<
              "The stamp status should be as expected.";
}

}  // namespace development_test

}  // namespace time_stamper
