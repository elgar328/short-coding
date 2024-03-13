fn main() {
    let mut vec: Vec<Vec<i32>> = std::io::stdin()
        .lines()
        .skip(1)
        .map(|s| {
            s.unwrap()
                .split_whitespace()
                .flat_map(|s| s.parse())
                .collect()
        })
        .collect();
    vec.sort_unstable_by_key(|s| (s[0], s[1]));
    println!(
        "{}",
        vec.iter()
            .map(|v| format!("{} {}", v[0], v[1]))
            .collect::<Vec<_>>()
            .join("\n")
    );
}
