## BP
BluePrint
### Viewport
视图页面
actor control： W-move移动 E-rotate旋转 R-scale缩放
### Construction Script
暂时理解为Befor Hook

``` 
初始化属性和变量：设置实例的初始位置、旋转、缩放以及其他自定义属性。

创建和配置组件：动态添加组件，并对这些组件进行设置和调整，如静态网格组件、碰撞体组件等。

生成动态内容：根据需要生成和配置动态内容，比如生成随机道具、根据条件生成环境元素等。

执行逻辑操作：执行一些逻辑操作，例如根据条件设置不同的属性、触发事件等。

与其他实例交互：与其他实例进行交互，调用其他实例的函数或修改其属性等。 `

### Event Graph

props 道具（material） collision 物体碰撞

flip flop流程控制器 A:第一次触发 B:第二次触发

on Components Begin Overlap: 组件重叠事件
Cast to BP_thridPersonCharactor 重叠对象为第三人称角色事件

