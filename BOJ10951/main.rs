fn main() {
    std::io::stdin()
        .lines()
        .map(|l| {
            l.unwrap()
                .split_whitespace()
                .flat_map(|s| s.parse::<u32>())
                .sum()
        })
        .for_each(|n: u32| println!("{n}"));
}
