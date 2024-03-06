fn main() {
    const N: usize = 10000;
    let mut self_num = [true; N + 1];
    let mut next_idx;
    for i in 1..self_num.len() {
        if self_num[i] {
            println!("{}", i);
        }
        next_idx = d(i);
        if next_idx < self_num.len() {
            self_num[next_idx] = false;
        }
    }
}

fn d(mut n: usize) -> usize {
    let mut out = n;
    while n != 0 {
        out += n % 10;
        n /= 10;
    }
    out
}
