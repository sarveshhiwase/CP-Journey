var sad = function () {
  return "sad";
};

function add(a, b) {
  return a + b;
}

var name = "Buddy";

console.log("Hello There, + name");

// what are closures

function binarysearch(arr, n, k) {
  var low = 0;
  var high = n - 1;
  var mid;
  while (low <= high) {
    mid = (low + high) / 2;
    if (arr[mid] == k) {
      return mid;
    } else if (arr[mid] > k) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

function factorial(x) {
  if (x <= 1) {
    return 1;
  }
  return x * factorial(x - 1);
}

function factorialiterative(a) {
  var fact = 1;
  while (a) {
    fact *= a;
    a -= 1;
  }
  return fact;
}

var size = 1e5;
var primes = new Array(size).fill(1);

function seive() {
  for (var i = 2; i * i <= Math.sqrt(size); i++) {
    if (primes[i]) {
      for (var j = i * i; j <= size; j += i) {
        primes[j] = 0;
      }
    }
  }
}
console.time("Prime Calculation");
seive();
console.timeEnd("Prime Calculation");
