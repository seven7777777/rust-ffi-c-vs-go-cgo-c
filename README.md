# rust-call-c-and-go-call-c
一个简单的rust ffi和go cgo性能对比
1.调用一个c动态库中的echo函数：char* echo(const char* name, size_t keylen, size_t* vallen)
<br>2.每个实现调用接口1百万次，测试结果：
<br>=====run cmain call clib=====
real    0m0.052s
user    0m0.026s
sys     0m0.026s
=====run rmain call clib=====
real    0m0.050s
user    0m0.027s
sys     0m0.023s
=====run gmain call clib=====
real    0m0.146s
user    0m0.118s
sys     0m0.029s

