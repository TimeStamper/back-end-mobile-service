/**
 * Created: 2 aug. 2015
 *  Author: Erik
 *    File: stamp.h
 */

#ifndef STAMP_INCLUDE_STAMP_H_
#define STAMP_INCLUDE_STAMP_H_

#include "stamp_interface.h"

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
   * \brief destructor.
   */
  virtual ~Stamp();

private:

  Stamp(const Stamp&);

  Stamp& operator =(const Stamp&);
};

} // namespace time_stamper

#endif // STAMP_INCLUDE_STAMP_H_
