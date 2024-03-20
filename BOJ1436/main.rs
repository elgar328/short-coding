fn main() {
    let n: u32 = std::io::stdin()
        .lines()
        .next()
        .unwrap()
        .unwrap()
        .parse()
        .unwrap();
    let mut c = 0;
    for i in 666_u32.. {
        if a(i) {
            c += 1;
        }
        if n == c {
            println!("{}", i);
            return ();
        }
    }
}
fn a(mut n: u32) -> bool {
    while n > 665 {
        if n % 1000 == 666 {
            return true;
        }
        n /= 10;
    }
    false
}
