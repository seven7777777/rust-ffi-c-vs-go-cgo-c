# rust-ffi-c-vs-go-cgo-c
一个简单的rust ffi和go cgo性能对比
<br>版本：
<br>rustc 1.43.0 (4fb7144ed 2020-04-20)
<br>go version go1.13.9 linux/amd64
<br>测试方法：
<br>1.调用一个c动态库中的echo函数：char* echo(const char* name, size_t keylen, size_t* vallen)
<br>2.每个实现调用接口1百万次，通过time计时，测试结果：
<br>c调用c动态链接库
<br>=====run cmain call clib=====
<br>real    0m0.052s
<br>user    0m0.026s
<br>sys     0m0.026s
<br>rust ffi调用c动态链接库
<br>=====run rmain call clib=====
<br>real    0m0.050s
<br>user    0m0.027s
<br>sys     0m0.023s
<br>go cgo调用c动态链接库
<br>=====run gmain call clib=====
<br>real    0m0.146s
<br>user    0m0.118s
<br>sys     0m0.029s
<br>结论：单从接口ffi/cgo的单向(foreign->c)调用的性能来看：1.ffi是cgo的三倍左右 2.ffi方式的性能接近c的原生调用性能。
