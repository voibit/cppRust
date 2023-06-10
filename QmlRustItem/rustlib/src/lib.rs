use cxx::{CxxVector};
#[cxx::bridge]
mod ffi {
    extern "Rust" {
        fn rust_function() -> i64;
        fn rust_string(str: &str) -> String;
        fn rust_array(array : &CxxVector<f64>) -> f64;
    }
}

fn rust_function() -> i64 {
    42
}

fn rust_string(str: &str) -> String {
    String::from("Hello from rust: ".to_owned() + str)
}

fn rust_array(array : &CxxVector<f64>) -> f64 {
    let mut sum = 0f64;
    for a in array.iter() {
        sum += a;
    }
    sum
}