#include <boost/test/unit_test.hpp>
#include <checkout_of_test_dependencies_make/Dummy.hpp>

using namespace checkout_of_test_dependencies_make;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    checkout_of_test_dependencies_make::DummyClass dummy;
    dummy.welcome();
}
