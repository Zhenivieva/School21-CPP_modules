#!/bin/bash

echo "----------------- Test integer -------------------------"
echo "./static_cast 0"
./static_cast 0
echo "./static_cast 130"
./static_cast 130
echo "./static_cast 78"
./static_cast 78
echo "./static_cast 7"
./static_cast 7
echo "./static_cast -2147483648"
./static_cast -2147483648
echo "./static_cast 2147483647"
./static_cast 2147483647
echo "./static_cast 3000000000"
./static_cast 3000000000
echo "----------------- Test char -------------------------"
echo "./static_cast a"
./static_cast a
echo "./static_cast Z"
./static_cast Z
echo "./static_cast '%'"
./static_cast '%'
echo "----------------- Test float -------------------------"
echo "./static_cast 42.0f"
./static_cast 42.0f
echo "./static_cast .0f"
./static_cast .0f
echo "./static_cast 0.0f"
./static_cast 0.0f
echo "./static_cast -4.2f"
./static_cast -4.2f
echo "./static_cast 4.2f"
./static_cast 4.2f
echo "./static_cast -inff"
./static_cast -inff
echo "./static_cast +inff"
./static_cast +inff
echo "./static_cast nanf"
./static_cast nanf
echo "./static_cast 3000000000000000000000000000000000000000000000000000000000000000000000000000.0f"
./static_cast 3000000000000000000000000000000000000000000000000000000000000000000000000000.0f
echo "----------------- Test double -------------------------"
echo "./static_cast nan"
./static_cast nan
echo "./static_cast -inf"
./static_cast -inf
echo "./static_cast +inf"
./static_cast +inf
echo "./static_cast .0"
./static_cast .0
echo "./static_cast 3000000000000000000000000000000000000000000000000000000000000000000000000000.0"
./static_cast 3000000000000000000000000000000000000000000000000000000000000000000000000000.0

