#pragma once

#include <fuzzy/sentence.hh>
#include <fuzzy/costs.hh>

namespace fuzzy
{
  int   _edit_distance_char_nonempty(const char *s1, int n1, const char *s2, int n2);

  int   _edit_distance_char(const char *s1, int n1, const char *s2, int n2);

  float _edit_distance(const std::vector<unsigned> &thes, const Sentence &reals,
                       const std::vector<unsigned> &thep, const Tokens &realptok,
                       int n, const std::vector<const char*>& st, const std::vector<int>& sn,
                       const std::vector<float> &idf_penalty, float idf_weight,
                       const Costs&, float max_fuzziness);
}

#include <fuzzy/edit_distance.hxx>
