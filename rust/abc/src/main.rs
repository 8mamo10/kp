use proconio::input;

fn main() {
    input! {
        n: usize,
        q: usize,
    }

    let mut a: Vec<i64> = (1..=n as i64).collect();
    let mut head_offset: usize = 0;

    for _ in 0..q {
        input! {
            query_type: u8,
        }
        match query_type {
            1 => {
                input! {
                    p: usize,
                    x: i64,
                }
                let physical_idx = (p - 1 + head_offset) % n;
                a[physical_idx] = x;
            }
            2 => {
                input! {
                    p: usize,
                }
                let physical_idx = (p - 1 + head_offset) % n;
                println!("{}", a[physical_idx]);
            }
            3 => {
                input! {
                    k: usize,
                }
                head_offset = (head_offset + k) % n;
            }
            _ => panic!("Unexpected query type: {}", query_type),
        }
    }
}
