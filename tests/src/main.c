#include <core/logger.h>

#include "containers/freelist_tests.h"
#include "containers/hashtable_tests.h"
#include "memory/dynamic_allocator_tests.h"
#include "memory/linear_allocator_tests.h"
#include "parsers/kson_parser_tests.h"
#include "test_manager.h"

int main(void) {
    // Always initalize the test manager first.
    test_manager_init();

    // TODO: add test registrations here.
    kson_parser_register_tests();
    linear_allocator_register_tests();
    hashtable_register_tests();
    freelist_register_tests();
    dynamic_allocator_register_tests();

    KDEBUG("Starting tests...");

    // Execute tests
    test_manager_run_tests();

    return 0;
}
