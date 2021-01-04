#!/bin/bash

doxygen
sphinx-build -b html sphinx docs
