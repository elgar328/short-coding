fn main() {
    let mut line = std::io::stdin()
        .lines()
        .skip(1)
        .flatten()
        .collect::<Vec<_>>();
    line.sort_by_key(|s| s.split_whitespace().next().unwrap().parse::<u32>().unwrap());
    println!("{}", line.join("\n"))
}
