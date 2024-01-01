use proconio::marker::Bytes;

fn main() {
    proconio::input! {
        s: Bytes,
        t: Bytes,
    }

    let s: Vec<_> = s.iter().map(|x| (x - 'A' as u8) as i32).collect();
    let t: Vec<_> = t.iter().map(|x| (x - 'A' as u8) as i32).collect();

    fn len(a: i32, b: i32) -> i32 {
        let diff = (a - b).abs();

        if diff == 1 || diff == 4 {
            return 1;
        }
        return 2;
    }

    if len(s[0], s[1]) == len(t[0], t[1]) {
        println!("Yes");
    } else {
        println!("No");
    }
}
