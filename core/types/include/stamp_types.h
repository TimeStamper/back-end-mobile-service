/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jun 18, 2016
 *  Author: erik
 *    File: stamp_types.h
 */


#ifndef CORE_TYPES_INCLUDE_STAMP_TYPES_H_
#define CORE_TYPES_INCLUDE_STAMP_TYPES_H_

#include "boost/date_time/posix_time/posix_time_types.hpp"

namespace time_stamper {

typedef boost::posix_time::ptime TimeStamp;

typedef boost::posix_time::time_duration StampDuration;

}  // namespace time_stamper

#endif  // CORE_TYPES_INCLUDE_STAMP_TYPES_H_
