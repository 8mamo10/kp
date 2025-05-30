use std::collections::HashSet;

fn main() {
    proconio::input! {
        s: String,
    }

    let mut s_chars: HashSet<char> = HashSet::new();
    for c in s.chars() {
        s_chars.insert(c);
    }

    let alphabet: &str = "abcdefghijklmnopqrstuvwxyz";
    for a in alphabet.chars() {
        if !s_chars.contains(&a) {
            println!("{}", a);
            return;
        }
    }
}
