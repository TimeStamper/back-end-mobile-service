/**
 * Copyright 2015 Erik Ahlberg
 * Created: 2 aug. 2015
 *  Author: Erik
 *    File: stamp.h
 */

#ifndef STAMP_INCLUDE_STAMP_H_
#define STAMP_INCLUDE_STAMP_H_

#include "include/stamp_interface.h"
#include "boost/date_time/posix_time/posix_time_types.hpp"

namespace time_stamper {

/**
 * \brief Definition of concrete class implementation.
 */
class Stamp : public interface::Stamp {
 public:
  /**
   * \brief Default constructor.
   */
  Stamp();

  /**
   * \brief Copy constructor.
   *
   * \param Rhs The object to be copied from.
   */
  Stamp(const Stamp& Rhs);

  /**
   * \brief destructor.
   */
  virtual ~Stamp();

  /**
   * \brief Assignment operator.
   *
   * \param Rhs The object to be assigned from.
   * \return Reference to this newly assigned object.
   */
  virtual Stamp& operator =(const Stamp&);

  virtual void checkIn();

  virtual void checkOut();

 private:
  boost::posix_time::ptime* check_in_;
  boost::posix_time::ptime* check_out_;
};

}  // namespace time_stamper

#endif  // STAMP_INCLUDE_STAMP_H_
