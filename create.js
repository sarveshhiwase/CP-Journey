const axios = require("axios");

//url
// https://codeforces.com/api/problemset.problems?tags=binary+search
codeforces_url = (tags) =>
  `https://codeforces.com/api/problemset.problems?tags=${tags}`;

const getData = async (tag) => {
  try {
    const response = await axios.get(codeforces_url(tag));
    return response.data.result.problems;
  } catch (err) {
    console.log(err);
    return null;
  }
};

const getFilteredData = async () => {
  const problemData = await getData("sorting");
  if (problemData) {
    filteredproblems = [];
    problemData.forEach((el) => {
      if (el.rating >= 800 && el.rating <= 1200) {
        filteredproblems.push(el);
      }
    });
    filteredproblems.sort((a, b) => a.rating - b.rating);
    return filteredproblems;
  } else {
    return null;
  }
};

getFilteredData()
  .then((data) => {
    let i = 1;
    myarray = [];
    for (i = 1; i <= data.length; i++) {
      problemarray = [];
      problemarray.push(i);
      problemarray.push(data[i - 1].name);
      problemarray.push(String(data[i - 1].contestId));
      problemarray.push(data[i - 1].index);
      myarray.push(problemarray);
    }
    console.log(myarray);
  })
  .catch((err) => console.log(err));
