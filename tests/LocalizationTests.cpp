#include <CppUTest/TestHarness.h>
#include "Localization.h"

TEST_GROUP(Localization) {
  Localization localization;
};

TEST(Localization, Esperanto) {
  
  STRCMP_EQUAL("Hello world!", localization.GetGreeting(ENGLISH));
}  