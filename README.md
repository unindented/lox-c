# Lox Interpreter (C)

Lox interpreter written in C, following Bob Nystrom's book [Crafting Interpreters](https://craftinginterpreters.com/).

## Setup

Make sure you have a recent version of CMake installed, and do the following:

```
git clone https://github.com/unindented/lox-c.git
cd lox-c
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
cd ..
```

## Build

```
cd build
cmake --build .
```

## Test

```
cd build
ctest
```

## Run

```
build/apps/loxapp
```

## Meta

- Code: `git clone https://github.com/unindented/lox-c.git`
- Home: <https://unindented.org/>

## Contributors

Daniel Perez Alvarez ([unindented@gmail.com](mailto:unindented@gmail.com))

## License

Copyright (c) 2020 Daniel Perez Alvarez ([unindented.org](https://unindented.org/)). This is free software, and may be redistributed under the terms specified in the `LICENSE.txt` file.
