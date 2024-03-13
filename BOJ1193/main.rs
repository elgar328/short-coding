fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let n = buf.trim().parse::<u32>().unwrap();
    let mut count: u32 = 0;
    let mut line: u32 = 0;
    while count < n {
        line += 1;
        count += line;
    }
    if line % 2 == 1 {
        println!("{}/{}", 1 + count - n, line + n - count);
    } else {
        println!("{}/{}", line + n - count, 1 + count - n);
    }
}
