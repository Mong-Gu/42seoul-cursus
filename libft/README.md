-   Part 1 - Libc Functions

| Name    | External Function | Unit Test | Start    | End      | Comment                                                                                   |
| ------- | ----------------- | --------- | -------- | -------- | ----------------------------------------------------------------------------------------- |
| strlen  | -                 | success   | 20.10.19 | 20.10.19 | -                                                                                         |
| strlcpy | -                 |           |          |          | -                                                                                         |
| strlcat | -                 |           |          |          | -                                                                                         |
| strchr  | -                 |           |          |          | -                                                                                         |
| strrchr | -                 |           |          |          | -                                                                                         |
| strnstr | -                 |           |          |          | -                                                                                         |
| strncmp | -                 | success   | 20.10.20 | 20.10.20 | -                                                                                         |
| atoi    | -                 | 14/19     | 20.10.20 |          | -                                                                                         |
| isalpha | -                 | success   | 20.10.19 | 20.10.19 | -                                                                                         |
| isdigit | -                 | success   | 20.10.19 | 20.10.19 | -                                                                                         |
| isalnum | -                 | success   | 20.10.19 | 20.10.19 | -                                                                                         |
| isascii | -                 | success   | 20.10.19 | 20.10.19 | -                                                                                         |
| isprint | -                 | success   | 20.10.19 | 20.10.19 | -                                                                                         |
| toupper | -                 | success   | 20.10.19 | 20.10.19 | -                                                                                         |
| tolower | -                 | success   | 20.10.19 | 20.10.19 | -                                                                                         |
| memset  | -                 | success   | 20.10.20 | 20.10.20 | -                                                                                         |
| bzero   | -                 | success   | 20.10.20 | 20.10.20 | -                                                                                         |
| memcpy  | -                 | success   | 20.10.20 | 20.10.21 | war-machine 테스트 파일 기준, dst와 src가 겹칠 때의 예외 처리는 해주지 않았는데 일단 통과 |
| memccpy | -                 |           |          |          | -                                                                                         |
| memmove | -                 |           |          |          | -                                                                                         |
| memchr  | -                 |           |          |          | -                                                                                         |
| memcmp  | -                 |           |          |          | -                                                                                         |
| calloc  | malloc            | success   | 20.10.21 | 20.10.21 | -                                                                                         |
| strdup  | malloc            | success   | 20.10.19 | 20.10.19 | -                                                                                         |

<br>

-   Part 2 - Additional Functions

| Name       | External Function | Unit Test | Start | End | Comment |
| ---------- | ----------------- | --------- | ----- | --- | ------- |
| substr     | malloc            |           |       |     | -       |
| strjoin    | malloc            |           |       |     | -       |
| strtrim    | malloc            |           |       |     | -       |
| split      | malloc, free      |           |       |     | -       |
| itoa       | malloc            |           |       |     | -       |
| strmapi    | malloc            |           |       |     | -       |
| putchar_fd | write             |           |       |     | -       |
| putstr_fd  | write             |           |       |     | -       |
| putendl_fd | write             |           |       |     | -       |
| putnbr_fd  | write             |           |       |     | -       |

<br>

-   Part 3 - Bonus part(about array)

| Name         | External Function | Unit Test | Start | End | Comment |
| ------------ | ----------------- | --------- | ----- | --- | ------- |
| lstnew       | malloc            |           |       |     | -       |
| lstadd_front | -                 |           |       |     | -       |
| lstsize      | -                 |           |       |     | -       |
| lstlast      | -                 |           |       |     | -       |
| lstadd_back  | -                 |           |       |     | -       |
| lstdelone    | free              |           |       |     | -       |
| lstclear     | free              |           |       |     | -       |
| lstiter      | -                 |           |       |     | -       |
| lstmap       | malloc, free      |           |       |     | -       |

-   test 파일 출처
    https://github.com/ska42/libft-war-machine
