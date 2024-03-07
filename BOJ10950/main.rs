fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let n: u32 = buf.trim().parse().unwrap();
    for _ in 0..n {
        buf.clear();
        std::io::stdin().read_line(&mut buf).unwrap();
        println!(
            "{}",
            buf.split_whitespace()
                .flat_map(|s| s.parse::<i32>())
                .sum::<i32>()
        )
    }
}
