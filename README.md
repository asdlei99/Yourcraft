# Yourcraft

C++ DirectX11游戏引擎（正在造轮子中，随缘更新）

已含功能(不一定完善)：
- 游戏对象&组件架构
- 引用计数内存模型
- 内存连续的对象池管理
- 基础渲染组件
- 批量基础渲染组件
- 物理刚体组件
- GPU粒子特效组件
- 摄像机组件

TODO（坑）：
- 继续完善原有功能
- 应用LOD技术的组件更新机制
- 提供可并发的更新组件机制
- 更多3D渲染组件
- 2D渲染组件
- 脚本组件
- 行为树组件
- 声音组件
- CPU粒子特效组件

注意事项：
- 对象与其所有子对象中最多只可有一个对象拥有刚体组件。
- 引擎初始化必须先设定一个主摄像机
