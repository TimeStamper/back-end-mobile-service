/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jun 17, 2016
 *  Author: erik
 *    File: calender_types.h
 */


#ifndef CORE_TYPES_INCLUDE_CALENDER_TYPES_H_
#define CORE_TYPES_INCLUDE_CALENDER_TYPES_H_

#include <vector>
#include "boost/date_time/gregorian/gregorian.hpp"

namespace time_stamper {

/**
 * Defines the <b>Gregorian</b> date type used to specify calender entries.
 */
typedef boost::gregorian::date GregorianDate;

}  // namespace time_stamper

#endif  // CORE_TYPES_INCLUDE_CALENDER_TYPES_H_
