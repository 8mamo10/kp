use proconio::input;

fn main() {
    input! {
        n: usize,
        l: usize,
        r: usize,
        s: String,
    }
    let s_chars: Vec<char> = s.chars().collect();
    for i in l..=r {
        if s_chars[i - 1] != 'o' {
            println!("No");
            return;
        }
    }
    println!("Yes");
}
