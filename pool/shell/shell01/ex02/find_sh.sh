#!/bin/bash

find . -type f -name "*.sh" -print0 | xargs -0 basename -a -s ".sh"
