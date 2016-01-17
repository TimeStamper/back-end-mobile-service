/**
 * Copyright 2015 Erik Ahlberg
 * Created: 2 aug. 2015
 *  Author: Erik
 *    File: stamp_interface.h
 */


#ifndef STAMP_INCLUDE_STAMP_INTERFACE_H_
#define STAMP_INCLUDE_STAMP_INTERFACE_H_

namespace time_stamper {

namespace interface {

/**
 * \brief Summary description
 *
 * Optional: Detailed description
 */
class Stamp {
 public:
  /**
   * \brief Destructor.
   */
  virtual ~Stamp() { }

  /**
   * \brief Stamps the check in time.
   *
   * Sets the check in time to the local system time at the run time call of this method.
   */
  virtual void checkIn() = 0;

  /**
   * \brief Stamps the check out time.
   *
   * Sets the check out time to the local system time at the run time call of this method.
   */
  virtual void checkOut() = 0;
};

}  // namespace interface

}  // namespace time_stamper

#endif  // STAMP_INCLUDE_STAMP_INTERFACE_H_
