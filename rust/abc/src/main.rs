use proconio::input;
//use proconio::marker::Chars;

fn main() {
    input! {
        x: u64,
        y: u64,
    }
    let month = (x + y) % 12;
    if month == 0 {
        println!("12");
    } else {
        println!("{}", month);
    }
}
