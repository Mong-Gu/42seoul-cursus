-   Part 1 - Libc Functions

| Name    | External Function | Unit Test | Start    | End      |
| ------- | ----------------- | --------- | -------- | -------- |
| strlen  | -                 | success   | 20.10.19 | 20.10.19 |
| strlcpy | -                 |           |          |          |
| strlcat | -                 |           |          |          |
| strchr  | -                 |           |          |          |
| strrchr | -                 |           |          |          |
| strnstr | -                 |           |          |          |
| strncmp | -                 |           |          |          |
| atoi    | -                 |           |          |          |
| isalpha | -                 | success   | 20.10.19 | 20.10.19 |
| isdigit | -                 | success   | 20.10.19 | 20.10.19 |
| isalnum | -                 | success   | 20.10.19 | 20.10.19 |
| isascii | -                 | success   | 20.10.19 | 20.10.19 |
| isprint | -                 | success   | 20.10.19 | 20.10.19 |
| toupper | -                 | success   | 20.10.19 | 20.10.19 |
| tolower | -                 | success   | 20.10.19 | 20.10.19 |
| memset  | -                 |           |          |          |
| bzero   | -                 |           |          |          |
| memcpy  | -                 |           |          |          |
| memccpy | -                 |           |          |          |
| memmove | -                 |           |          |          |
| memchr  | -                 |           |          |          |
| memcmp  | -                 |           |          |          |
| calloc  | malloc            |           |          |          |
| strdup  | malloc            | success   | 20.10.19 | 20.10.19 |

<br>

-   Part 2 - Additional Functions

| Name       | External Function | Unit Test | Start | End |
| ---------- | ----------------- | --------- | ----- | --- |
| substr     | malloc            |           |       |     |
| strjoin    | malloc            |           |       |     |
| strtrim    | malloc            |           |       |     |
| split      | malloc, free      |           |       |     |
| itoa       | malloc            |           |       |     |
| strmapi    | malloc            |           |       |     |
| putchar_fd | write             |           |       |     |
| putstr_fd  | write             |           |       |     |
| putendl_fd | write             |           |       |     |
| putnbr_fd  | write             |           |       |     |

<br>

-   Part 3 - Bonus part(about array)

| Name         | External Function | Unit Test | Start | End |
| ------------ | ----------------- | --------- | ----- | --- |
| lstnew       | malloc            |           |       |     |
| lstadd_front | -                 |           |       |     |
| lstsize      | -                 |           |       |     |
| lstlast      | -                 |           |       |     |
| lstadd_back  | -                 |           |       |     |
| lstdelone    | free              |           |       |     |
| lstclear     | free              |           |       |     |
| lstiter      | -                 |           |       |     |
| lstmap       | malloc, free      |           |       |     |
