# DataStruct第三个项目
## 二叉树的应用---双目运算的实现
### 基本实现为：可以借助一个运算符栈，来暂存已经扫描到的还未处理的运算符。根据表达式树与表达式对应关系的递归定义，每两个操作数和一个运算符就可以建立一棵表达式二叉树，而该二叉树又可以作为另一个运算符结点的一棵子树。可以另外借助一个表达式树栈，来暂存已建立好的表达式树的根结点，以便其作为另一个运算符结点的子树而被引用。
	若ch不是运算符，则以ch为根创建一棵只有根结点的二叉树，且将该树根结点压入EXPT栈，读入下一个ch；
	若ch是运算符，则根据OPTR的栈顶元素和ch的优先级比较结果，做不同处理：
	小于，则ch压入OPTR栈，读入下一个ch；
	大于，则弹出OPTR栈顶运算符，从EXPT栈弹出两个表达式子树的根结点，以该运算符为根结点，以弹出的第二个子树作为左子树，弹出的第一个子树为右子树，创建一棵新二叉树，并将该树根结点压入EXPT栈；
	相等，则OPTR的栈顶元素是“(”且ch是“)”，这时弹出OPTR栈顶的“（”，相当于括号匹配成功，然后读入下一个ch。

