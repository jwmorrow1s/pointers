# Pointers

Pointers is an exercise in understanding pointer use in C. It consists of five functions:

`void swap(int *a, int *b)` - takes the address of two ints and swaps their values.

`const char *find_char(const char str, char c)` takes a string and a char and locates the
char inside of the string, then returns the address of its location within the string.

`void string_copy(const char *a, const char * b)` takes an adequately-sized empty char array
as a destination and a second string to copy into the first.

`const char *find_string(const char *haystack, const char *needle)`- takes a string to search,
the haystack, and a string to match, the needle, and returns the location of the start of that string
in the haystack, if it is fully matched. It returns NULL otherwise.

## Installation

There shouldn't be any installation necessary to run this. You should have both make and gcc on your machine. Sorry Windows folks.

## Usage

```bash make run``` to see the tests pass

## Contributing

 Criticism is always welcome. I probably won't take any merge requests, because this was only an exercise.

## License

[MIT](https://choosealicense.com/licenses/mit/)
