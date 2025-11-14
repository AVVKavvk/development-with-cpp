## Simple Command for direct executable

```cpp
g++ main.cpp -o main
```

## Stop At Pre Processing

```cpp
g++ main.cpp -o main.ii -E
```

```bash
nano main.ii
```

## Stop At Compilation

### Direct from `.cpp`

```cpp
g++ main.cpp -o main.s -S
```

```bash
nano main.s
```

### From `.ii`

```cpp
g++ main.ii -o main.s -S
```

```bash
nano main.s
```

## Stop At Object/Machine Code

### Direct from `.cpp`

```cpp
g++ main.cpp -o main.o -c
```

### From `.s`

```cpp
g++ main.s -o main.o -c
```

## Making Executable

### From `.cpp`

```cpp
g++ main.cpp -o main
```

### From `.ii`

```cpp
g++ main.ii -o main
```

### From `.s`

```cpp
g++ main.s -o main
```

### From `.o`

```cpp
g++ main.o -o main
```
