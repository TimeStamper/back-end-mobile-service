/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: year_test.cc
 */

#include "include/time_stamper_types.h"
#include "gtest/gtest.h"
#include "include/year.h"

namespace time_stamper {

namespace development_test {

/**
 * \brief Fixture used for testing <b>Year</b> module.
 */
class YearFixture : public ::testing::Test {
 protected:
  Year year_;

  /**
   * \brief Default constructor.
   */
  YearFixture();

  /**
   * \brief Destructor.
   */
  virtual ~YearFixture();
};


YearFixture::YearFixture()
: year_() {
}


YearFixture::~YearFixture() {
}


TEST_F(YearFixture,
       testThatIfNoDateExistNewDateIsAdded) {
  // Test setup
  const UnsignedIntegerType year_input = 3;
  const UnsignedIntegerType month_input = 5;

  const UnsignedIntegerType expected_year = year_input;
  const UnsignedIntegerType expected_month_list_size = 1;

  const UnsignedIntegerType dont_care_value = 1;

  // Execute
  year_.addDate(year_input,
                month_input,
                dont_care_value,
                dont_care_value);

  // Verify
  ASSERT_EQ(expected_month_list_size,
            static_cast<UnsignedIntegerType>(year_.getMonthList().size())) <<
            "Expected month list size is incorrect.";
  ASSERT_EQ(expected_year,
            year_.getYear()) <<
            "Expected year identifier is incorrect.";
}

}  // namespace development_test

}  // namespace time_stamper
