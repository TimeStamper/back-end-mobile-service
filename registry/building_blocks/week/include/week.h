/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: week.h
 */

#ifndef REGISTRY_BUILDING_BLOCKS_WEEK_INCLUDE_WEEK_H_
#define REGISTRY_BUILDING_BLOCKS_WEEK_INCLUDE_WEEK_H_

#include "include/week_interface.h"

namespace time_stamper {

/**
 * \brief Definition of concrete class implementation.
 */
class Week : public interface::Week {
 public:
  /**
   * \brief Default constructor.
   */
  Week();

  /**
   * \brief destructor.
   */
  virtual ~Week();

 private:
  Week(const Week&);

  Week& operator =(const Week&);
};

}  // namespace time_stamper

#endif  // REGISTRY_BUILDING_BLOCKS_WEEK_INCLUDE_WEEK_H_
