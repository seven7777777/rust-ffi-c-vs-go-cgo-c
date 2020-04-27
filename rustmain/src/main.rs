extern crate libc;
use libc::size_t;
#[link(name = "comparetest")]
extern {
    fn echo(key: *const u8, keylen: size_t, vallen: *mut size_t) -> *const u8;
}
fn main() {
    let key ="fdasfasfasfiaosfjasfjdasjfkd";
    let ikey = key.as_bytes().as_ptr() as *const u8;
    let mut vallen:size_t = 0;
    for _x in  0..1000000{
	let _ret = unsafe{echo(ikey, key.len(), &mut vallen)};
    }
}
