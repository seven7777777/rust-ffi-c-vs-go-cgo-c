package main

// #include "./lib/cat.h"
import "C"
import (
	"reflect"
	"unsafe"
)

func main(){
	key:="fdasfasfasfiaosfjasfjdasjfkd"
	var cValLen C.size_t
	var cKey    = byteToChar([]byte(key))
	for i:=0;i<1000000;i++{
	_=C.echo(cKey,C.size_t(len(key)), &cValLen)
	}
	
}

// charToByte converts a *C.char to a byte slice.
func charToByte(data *C.char, len C.size_t) []byte {
	var value []byte
	sH := (*reflect.SliceHeader)(unsafe.Pointer(&value))
	sH.Cap, sH.Len, sH.Data = int(len), int(len), uintptr(unsafe.Pointer(data))
	return value
}

// byteToChar returns *C.char from byte slice.
func byteToChar(b []byte) *C.char {
	var c *C.char
	if len(b) > 0 {
		c = (*C.char)(unsafe.Pointer(&b[0]))
	}
	return c
}
