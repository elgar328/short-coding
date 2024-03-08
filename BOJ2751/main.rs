fn main() {
    let mut num = std::io::stdin()
        .lines()
        .skip(1)
        .flat_map(|s| s.as_ref().unwrap().trim().parse::<i32>())
        .collect::<Vec<i32>>();
    num.sort_unstable();
    println!(
        "{}",
        num.iter()
            .map(|s| s.to_string())
            .collect::<Vec<_>>()
            .join("\n")
    );
}
