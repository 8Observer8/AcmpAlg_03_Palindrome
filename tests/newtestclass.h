/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on Nov 1, 2013, 4:27:17 PM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testIsPalindrome_01);
    CPPUNIT_TEST(testIsPalindrome_02);
    CPPUNIT_TEST(testIsPalindrome_03);
    CPPUNIT_TEST(testIsPalindrome_04);
    CPPUNIT_TEST(testIsPalindrome_05);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testIsPalindrome_01();
    void testIsPalindrome_02();
    void testIsPalindrome_03();
    void testIsPalindrome_04();
    void testIsPalindrome_05();
};

#endif	/* NEWTESTCLASS_H */

