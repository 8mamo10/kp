fn main() {
    proconio::input! {
        t: String,
        u: String
    }
    let mut qustion_indeces: Vec<usize> = Vec::new();
    for (i, c) in t.chars().enumerate() {
        if c == '?' {
            qustion_indeces.push(i);
        }
    }
    let alphabets: Vec<char> = (b'a'..=b'z').map(|c| c as char).collect();
    //println!("{:?}", alphabets)
    for &a in &alphabets {
        for &b in &alphabets {
            for &c in &alphabets {
                for &d in &alphabets {
                    let mut s: Vec<char> = t.chars().collect();
                    s[qustion_indeces[0]] = a;
                    s[qustion_indeces[1]] = b;
                    s[qustion_indeces[2]] = c;
                    s[qustion_indeces[3]] = d;

                    let s2: String = s.into_iter().collect();
                    if s2.contains(&u) {
                        println!("{}", "Yes");
                        return;
                    }
                }
            }
        }
    }
    println!("No");
}
