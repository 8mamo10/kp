use proconio::input;
//use proconio::marker::Chars;

fn main() {
    input! {
        _n: usize,
        s: String,

    }
    if s.ends_with("tea") {
        println!("Yes");
    } else {
        println!("No");
    }
}
