/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: day_interface.h
 */


#ifndef REGISTRY_BUILDING_BLOCKS_DAY_INCLUDE_DAY_INTERFACE_H_
#define REGISTRY_BUILDING_BLOCKS_DAY_INCLUDE_DAY_INTERFACE_H_

namespace time_stamper {

namespace interface {

/**
 * \brief <b>Calender</b> building block representing a day.
 *
 * Contains the properties and objects contained and defined for a calender day.
 */
class Day {
 public:
  /**
   * \brief Destructor.
   */
  virtual ~Day() = 0;

 protected:
  /**
   * \brief Default constructor.
   */
  Day();

 private:
  Day(const Day&);

  Day& operator =(const Day&);
};


inline Day::~Day() { }


inline Day::Day() { }

}  // namespace interface

}  // namespace time_stamper

#endif  // REGISTRY_BUILDING_BLOCKS_DAY_INCLUDE_DAY_INTERFACE_H_
