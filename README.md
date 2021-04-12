# 42SEOUL 꿀팁

## Makefile

https://modoocode.com/311

## Norminette 및 컴파일 양식

- norminette -R CheckForbiddenSourceHeader

- gcc -Wextra -Wall -Werror
- gcc -Wextra -Wall -Werror -c */*.c
- rm *.o
## 42 header  
  
https://marketplace.visualstudio.com/items?itemName=kube.42header


unistd란?
POSIX 운영체제 API에 대한 액세스를 제공하는 헤더파일이다.

ssize_t write(int fd, void* buf, size_t nbytes);
fd = 파일 식별자
buf = 데이터를 저장하고 있는 버퍼
nbytes = 쓸 바이트 수
성공시 파일에 쓴 바이트 수 반환, 실패시 -1 반환

## 문자열 배열 vs 문자열 포인터

### 문자열 배열
배열의 내용은 바꿀 수 있다.
그러나 배열의 이름이 가르키는 대상 자체는 바꿀 수 없다.

### 문자열 포인터
포인터가 가르키는 대상은 바꿀 수 있다.
그러나 문자열은 상수이다. 상수의 내용은 바꿀 수 없다.