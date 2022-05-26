#!/bin/bash

java -jar ../../antlr-4.9.2-complete.jar -Dlanguage=Cpp -no-listener -visitor CI.g4
