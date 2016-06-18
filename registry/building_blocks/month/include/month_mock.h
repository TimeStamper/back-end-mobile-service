/**
 * Copyright 2015 Erik Ahlberg
 * Created: May 29, 2016
 *  Author: erik
 *    File: month_mock.h
 */


#ifndef MONTH_MOCK_H_
#define MONTH_MOCK_H_

#include "gmock/gmock.h"


namespace time_stamper {

namespace mock {

class Month : public interface::Month {
};

} // namespace mock

} // namespace time_stamper

#endif  // MONTH_MOCK_H_
