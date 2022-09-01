* 增加了写缓冲


BUFFER大小为8

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 544132315 ns
Thoughput:1.83779e+06
Read Time 2511099785 ns
Thoughput:398232
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
RDMA_CM_EVENT_ESTABLISHED fail: No such file or directory
Segmentation fault (core dumped)
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 545113059 ns
Thoughput:1.83448e+06
Read Time 2526074995 ns
Thoughput:395871
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 546462094 ns
Thoughput:1.82995e+06
Read Time 2516973770 ns
Thoughput:397303
```

BUFFER大小为16

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 420186453 ns
Thoughput:2.3799e+06
Read Time 2499091204 ns
Thoughput:400145
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 418471291 ns
Thoughput:2.38965e+06
Read Time 2502712098 ns
Thoughput:399567
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 420503335 ns
Thoughput:2.3781e+06
Read Time 2509665440 ns
Thoughput:398459
```

BUFFER 32

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 359120946 ns
Thoughput:2.78458e+06
Read Time 2502257821 ns
Thoughput:399639
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 360643147 ns
Thoughput:2.77282e+06
Read Time 2497947755 ns
Thoughput:400329
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 361859766 ns
Thoughput:2.7635e+06
Read Time 2501674442 ns
Thoughput:399732
```

BUFFER 64

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 325687397 ns
Thoughput:3.07043e+06
Read Time 2502755080 ns
Thoughput:399560
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 324803360 ns
Thoughput:3.07879e+06
Read Time 2494416055 ns
Thoughput:400895
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 323023226 ns
Thoughput:3.09575e+06
Read Time 2474339460 ns
Thoughput:404148
```

BUFFER 128

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 306971183 ns
Thoughput:3.25763e+06
Read Time 2523741757 ns
Thoughput:396237
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 304540035 ns
Thoughput:3.28364e+06
Read Time 2511709456 ns
Thoughput:398135
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 302978362 ns
Thoughput:3.30057e+06
Read Time 2511673848 ns
Thoughput:398141
```