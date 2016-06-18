/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: year_interface.h
 */


#ifndef REGISTRY_BUILDING_BLOCKS_YEAR_INCLUDE_YEAR_INTERFACE_H_
#define REGISTRY_BUILDING_BLOCKS_YEAR_INCLUDE_YEAR_INTERFACE_H_

#include <vector>
#include "include/time_stamper_types.h"
#include "include/month.h"

namespace time_stamper {

//! \brief Definition of list containing available months.
typedef std::vector<Month> MonthList;

namespace interface {

/**
 * \brief The largest building block of a <b>Calender</b>.
 *
 * Contains the properties and objects contained and defined for a calender year.
 */
class Year {
 public:
  /**
   * \brief Destructor.
   */
  virtual ~Year() = 0;

  /**
   * \brief Adds a date to the module.
   *
   * Adds the user specified date, i.e. the date corresponding to the values specified by the input
   * parameters. If the date already exists, nothing is done.
   *
   * \param year_id The year of the specified date.
   * \param month_id The month of the specified date.
   * \param week_id The week of the specified date.
   * \param day_id The day of the specified date.
   */
  virtual void addDate(const UnsignedIntegerType year_id,
                       const UnsignedIntegerType month_id,
                       const UnsignedIntegerType week_id,
                       const UnsignedIntegerType day_id) = 0;

  /**
   * \brief Retrieves the list of all months specified within this year.
   *
   * \return Vector containing the list of months.
   */
  virtual MonthList getMonthList() const = 0;

  /**
   * \brief Retrieves the current year.
   *
   * \return Integer corresponding to the year identifier value.
   */
  virtual UnsignedIntegerType getYear() const = 0;

 protected:
  /**
   * \brief Default constructor.
   */
  Year();

 private:
  Year(const Year&);

  Year& operator =(const Year&);
};


inline Year::~Year() { }


inline Year::Year() { }


}  // namespace interface

}  // namespace time_stamper

#endif  // REGISTRY_BUILDING_BLOCKS_YEAR_INCLUDE_YEAR_INTERFACE_H_
