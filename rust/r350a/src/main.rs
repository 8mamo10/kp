fn main() {
    proconio::input! {
        s: String,
    }
    let x = s[3..].parse::<i32>().unwrap();
    if x == 316 {
        println!("No");
        return;
    }
    if x < 1 || 349 < x {
        println!("No");
        return;
    }
    println!("Yes");
}
