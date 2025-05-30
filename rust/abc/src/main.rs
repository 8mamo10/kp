use std::{collections::HashSet, vec};

fn main() {
    proconio::input! {
        n: usize,
        _m: usize,
        q: usize,
    }

    let mut all_access_granted: Vec<bool> = vec![false; n + 1];
    let mut spedific_access_granted: Vec<HashSet<usize>> = vec![HashSet::new(); n + 1];

    for _ in 0..q {
        proconio::input! {
            query_type: u8,
        }

        match query_type {
            1 => {
                proconio::input! {
                    x: usize,
                    y: usize
                }
                if !all_access_granted[x] {
                    spedific_access_granted[x].insert(y);
                }
            }
            2 => {
                proconio::input! {
                    x: usize
                }
                all_access_granted[x] = true;
            }
            3 => {
                proconio::input! {
                    x: usize,
                    y: usize,
                }
                if all_access_granted[x] || spedific_access_granted[x].contains(&y) {
                    println!("Yes");
                } else {
                    println!("No");
                }
            }
            _ => unreachable!(),
        }
    }
}
