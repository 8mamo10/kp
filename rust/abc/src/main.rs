use proconio::input;

fn main() {
    input! {
        n: usize,
        s: [String; n],
    }
    let mut dictionary = std::collections::HashMap::new();
    for i in 0..n {
        for j in 0..n {
            if i == j {
                continue;
            }
            let key = format!("{}{}", s[i], s[j]);
            dictionary.insert(key, true);
        }
    }
    print!("{}\n", dictionary.len())
}
