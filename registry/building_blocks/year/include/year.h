/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: year.h
 */

#ifndef REGISTRY_BUILDING_BLOCKS_YEAR_INCLUDE_YEAR_H_
#define REGISTRY_BUILDING_BLOCKS_YEAR_INCLUDE_YEAR_H_

#include "include/year_interface.h"

namespace time_stamper {

/**
 * \brief Definition of concrete class implementation.
 */
class Year : public interface::Year {
 public:
  /**
   * \brief Default constructor.
   */
  Year();

  /**
   * \brief Copy constructor.
   *
   * \param Rhs The object to be copied from.
   */
  Year(const Year& Rhs);

  /**
   * \brief destructor.
   */
  virtual ~Year();

  /**
   * \brief Assignment operator.
   *
   * \param Rhs The assignee.
   * \return Reference to this object.
   */
  Year& operator =(const Year& Rhs);

  virtual void addDate(const UnsignedIntegerType year_id,
                       const UnsignedIntegerType month_id,
                       const UnsignedIntegerType week_id,
                       const UnsignedIntegerType day_id);

  virtual MonthList getMonthList() const;

  virtual UnsignedIntegerType getYear() const;

 private:
  UnsignedIntegerType identifier_;
  MonthList month_list_;
};

}  // namespace time_stamper

#endif  // REGISTRY_BUILDING_BLOCKS_YEAR_INCLUDE_YEAR_H_
