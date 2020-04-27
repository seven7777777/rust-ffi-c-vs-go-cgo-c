#scl enable devtoolset-2 bash
echo =====buildl c lib=======
cd lib
make
cp libcomparetest.so /lib64/
cd ..

echo =====build gomain======
CGO_LDFLAGS=" -lcomparetest" go build -o gomain ./cgo.go

echo =====build cmain=======
gcc -o cmain c.c  -lcomparetest

echo =====build rustmain=====
cd ./rustmain
cargo build --release
mv ./target/release/rmain ../
cd ..


echo =====run cmain call clib=====
time ./cmain
echo =====run rmain call clib=====
time ./rmain
echo =====run gmain call clib=====
time ./gomain
