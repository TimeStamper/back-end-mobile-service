/**
 * Copyright 2015 Erik Ahlberg
 * Created: 10 aug. 2015
 *  Author: Erik
 *    File: day_entry_test.cc
 */

#include "gtest/gtest.h"
#include "include/day_entry.h"

namespace time_stamper {

namespace development_test {

/**
 * \brief Summary description
 *
 * Optional: Detailed description
 */
class DayEntryFixture : public ::testing::Test {
 protected:
  DayEntry day_entry_;

  /**
   * \brief Default constructor.
   */
  DayEntryFixture();

  /**
   * \brief Destructor.
   */
  virtual ~DayEntryFixture();
};


DayEntryFixture::DayEntryFixture()
: day_entry_() {
}


DayEntryFixture::~DayEntryFixture() {
}


TEST_F(DayEntryFixture,
       testThatIfNoStampIsActivatedStampDayWillActivateNewStamp) {
  // Test setup
  Stamp activated_stamp;
  StampList expected_stamps;
  expected_stamps.push_back(activated_stamp);

  // Execute
  day_entry_.stampDay();
  const StampList& actual_stamps(day_entry_.getStamps());

  // Verify
  ASSERT_EQ(expected_stamps.size(), actual_stamps.size());
}

}  // namespace development_test

}  // namespace time_stamper
