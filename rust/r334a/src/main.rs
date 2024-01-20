fn main() {
    proconio::input! {
        b: i32,
        g: i32,
    }
    if b > g {
        println!("Bat");
    } else {
        println!("Glove");
    }
}
