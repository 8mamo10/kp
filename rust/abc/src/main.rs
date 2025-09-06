use proconio::input;

fn main() {
    input! {
        s: String,
    }
    let mut is_processing: bool = false;
    let v: Vec<char> = s.chars().collect();
    for i in 0..v.len() {
        if v[i] == '#' {
            print!("{}", i + 1);
            if is_processing {
                println!();
                is_processing = false;
            } else {
                print!(",");
                is_processing = true
            }
        }
    }
}
