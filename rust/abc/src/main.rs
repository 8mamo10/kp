use proconio::input;
use proconio::marker::Chars;

fn main() {
    input! {
        s: Chars,
    }

    let mut t: Vec<char> = s.clone();

    let mut has_found_first_dot_in_section = false;

    for i in 0..s.len() {
        if s[i] == '#' {
            has_found_first_dot_in_section = false;
        } else {
            if !has_found_first_dot_in_section {
                t[i] = 'o';
                has_found_first_dot_in_section = true;
            } else {
                t[i] = '.';
            }
        }
    }
    let result_string: String = t.iter().collect();
    println!("{}", result_string);
}
