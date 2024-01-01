const fn = async (n) => {
  await new Promise((res) => setTimeout(res, 100));
  return n * n;
};

var timeLimit = function (fn, t) {
  const timeout = (t) => {
    setTimeout(() => {
      return Promise.reject("Time Limit Exceeded");
    }, t);
  };
  console.log("123");
  (async function (...args) {
    console.log(await Promise.race([fn, timeout(t)]));
  })();
};
timeLimit(fn(5), 10000);
