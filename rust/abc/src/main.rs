use proconio::input;
//use proconio::marker::Chars;

fn main() {
    input! {
        n: usize,
        m: usize,
        mut a: [i64; n],
        b: [i64; m],
    }
    for i in 0..b.len() {
        for j in 0..a.len() {
            if a[j] == b[i] {
                a.remove(j);
                break;
            }
        }
    }
    for &val in a.iter() {
        print!("{} ", val);
    }
    println!()
}
