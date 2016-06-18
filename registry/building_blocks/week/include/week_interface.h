/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: week_interface.h
 */


#ifndef REGISTRY_BUILDING_BLOCKS_WEEK_INCLUDE_WEEK_INTERFACE_H_
#define REGISTRY_BUILDING_BLOCKS_WEEK_INCLUDE_WEEK_INTERFACE_H_

namespace time_stamper {

namespace interface {

/**
 * \brief <b>Calender</b> building block representing a week.
 *
 * Contains the properties and objects contained and defined for a calender week.
 */
class Week {
 public:
  /**
   * \brief Destructor.
   */
  virtual ~Week() = 0;

 protected:
  /**
   * \brief Default constructor.
   */
  Week();

 private:
  Week(const Week&);

  Week& operator =(const Week&);
};


inline Week::~Week() { }


inline Week::Week() { }

}  // namespace interface

}  // namespace time_stamper

#endif  // REGISTRY_BUILDING_BLOCKS_WEEK_INCLUDE_WEEK_INTERFACE_H_
