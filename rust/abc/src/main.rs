use proconio::input;

fn main() {
    input! {
        n: usize,
        d: [i64; n-1],
    }

    let mut accumatted_distances: Vec<i64> = vec![0; n];
    for i in 0..(n - 1) {
        accumatted_distances[i + 1] = accumatted_distances[i] + d[i];
    }
    for i in 1..n {
        for j in (1 + i)..=n {
            let distance = accumatted_distances[j - 1] - accumatted_distances[i - 1];
            print!("{} ", distance);
        }
        println!("")
    }
}
