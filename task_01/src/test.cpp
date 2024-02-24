
#include <gtest/gtest.h>

#include "topology_sort.hpp"

TEST(SummanddsInArray, Simple1) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = 9;
  int m = 11;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), true);
  ASSERT_EQ(*std::get<1>(a) + *std::get<2>(a), m);
}

TEST(SummanddsInArray, Simple2) {
  int arr[] = {1, 2, 3, 4, 5, 8, 9};
  int n = 7;
  int m = 5;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), true);
  ASSERT_EQ(*std::get<1>(a) + *std::get<2>(a), m);
}
TEST(SummanddsInArray, Simple3) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = 9;
  int m = 3;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), true);
  ASSERT_EQ(*std::get<1>(a) + *std::get<2>(a), m);
}

TEST(SummanddsInArray, Simple4) {
  int arr[] = {1, 3, 5, 7, 9};
  int n = 5;
  int m = 7;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), false);
}

TEST(SummanddsInArray, Nullarr) {
  int* arr = nullptr;
  int n = 9;
  int m = 3;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), false);
}

TEST(SummanddsInArray, Specific1) {
  int arr_ref[] = {10, 2, 3, 4, 5, 5, 7, 8, 0};
  int* arr = arr_ref + 1;
  int n = 9;
  int m = 5;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), true);
  ASSERT_EQ(*std::get<1>(a) + *std::get<2>(a), m);
}

TEST(SummanddsInArray, Specific2) {
  int arr[] = {1, 2, 4, 5, 8};
  int n = 5;
  int m = 8;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), false);
}

TEST(SummanddsInArray, Specific3) {
  int arr[] = {1, 3, 4, 5, 8};
  int n = 5;
  int m = 16;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), false);
}

TEST(SummanddsInArray, Specific4) {
  int arr[] = {1, 3, 4, 5, 5, 8};
  int n = 6;
  int m = 10;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), true);
  ASSERT_EQ(*std::get<1>(a) + *std::get<2>(a), m);
}

TEST(SummanddsInArray, Specific5) {
  int arr[] = {};
  int n = 0;
  int m = 10;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), false);
}

TEST(SummanddsInArray, Specific6) {
  int arr[] = {10};
  int n = 1;
  int m = 20;
  std::tuple<bool, int*, int*> a = SummanddsInArray(arr, n, m);
  ASSERT_EQ(std::get<0>(a), false);
}