use proconio::input;

fn main() {
    input! {
        n: usize,
        q: usize,
        x: [usize; q],
    }
    //print!("{} {} {:?}", n, q, x);
    let mut box_count = vec![0; n + 1];
    for i in 0..q {
        if x[i] != 0 {
            print!("{} ", x[i]);
            box_count[x[i]] += 1;
            continue;
        }
        let mut min_count = usize::MAX;
        let mut min_box = usize::MAX;
        for j in 1..=n {
            if box_count[j] < min_count {
                min_count = box_count[j];
                min_box = j;
            }
        }
        print!("{} ", min_box);
        box_count[min_box] += 1;
    }
    println!("");
}
