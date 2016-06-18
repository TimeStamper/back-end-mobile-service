/**
 * Copyright 2015 Erik Ahlberg
 * Created: Jan 17, 2016
 *  Author: erik
 *    File: month.h
 */

#ifndef REGISTRY_BUILDING_BLOCKS_MONTH_INCLUDE_MONTH_H_
#define REGISTRY_BUILDING_BLOCKS_MONTH_INCLUDE_MONTH_H_

#include "include/month_interface.h"
#include "include/time_stamper_types.h"

namespace time_stamper {

class Month : public interface::Month {
 public:
  /**
   * \brief Parameterized constructor.
   *
   * \param designated_identifier Identifier number for the to-be-created month object.
   */
  explicit Month(const UnsignedIntegerType designated_identifier);

  /**
   * \brief Copy constructor.
   *
   * \param Rhs The object to be copied from.
   */
  Month(const Month& Rhs);

  /**
   * \brief destructor.
   */
  virtual ~Month();

  /**
   * \brief Assignment operator.
   *
   * \param Rhs The assignee.
   * \return Reference to this object.
   */
  Month& operator =(const Month& Rhs);

 private:
  UnsignedIntegerType identifier_;

  Month();
};

}  // namespace time_stamper

#endif  // REGISTRY_BUILDING_BLOCKS_MONTH_INCLUDE_MONTH_H_
