fn main() {
    proconio::input! {
        d: u32,
    }
    for i in (1..d).filter(|&x| x % 2 == 0) {
        println!("{}", i);
    }
}
