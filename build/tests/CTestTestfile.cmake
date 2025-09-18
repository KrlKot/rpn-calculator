# CMake generated Testfile for 
# Source directory: /home/kirill/rpn_calculator/tests
# Build directory: /home/kirill/rpn_calculator/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[rpn_tests]=] "/home/kirill/rpn_calculator/build/tests/rpn_tests")
set_tests_properties([=[rpn_tests]=] PROPERTIES  _BACKTRACE_TRIPLES "/home/kirill/rpn_calculator/tests/CMakeLists.txt;11;add_test;/home/kirill/rpn_calculator/tests/CMakeLists.txt;0;")
subdirs("../_deps/googletest-build")
