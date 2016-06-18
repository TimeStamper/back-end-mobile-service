/**
 * Copyright 2015 Erik Ahlberg
 * Created: 2 aug. 2015
 *  Author: Erik
 *    File: stamp_test.cc
 */

#include "gtest/gtest.h"
#include "include/stamp.h"

namespace time_stamper {

namespace development_test {

/**
 * \brief Fixture used for testing <b>Stamp</b> module.
 */
class StampFixture : public ::testing::Test {
 protected:
  Stamp stamp_;

  /**
   * \brief Default constructor.
   */
  StampFixture();

  /**
   * \brief Destructor.
   */
  virtual ~StampFixture();
};


StampFixture::StampFixture()
: stamp_() {
}


StampFixture::~StampFixture() {
}


TEST_F(StampFixture,
       testThatDeepCopyConstructionIsDoneCorrectly) {
  // Test setup

  // Execute
//  const Stamp stamp_copy(stamp_);

  // Verify
  // TODO(erik): Update this test. For now it is left empty since it is not
  //              yet known exactly how to observe all the data members.
  ASSERT_TRUE(true);
}


TEST_F(StampFixture,
       testThatDeepAssignmentIsDoneCorrectly) {
  // Test setup

  // Execute
  Stamp stamp_assignment;
//  stamp_assignment = stamp_;

  // Verify
  // TODO(erik): Update this test. For now it is left empty since it is not
  //             yet known exactly how to observe all the data members.
  ASSERT_TRUE(true);
}

}  // namespace development_test

}  // namespace time_stamper
