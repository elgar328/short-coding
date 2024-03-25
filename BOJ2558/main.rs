fn main() {
    println!(
        "{}",
        std::io::stdin()
            .lines()
            .flatten()
            .map(|s| s.trim().parse::<i32>().unwrap())
            .sum::<i32>()
    );
}
