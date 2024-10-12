![Main Branch](https://github.com/Classifiedgiant/cpp-base-project/actions/workflows/cmake-multi-platform-build-and-test.yml/badge.svg)
![Main Branch](https://github.com/Classifiedgiant/cpp-base-project/actions/workflows/bump-version.yml/badge.svg)
![Main Branch](https://github.com/Classifiedgiant/cpp-base-project/actions/workflows/create-release.yml/badge.svg)

## New changes
* Install Vcpkg on the dev machine [VCPKG docs](https://learn.microsoft.com/en-us/vcpkg/get_started/overview)
```cpp
vcpkg new --application
vcpkg add port doctest

```


# cpp-base-project-vcpkg

Base project for cpp projects that uses [CMake](https://cmake.org/). This project uses [vcpkg](https://vcpkg.io/en/) for it dependency packages and provides customisable build pipelines from within the `.github` folder.

CMakeLists files have been provided for the basic framework to quickly begin building applications rather than project setup. [Doctest](https://github.com/doctest/doctest) has been already added as a dependency and integreated to run tests when builds occur and is ready to begin usage.

[Github Actions](https://github.com/features/actions) have already been provided for CI/CD basics and test build on varying platforms. A manual tagging release github action has also been provided to allow for packaging of your cpp application for various platforms.

`.clang-format` and `.clang-tidy` files have been provided for easy integration. `.clang-tidy` has had all reasonable checks turned on. Please note `.clang-tidy` has been moved to the `src` folder as clang-tidy was very noisy interacting with `Doctest` in the test folder.

## Prerequisites

* Install Visual Studio (for Windows MSVC), GCC on Linux, and Xcode for mac
* Install CMake on your machine (Add to PATH)
* Seteup Vcpkg on your machine [https://learn.microsoft.com/en-us/vcpkg/get_started/overview](https://learn.microsoft.com/en-us/vcpkg/get_started/overview)


## Setup Conan for building
* Create a new manifest
   * `vcpkg new --application`
* Add new package
   * `vcpkg add port fmt`
* Generate CMake project
   * `cmake -S . -B ./build/ -G <selected_generator>`
   * `cmake --build ./build/`

## Package Artifact
* Generate the project as before
   * `cpack --config .\build\CPackConfig.cmake`
