use proconio::input;

fn main() {
    input! {
        n: usize,
        mut a: [i64; n]
    }
    a.sort();
    let mut max_x = 0;
    for x_candidate in (0..=n).rev() {
        if x_candidate == 0 {
            max_x = 0;
            break;
        }
        if a[n - x_candidate] >= x_candidate as i64 {
            max_x = x_candidate;
            break;
        }
    }
    println!("{}", max_x);
}
