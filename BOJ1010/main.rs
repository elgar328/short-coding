fn main() {
    print!(
        "{}",
        std::io::stdin()
            .lines()
            .skip(1)
            .flatten()
            .map(|l| {
                let mut i = l.split_whitespace();
                let a: u64 = i.next().unwrap().parse().unwrap();
                let b: u64 = i.next().unwrap().parse().unwrap();
                let c = comb(b, b - a);
                format!("{}\n", c)
            })
            .collect::<String>()
    );
}
fn comb(n: u64, r: u64) -> u64 {
    let (n, r) = if n > 2 * r { (n, n - r) } else { (n, r) };
    let mut c = 1;
    for i in 1..=r {
        c *= n + 1 - i;
        c /= i;
    }
    c
}
