/**
 * Copyright 2015 Erik Ahlberg
 * Created: Oct 4, 2015
 *  Author: erik
 *    File: test_calender.cc
 */

#include "gtest/gtest.h"
#include "include/calender.h"
#include "include/time_stamper_types.h"

namespace time_stamper {

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
       TestThatIfDateDoesNotExistItIsAdded) {
  // Test setup
  const std::string date_string = "2000/01/01";
  GregorianDate date(boost::gregorian::from_simple_string(date_string));
  const UnsignedIntegerType expected_date_list_size = 1;

  // Execute
  calender_.addDate(date);

  // Verify
  const DateList& actual_date_list = calender_.getDateList();

  ASSERT_EQ(expected_date_list_size,
            static_cast<UnsignedIntegerType>(actual_date_list.size())) <<
            "Date list size should be as expected.";
}


TEST_F(Calender_Fixture,
       TestThatIfDateExistsItIsNotAdded) {
  // Test setup
  const std::string date_string = "2000/01/01";
  GregorianDate date(boost::gregorian::from_simple_string(date_string));
  const UnsignedIntegerType expected_date_list_size = 1;

  // Execute
  calender_.addDate(date);
  calender_.addDate(date);

  // Verify
  const DateList& actual_date_list = calender_.getDateList();

  ASSERT_EQ(expected_date_list_size,
            static_cast<UnsignedIntegerType>(actual_date_list.size())) <<
            "Date list size should be as expected.";
}

}  // namespace development_test

}  // namespace time_stamper
