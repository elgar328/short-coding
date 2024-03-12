fn main() {
    std::io::stdin()
        .lines()
        .skip(1)
        .enumerate()
        .for_each(|(i, s)| {
            let nums: Vec<u32> = s
                .unwrap()
                .split_whitespace()
                .flat_map(|x| x.parse::<u32>())
                .collect();
            println!(
                "Case #{}: {} + {} = {}",
                i + 1,
                nums[0],
                nums[1],
                nums[0] + nums[1]
            );
        });
}
