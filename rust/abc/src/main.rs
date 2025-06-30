use proconio::input;

fn main() {
    input! {
        n: usize,
        t: String,
        a: String,
    }

    let t_chars: Vec<char> = t.chars().collect();
    let a_chars: Vec<char> = a.chars().collect();

    for i in 0..n {
        if t_chars[i] == 'o' && a_chars[i] == 'o' {
            println!("Yes");
            return;
        }
    }
    println!("No");
}
