* 增加了写缓冲


BUFFER大小为8

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 546346560 ns
Thoughput:1.83034e+06
Read Time 516535844 ns
Thoughput:1.93597e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 553938767 ns
Thoughput:1.80525e+06
Read Time 523569371 ns
Thoughput:1.90997e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 547296975 ns
Thoughput:1.82716e+06
Read Time 529532297 ns
Thoughput:1.88846e+06
```

BUFFER大小为16

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 418263977 ns
Thoughput:2.39083e+06
Read Time 379511121 ns
Thoughput:2.63497e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 421015919 ns
Thoughput:2.37521e+06
Read Time 378027855 ns
Thoughput:2.64531e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 419733413 ns
Thoughput:2.38246e+06
Read Time 374086280 ns
Thoughput:2.67318e+06
```

BUFFER 32

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 362510419 ns
Thoughput:2.75854e+06
Read Time 306612811 ns
Thoughput:3.26144e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 358317026 ns
Thoughput:2.79082e+06
Read Time 302398057 ns
Thoughput:3.3069e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 363640351 ns
Thoughput:2.74997e+06
Read Time 315489612 ns
Thoughput:3.16968e+06
```

BUFFER 64

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 327223370 ns
Thoughput:3.05602e+06
Read Time 266251671 ns
Thoughput:3.75584e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 325224183 ns
Thoughput:3.0748e+06
Read Time 265560525 ns
Thoughput:3.76562e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 324192601 ns
Thoughput:3.08459e+06
Read Time 265092682 ns
Thoughput:3.77227e+06
```

BUFFER 128

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 306147860 ns
Thoughput:3.2664e+06
Read Time 262265698 ns
Thoughput:3.81293e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 306272865 ns
Thoughput:3.26506e+06
Read Time 261163023 ns
Thoughput:3.82903e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 305433477 ns
Thoughput:3.27404e+06
Read Time 258955549 ns
Thoughput:3.86167e+06
```

BUFFER 256

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 304900114 ns
Thoughput:3.27976e+06
Read Time 247698313 ns
Thoughput:4.03717e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 307828745 ns
Thoughput:3.24856e+06
Read Time 253641894 ns
Thoughput:3.94257e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 306197560 ns
Thoughput:3.26587e+06
Read Time 254568018 ns
Thoughput:3.92822e+06
```

BUFFER:512

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 277764196 ns
Thoughput:3.60018e+06
Read Time 244606812 ns
Thoughput:4.08819e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 282365500 ns
Thoughput:3.54151e+06
Read Time 246615581 ns
Thoughput:4.05489e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 277836495 ns
Thoughput:3.59924e+06
Read Time 240511318 ns
Thoughput:4.15781e+06
```

BUFFER:1024

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 276008869 ns
Thoughput:3.62307e+06
Read Time 244319501 ns
Thoughput:4.093e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 274371346 ns
Thoughput:3.6447e+06
Read Time 245258907 ns
Thoughput:4.07732e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 274526536 ns
Thoughput:3.64264e+06
Read Time 242659331 ns
Thoughput:4.121e+06
```

BUFFER:2048

```
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 273063254 ns
Thoughput:3.66216e+06
Read Time 244246233 ns
Thoughput:4.09423e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 272165281 ns
Thoughput:3.67424e+06
Read Time 242199988 ns
Thoughput:4.12882e+06
ubuntu@bianrunhua-kvs-2:~/codebase$ ./build/local 10.60.60.60 10001
Write Time 275987163 ns
Thoughput:3.62336e+06
Read Time 240161769 ns
Thoughput:4.16386e+06
```