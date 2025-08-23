use proconio::input;

fn main() {
    input! {
        s: String,
        t: String,
    }

    let uppers = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    let s_chars: Vec<char> = s.chars().collect();

    for i in 1..s_chars.len() {
        if uppers.contains(s_chars[i]) {
            let a = s_chars[i - 1];
            if !t.contains(a) {
                println!("No");
                return;
            }
        }
    }
    println!("Yes");
}
