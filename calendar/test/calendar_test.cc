/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: test_calendar.cc
 *
 */

#include "gtest/gtest.h"
#include "include/calendar.h"
#include "include/day_entry.h"
#include "include/time_stamper_types.h"

namespace time_stamper {

namespace development_test {

/**
 * @brief Fixture used for testing the <b>Calendar</b> module.
 */
class Calendar_Fixture : public ::testing::Test {
 protected:
  Calendar calendar_;
  /**
   * @brief Default constructor.
   */
  Calendar_Fixture();

  /**
   * @brief Destructor.
   */
  virtual ~Calendar_Fixture();
};


Calendar_Fixture::Calendar_Fixture() {
}


Calendar_Fixture::~Calendar_Fixture() {
}


TEST_F(Calendar_Fixture,
       TestThatRetrievingExistingDateWorksCorrectly) {
  // Test setup
  const std::string date_string = "2000/01/01";
  const BooleanType expected_stamp_status = true;
  GregorianDate date(boost::gregorian::from_simple_string(date_string));

  // Execute
  calendar_.addDate(date);

  // Verify
  const DayEntry& actual_date_entry = calendar_.getDate(date);

  ASSERT_TRUE(expected_stamp_status == actual_date_entry.containsStamps()) <<
              "Date list size should be as expected.";
}


TEST_F(Calendar_Fixture,
       TestThatTryingToRetrieveNonExistingDateReturnsDefaultDateEntry) {
  // Test setup
  const std::string date_string = "2000/01/01";
  const BooleanType expected_stamp_status = false;
  GregorianDate date(boost::gregorian::from_simple_string(date_string));

  // Execute

  // Verify
  const DayEntry& actual_date_entry = calendar_.getDate(date);

  ASSERT_TRUE(expected_stamp_status == actual_date_entry.containsStamps()) <<
              "Date list size should be as expected.";
}

}  // namespace development_test

}  // namespace time_stamper
