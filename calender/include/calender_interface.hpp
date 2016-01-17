/*
 * calender_interface.hpp
 *
 *  Created on: Oct 4, 2015
 *      Author: erik
 */

#ifndef CALENDER_INTERFACE_HPP_
#define CALENDER_INTERFACE_HPP_

namespace time_stamper {

namespace interface {

/**
 * \brief Summary description
 *
 * Optional: Detailed description
 */
class Calender {
 public:
  /**
   * \brief Destructor.
   */
  virtual ~Calender() { }

 private:
  Calender(const Calender&);

  Calender& operator =(const Calender&);
};


}  // namespace interface

}  // namespace time_stamper

#endif /* CALENDER_INTERFACE_HPP_ */
