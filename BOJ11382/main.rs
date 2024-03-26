fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    println!(
        "{}",
        buf.split_whitespace()
            .map(|s| s.parse::<u64>().unwrap())
            .sum::<u64>()
    );
}
