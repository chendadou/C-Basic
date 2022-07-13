[🔙 返回](../README.md)

# macOS 的 VSCode 配置 C/C++ 环境

## 一、下载相关
### 1. VSCode
（1）官网：[Visual Studio Code](https://code.visualstudio.com/)
  - [关于如何解决 VSCode 下载太慢的问题](https://cloud.tencent.com/developer/article/1959715)

（2）百度云网盘分享：
  > 链接: https://pan.baidu.com/s/1YaKMFvULU7p7viAMWF1Pmg <br> 提取码: v2e8

### 2. 扩展包
（1）VSCode
  - 点击 VSCode 的扩展；
  - 搜索 `C/C++` 和 `CodeLLDB`，并点击下载。<br>
  ![C/C++和CodeLLDB](../img/note01/img01.png)
  
（2）`CodeLLDB` 可能由于网络问题安装失败。可选择其他下载方式：
  - GitHub：[vscode-lldb](https://github.com/vadimcn/vscode-lldb/releases)
    > 基于 Intel 的 Mac 选择：codelldb-x86_64-darwin.vsix <br> 基于 Apple Silicon 的 Mac 选择：codelldb-aarch64-darwin.vsix
  
    下载完成后，在扩展中点击“从VISX安装”，选择对应的 `.vsix` 文件，即可。<br>
  ![从VISX安装...](../img/note01/img14.png)
  - 百度云网盘分享：
    > 链接: https://pan.baidu.com/s/161ZDiXmCjPCetZoaOpYIRA <br> 提取码: 781s

## 二、步骤相关
1. 打开自己的项目，并新建一个 `main.c` 文件，简单代码如下图所示：<br>
![main.c](../img/note01/img02.png)

2. 运行——添加配置，选择 `LLDB` ，如下图所示：<br>
![添加配置](../img/note01/img03.png) <br>
![选择LLDB](../img/note01/img04.png)

3. 此时，项目中新增 `launch.json` 文件，其中，第11行代码的 `program` 参数的值需改为 `${fileDirname}/${fileBasenameNoExtension}` ，如下图所示： <br> 相关文档：[Visual Studio Code Variables Reference](https://code.visualstudio.com/docs/editor/variables-reference) <br> 
![launch.json](../img/note01/img05.png) <br>
![修改launch.json中的参数](../img/note01/img06.png)

4. 终端——运行生成任务，选择 `C/C++：gcc生成活动文件` （在当前需要运行的文件下执行这一步，比如这边是 `main.c` 文件下），如下图所示：<br>
![运行生成任务](../img/note01/img07.png) <br>
![C/C++：gcc生成活动文件](../img/note01/img08.png)

5. 再按下`fn` + `F5`，终端成功输出 `hello world!`，如下图所示：<br>
![运行成功](../img/note01/img09.png)

6. Debug 之前都要先运行生成任务，如果不想每次都手动执行，可以执行：终端——配置默认生成任务，如下图所示：<br>
![配置默认生成任务](../img/note01/img10.png) <br>
![C/C++：gcc生成活动文件](../img/note01/img11.png)

7. Debug 可以是步骤5，也可以如下图所示进行操作：<br>
![Debug](../img/note01/img15.png)

8. `scanf` 函数也可正常使用，如下图所示：<br>
![输入数字7](../img/note01/img12.png) <br>
![终端成功输出](../img/note01/img13.png)