#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include"pointers.h"

bool pointers_test();
bool swap_test();
bool find_char_test();
bool string_compare_test();
bool string_copy_test();
bool find_string_test();

int main(int argc, char** argv){
	if(!pointers_test()){
		return 1;
	}

	return 0;
}

bool pointers_test(){
	bool swap_result = swap_test();
	bool find_char_result = find_char_test();
	bool string_compare_result = string_compare_test();
	bool string_copy_result = string_copy_test();
	bool find_string_result = find_string_test();

	if(swap_result &&
		 find_char_result &&
	 	 string_compare_result &&
	 	 string_copy_result &&
	 	 find_string_result){
		return true;
	}

	return false;
}

bool swap_test(){
	int a = 1;
	int b = 2;
	const int swapped_a = b;
	const int swapped_b = a;

	swap(&a, &b);

	if(a == swapped_a && b == swapped_b){
		printf("swap() test: PASS\n");
		return true;
	}
	printf("swap() test: FAIL\n");
	return false;
}

bool find_char_test(){
	const char* test_string = "This is a string.";
	char test_char = 'a';
	const char* expected_location = &test_string[8];
	const char *char_location = find_char(test_string, test_char);
	if(char_location == expected_location){
		printf("find_char() test PASS\n");
		return true;
	}
	printf("find_char() test PASS\n");
	return false;
}

bool string_compare_test(){
	const char *str1 = "test string";
	const char *str2 = "test string";
	int test1_expected = 0;
	const char *str3 = "a test string";
	const char *str4 = "b test string";
	int test2_expected = -1;
	int test3_expected = 1;
	if(test1_expected == string_compare(str1, str2) &&
		 test2_expected == string_compare(str3, str4) &&
		 test3_expected == string_compare(str4, str3)){
			 printf("string_compare() test: PASS\n");
			 return true;
		 }
 	printf("string_compare() test: FAIL\n");
	return false;
}

bool string_copy_test(){
	const char *test_src = "test";
	int size = strlen(test_src);
	char test_dest[size];
	string_copy(test_dest, test_src);
	int res = strncmp(test_dest, test_src, size);
	if(res){
		printf("string_copy() test FAIL\n");
		return false;
	}
	printf("string_copy() test PASS\n");
	return true;
}

bool find_string_test(){
	const char *test_haystack = "This is a test";
	const char *test_needle1 = "test";
	const char *test_needle2 = "This";
	const char *test_needle3 = "is";
	const char *expected_location1 = &test_haystack[10];
	const char *expected_location2 = &test_haystack[0];
	const char *expected_location3 = &test_haystack[2];

	const char* result_location1 = find_string(test_haystack, test_needle1);
	const char* result_location2 = find_string(test_haystack, test_needle2);
	const char* result_location3 = find_string(test_haystack, test_needle3);

	if(expected_location1 == result_location1 &&
		 expected_location2 == result_location2 && 
	 	 expected_location3 == result_location3){
			 printf("find_string() test PASS\n");
			 return true;
		 }
		 printf("find_string() test FAIL\n");
		 return false;
}
