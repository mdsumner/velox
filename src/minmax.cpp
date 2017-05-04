#include <vector>
#include <algorithm>

using namespace std;

double minimum(vector<double> scores) {
  double minimum;
  size_t size = scores.size();

  sort(scores.begin(), scores.end());

  minimum = scores[0];
  return minimum;
}

double maximum(vector<double> scores) {
  double maximum;
  size_t size = scores.size();

  sort(scores.end(), scores.begin());

  maximum = scores[0];
  return maximum;
}
