fn main() {
    let alphabet: Vec<&str> = "c= c- dz= d- lj nj s= z=".split(" ").collect();
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let mut buf = buf.trim().to_string();
    for i in 0..alphabet.len() {
        buf = buf.replace(alphabet[i], " ");
    }
    println!("{}", buf.chars().count());
}
