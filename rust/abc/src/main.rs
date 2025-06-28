use std::collections::HashSet;

use proconio::input;

fn main() {
    input! {
        n: usize,
        a: [i64; n],
    }

    let mut unique_elements: HashSet<i64> = HashSet::new();
    for x in a {
        unique_elements.insert(x);
    }
    let mut sorted_unique_elements: Vec<i64> = unique_elements.iter().cloned().collect();
    sorted_unique_elements.sort();
    println!("{} ", sorted_unique_elements.len());
    let output = sorted_unique_elements
        .iter()
        .map(|x| x.to_string())
        .collect::<Vec<String>>()
        .join(" ");
    println!("{}", output);
}
