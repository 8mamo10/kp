use proconio::input;
//use proconio::marker::Chars;

fn main() {
    input! {
        s: String,
    }

    match s.as_str() {
        "red" => println!("SSS"),
        "blue" => println!("FFF"),
        "green" => println!("MMM"),
        _ => println!("Unknown"),
    }
}
