fn main() {
    println!(
        "{}",
        std::io::stdin()
            .lines()
            .map(|s| {
                s.as_ref()
                    .unwrap()
                    .split_whitespace()
                    .map(|x| x.parse::<u32>().unwrap())
                    .sum::<u32>()
                    .to_string()
            })
            .filter(|x| x != "0")
            .collect::<Vec<String>>()
            .join("\n")
    );
}
