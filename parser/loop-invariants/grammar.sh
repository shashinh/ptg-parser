#!/bin/bash

java -jar ../../antlr-4.9.2-complete.jar -package PTG -Dlanguage=Cpp -no-listener -visitor PTG.g4
