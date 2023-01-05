SafeUnits is a library that exposes all common scientific units.
All interactions between the units are checked at compile time so that only interactions between units 
that make sense will type check.
An example of code that will throw an error at compile time due to incorrect units being used

```cpp
Meter<int> distance = 10;
Seconds<int> time = 5;
Velocity<int> speed = distance - time;
```

where as the code below will type check correctly

``` cpp
Meter<int> distance = 10;
Seconds<int> time = 5;
Velocity<int> speed = distance / time;
```

The library also supports user defined literals for all types supplied
such as
```cpp
auto amps = 1.0A;
```

