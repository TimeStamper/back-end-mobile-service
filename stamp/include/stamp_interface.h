/**
 * Copyright 2015 Erik Ahlberg
 * Created: 2 aug. 2015
 *  Author: Erik
 *    File: stamp_interface.h
 */


#ifndef STAMP_INCLUDE_STAMP_INTERFACE_H_
#define STAMP_INCLUDE_STAMP_INTERFACE_H_

#include "include/stamp_types.h"
#include "include/time_stamper_types.h"

namespace time_stamper {

namespace interface {

/**
 * @brief Contains the time stamp tuple.
 *
 * Handles the check in and check out time stamping service, i.e. both the
 * storing of respective values as well as the retrieval of them. In addition,
 * the module also provides the duration of a stamp.
 */
class Stamp {
 public:
  /**
   * @brief Destructor.
   */
  virtual ~Stamp() { }

  /**
   * @brief Stamps the check in time.
   *
   * Sets the check in time to the local system time at the run time call of
   * this method.
   */
  virtual void checkIn() = 0;

  /**
   * @brief Stamps the check out time.
   *
   * Sets the check out time to the local system time at the run time call of
   * this method.
   */
  virtual void checkOut() = 0;

  /**
   * @brief Provides access to the check in stamp.
   *
   * @return Constant reference corresponding to the time stamp.
   */
  virtual const TimeStamp& getCheckInTime() const = 0;

  /**
   * @brief Provides access to the check out stamp.
   *
   * @return Constant reference corresponding to the time stamp.
   */
  virtual const TimeStamp& getCheckOutTime() const = 0;

  /**
   * @brief Retrieves the duration of the current time stamp.
   *
   * @return The calculated result of the current time stamp.
   */
  virtual StampDuration getDuration() const = 0;

  /**
   * @brief Returns the active status of this object.
   *
   * @return Boolean value corresponding to the active status.
   */
  virtual BooleanType isActive() const = 0;
};

}  // namespace interface

}  // namespace time_stamper

#endif  // STAMP_INCLUDE_STAMP_INTERFACE_H_
