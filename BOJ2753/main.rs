fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let year: i32 = buf.trim().parse().unwrap();
    if (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0) {
        println!("1");
    } else {
        println!("0");
    }
}
