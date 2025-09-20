虚函数（Virtual Functions)

**虚函数可以让我们在子类中重写方法，比如说有两个类A和B，B是从A类派生（继承）来的，也就是说B是A的子类，如果我们在A类里新建一个方法并把它标记为虚函数，我们可以在B类中重写这个方法让它去做些其他的事情。**

我们先创建两个类，一个是Entity类，用来做我们的基类（父类），Entity只有一个公共的方法GetName，这个方法会返回一个字符串

```
#include <iostream>
#include <string>

class Entity
{
public:
	std::string GetName() { return "Entity"; }
};

int main()
{
}
```

然后创建另一个类Player，它是Entity的子类，要在这个类中添加更多的东西，首先给他一个m_Name，然后再给他跟构造一个函数，用来更改这个Name，再给他一个方法GetName，在这里它会返回这个m_Name，就是那个成员变量

```
class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string&name) //const建立常量
		: m_Name(name){ }
	std::string GetName() { return m_Name; }
};
```

完整思路

------

### 代码：

```cpp
#include <iostream>
#include <string>

class Entity
{
public:
    virtual std::string GetName() { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;
public:
    Player(const std::string& name) : m_Name(name) {}
    std::string GetName() override { return m_Name; }
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("L1x");
    PrintName(p);
}
```

------

### 1. **创建 `Entity` 对象并调用 `PrintName` 函数**

```cpp
Entity* e = new Entity();  
PrintName(e);
```

#### 逻辑解释：

- `new Entity()` 在堆上创建了一个 `Entity` 对象。

  - `Entity` 类中的 `GetName()` 方法返回字符串 `"Entity"`。

- `PrintName(e)` 传递了 `e`（指向 `Entity` 对象的指针）。

  - `PrintName` 中调用 `entity->GetName()`，这里的 `entity` 是 `Entity*` 指针，指向 `Entity` 类对象。
  - 因为 `GetName()` 是一个普通的成员函数，并没有被覆盖，所以调用的是 `Entity` 类中的版本，返回 `"Entity"`。

- 最终输出：

  ```
  Entity
  ```

------

### 2. **创建 `Player` 对象并调用 `PrintName` 函数**

```cpp
Player* p = new Player("L1x");
PrintName(p);
```

#### 逻辑解释：

- `new Player("L1x")` 在堆上创建了一个 `Player` 对象，并传递 `"L1x"` 给 `Player` 构造函数。

  - `Player` 构造函数初始化 `m_Name` 为 `"L1x"`。

- `PrintName(p)` 传递了 `p`（指向 `Player` 对象的指针）。

  - `PrintName` 中调用 `entity->GetName()`，这里的 `entity` 是 `Entity*` 指针，指向的是 `Player` 对象。
  - **重要：** 因为 `GetName()` 是一个虚函数（`virtual`），C++ 会使用 **多态**，调用的是 `Player` 类中重写的 `GetName()` 方法，而不是 `Entity` 类中的版本。
  - `Player` 类的 `GetName()` 返回的是 `m_Name`，即 `"L1x"`。

- 最终输出：

  ```
  L1x
  ```

------

### 3. **总结多态和虚函数的作用**

- `Entity` 类中，`GetName()` 是一个虚函数，意味着在运行时可以根据实际对象的类型（`Entity` 或 `Player`）来决定调用哪个版本的 `GetName()`。
- 在 `main()` 函数中：
  - 当 `entity` 是 `Entity` 类型时，调用的是 `Entity` 中的 `GetName()`，返回 `"Entity"`。
  - 当 `entity` 是 `Player` 类型时，调用的是 `Player` 中重写的 `GetName()`，返回 `"L1x"`。

### **完整输出**：

```
Entity
L1x
```

------

### 4. **内存分配说明：**

- 使用 `new` 创建了 `Entity` 和 `Player` 对象，这些对象都在 **堆** 上分配内存。
- **注意：** 如果用完之后没有 `delete`，会导致内存泄漏。

------

### 总结

1. **虚函数和多态：** 通过 `virtual` 关键字，`PrintName` 中的 `entity->GetName()` 会根据对象的实际类型（`Entity` 或 `Player`）选择合适的函数调用。
2. **指针传递：** 由于 `PrintName` 接收的是 `Entity*` 指针，因此可以将 `Player*` 指针传递给它，利用多态机制实现不同类型的调用。

------

我们希望C++能意识到在这里我们传入的其实是一个Player，所以请调用Player的GetName，这就是要用到虚函数的地方，虚函数引入了一种要动态分派的东西，一般通过虚表（vtable）来实现编译，虚表就是一个包含类中所有虚函数映射的列表，通过虚表我们就可以在运行时找到正确到底被重写的函数。简单来说，你需要知道的就是如果你想重写一个函数，你必须要把基类中的原函数设置为虚函数。
