use proconio::marker::Usize1;

fn main() {
    proconio::input! {
    n: usize,
    q: usize,
    t:[Usize1;q]
    }
    let mut val = vec![true; n];
    for v in t {
        val[v] = !val[v];
    }
    let ans: usize = val.iter().filter(|&&x| x).count();
    println!("{}", ans);
}
