# rust-call-c-and-go-call-c
一个简单的rust ffi和go cgo性能对比
<br>1.调用一个c动态库中的echo函数：char* echo(const char* name, size_t keylen, size_t* vallen)
<br>2.每个实现调用接口1百万次，测试结果：
<br>=====run cmain call clib=====
<br>real    0m0.052s
<br>user    0m0.026s
<br>sys     0m0.026s
<br>=====run rmain call clib=====
<br>real    0m0.050s
<br>user    0m0.027s
<br>sys     0m0.023s
<br>=====run gmain call clib=====
<br>real    0m0.146s
<br>user    0m0.118s
<br>sys     0m0.029s

<br>结论：单从接口ffi/cgo的单向(foreign->c)调用的性能来看，ffi是cgo的三倍左右
