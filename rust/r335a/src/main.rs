fn main() {
    proconio::input! {
        s: String,
    }
    let mut text: String = s;
    if let Some(_last_char) = text.pop() {
        text.push('4');
    } else {
        println!("{}", text);
        return;
    }

    println!("{}", text);
}
