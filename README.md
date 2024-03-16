# kp

## rust

```
$ curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh

$ rustup --version
rustup 1.26.0 (5af9b9484 2023-04-05)
info: This is the version for the rustup toolchain manager, not the rustc compiler.
info: The currently active `rustc` version is `rustc 1.75.0 (82e1608df 2023-12-21)`

$ rustc --version
rustc 1.75.0 (82e1608df 2023-12-21)

$ cargo --version
cargo 1.75.0 (1d8b05cdd 2023-11-20)

$ cargo new r333a
$ cargo run
```

## c++

```
export SDK_ROOT=`xcrun --sdk macosx --show-sdk-path`
export LIBRARY_PATH="${SDK_ROOT}/usr/lib"

$ sudo ln -s /opt/homebrew/bin/g++-13 /usr/local/bin/g++
$ sudo ln -s /opt/homebrew/bin/gcc-13 /usr/local/bin/gcc

# includePath
/Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include
/opt/homebrew/Cellar/gcc/13.2.0/include/c++/13/aarch64-apple-darwin21/bits/**

$ g++ a.cpp -Wall -I../ac-library -I../util --sysroot=${SDK_ROOT}
```
