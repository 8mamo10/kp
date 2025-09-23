use proconio::input;
use proconio::marker::Chars;

fn main() {
    input! {
        n: usize,
        a: usize,
        b: usize,
        s: Chars,
    }
    for i in 0..(n - a - b) {
        print!("{}", s[a + i]);
    }
    println!();
}
