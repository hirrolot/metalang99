#!/bin/bash

doxygen
cd sphinx
sphinx-build -b html . ../docs
