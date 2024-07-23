cmake_minimum_required(VERSION 3.5.0)
project(EquationTest VERSION 0.1.0 LANGUAGES C CXX)
include(CTest)

# Добавляем библиотеку CTest
#find_package(CTest REQUIRED)

# Создаем директории для исходного кода и тестов
set(SOURCE_FILES main.cpp)
set(TEST_FILES Test1.cpp)

# Указываем, что мы хотим скомпилировать тесты
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
add_executable(test1 ${TEST_FILES})

# Связываем тесты с библиотеками, которые они используют
#target_link_libraries(test1 ...) # Замените ... на зависимости теста 1

# Указываем, что мы хотим запустить тесты

enable_testing()
add_test(NAME test1 COMMAND test1)

# Устанавливаем переменную CTEST_OUTPUT_ON_FAILURE, чтобы увидеть вывод тестов при неудачном завершении
set(CTEST_OUTPUT_ON_FAILURE ON)

#add_executable(EquationTest main.cpp)
#target_sources(EquationTest PRIVATE main.cpp)
#include(CTest)
#enable_testing()
#add_test(
#    NAME EquationTest
#    COMMAND EquationTest
#)

