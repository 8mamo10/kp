use std::cmp::min;

fn main() {
    proconio::input! {
        n: usize,
    }

    let mut s: Vec<Vec<char>> = Vec::with_capacity(n);
    for _ in 0..n {
        proconio::input! {
            row: String,
        }
        s.push(row.chars().collect());
    }

    let mut t: Vec<Vec<char>> = Vec::with_capacity(n);
    for _ in 0..n {
        proconio::input! {
            row: String,
        }
        t.push(row.chars().collect());
    }

    let mut min_ops = std::usize::MAX;
    let mut current_s = s;

    for op in 0..4 {
        let mut diff_count = 0;
        for i in 0..n {
            for j in 0..n {
                if current_s[i][j] != t[i][j] {
                    diff_count += 1;
                }
            }
        }

        min_ops = min(min_ops, diff_count + op);

        let mut next_s = vec![vec![' '; n]; n];
        for i in 0..n {
            for j in 0..n {
                next_s[j][n - 1 - i] = current_s[i][j];
            }
        }
        current_s = next_s;
    }
    println!("{}", min_ops);
}
