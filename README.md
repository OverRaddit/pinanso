# 42SEOUL 꿀팁

## 42 header  
  
https://marketplace.visualstudio.com/items?itemName=kube.42header


unistd란?
POSIX 운영체제 API에 대한 액세스를 제공하는 헤더파일이다.

ssize_t write(int fd, void* buf, size_t nbytes);
fd = 파일 식별자
buf = 데이터를 저장하고 있는 버퍼
nbytes = 쓸 바이트 수
성공시 파일에 쓴 바이트 수 반환, 실패시 -1 반환