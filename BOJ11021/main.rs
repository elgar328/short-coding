fn main() {
    std::io::stdin()
        .lines()
        .skip(1)
        .map(|s| {
            s.unwrap()
                .split_whitespace()
                .flat_map(|x| x.parse::<u32>())
                .sum::<u32>()
        })
        .enumerate()
        .for_each(|(i, val)| println!("Case #{}: {}", i + 1, val));
}
