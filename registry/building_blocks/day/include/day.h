/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: day.h
 */

#ifndef REGISTRY_BUILDING_BLOCKS_DAY_INCLUDE_DAY_H_
#define REGISTRY_BUILDING_BLOCKS_DAY_INCLUDE_DAY_H_

#include "include/day_interface.h"

namespace time_stamper {

/**
 * \brief Definition of concrete class implementation.
 */
class Day : public interface::Day {
 public:
  /**
   * \brief Default constructor.
   */
  Day();

  /**
   * \brief destructor.
   */
  virtual ~Day();

 private:
  Day(const Day&);

  Day& operator =(const Day&);
};

}  // namespace time_stamper

#endif  // REGISTRY_BUILDING_BLOCKS_DAY_INCLUDE_DAY_H_
