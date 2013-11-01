/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on Nov 1, 2013, 4:27:18 PM
 */

#include "newtestclass.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

#include <string>
using namespace std;

bool isPalindrome(string str);

void newtestclass::testIsPalindrome_01() {
    string str = "hello";
    bool result = isPalindrome(str);
    CPPUNIT_ASSERT_MESSAGE("str: hello", !result);
}

void newtestclass::testIsPalindrome_02() {
    string str = "";
    bool result = isPalindrome(str);
    CPPUNIT_ASSERT_MESSAGE("str: ", !result);
}

void newtestclass::testIsPalindrome_03() {
    string str = "helleh";
    bool result = isPalindrome(str);
    CPPUNIT_ASSERT_MESSAGE("str: helleh", result);
}

void newtestclass::testIsPalindrome_04() {
    string str = "able was I ere I saw Elba";
    bool result = isPalindrome(str);
    CPPUNIT_ASSERT_MESSAGE("str: able was I ere I saw Elba", result);
}

void newtestclass::testIsPalindrome_05() {
    string str = "...";
    bool result = isPalindrome(str);
    CPPUNIT_ASSERT_MESSAGE("str: ...", !result);
}
