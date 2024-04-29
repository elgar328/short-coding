fn main() {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).unwrap();
    let mut iter = buf.split_whitespace();
    let mut num1: Vec<char> = iter.next().unwrap().chars().collect();
    let mut num2: Vec<char> = iter.next().unwrap().chars().collect();
    let mut carry = 0;
    let mut sum: Vec<char> = Vec::new();

    loop {
        if let Some(val) = num1.pop() {
            carry += val.to_digit(10).unwrap() as i32;
        }
        if let Some(val) = num2.pop() {
            carry += val.to_digit(10).unwrap() as i32;
        }
        sum.push(std::char::from_digit((carry % 10) as u32, 10).unwrap());
        carry /= 10;
        if num1.is_empty() && num2.is_empty() && carry == 0 {
            break;
        }
    }
    let sum: String = sum.iter().rev().collect();
    println!("{}", sum);
}
