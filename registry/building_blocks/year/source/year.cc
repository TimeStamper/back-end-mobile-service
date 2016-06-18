/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: year.cc
 */

#include "include/month.h"
#include "include/year.h"

namespace time_stamper {

Year::Year()
: interface::Year(),
  identifier_(0),
  month_list_() {
}


Year::~Year() {
}


void Year::addDate(const UnsignedIntegerType year_id,
                   const UnsignedIntegerType month_id,
                   const UnsignedIntegerType week_id,
                   const UnsignedIntegerType day_id) {
  Month designated_month(month_id);

  identifier_ = year_id;
  month_list_.push_back(designated_month);
}


MonthList Year::getMonthList() const {
  return month_list_;
}


UnsignedIntegerType Year::getYear() const {
  return identifier_;
}

}  // namespace time_stamper
