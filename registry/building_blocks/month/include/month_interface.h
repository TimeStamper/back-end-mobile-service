/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: month_interface.h
 */


#ifndef REGISTRY_BUILDING_BLOCKS_MONTH_INCLUDE_MONTH_INTERFACE_H_
#define REGISTRY_BUILDING_BLOCKS_MONTH_INCLUDE_MONTH_INTERFACE_H_

namespace time_stamper {

namespace interface {

/**
 * \brief <b>Calender</b> building block representing a month.
 *
 * Contains the properties and objects contained and defined for a calender month.
 */
class Month {
 public:
  /**
   * \brief Destructor.
   */
  virtual ~Month() = 0;

 protected:
  /**
   * \brief Default constructor.
   */
  Month();

 private:
  Month(const Month&);

  Month& operator =(const Month&);
};


inline Month::~Month() { }


inline Month::Month() { }

}  // namespace interface

}  // namespace time_stamper

#endif  // REGISTRY_BUILDING_BLOCKS_MONTH_INCLUDE_MONTH_INTERFACE_H_
