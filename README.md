# kms-sx
本kms激活程序主要功能是简化Windows slmgr 命令操作，实现选择激活。
## 注意
运行前请关闭Windows Defender(Windows安全中心)。  
本程序使用了大量的system函数可能会被某些杀软删除，编译运行前考虑是否关闭杀毒软件。  
离线kms激活将拷贝SECOPatcher.dll至C:\Windows\System32目录下，如果杀毒软件拦截请允许，实测某绒不会拦截。
## 功能
本程序内置6个可选服务器和5个可选系统，当然，本程序还提供了自定义模块，  
可以任意填入想要绑入的服务器或kms系统密钥。    
并且内置离线激活模式，通过搭建本地kms服务器，dll，注册表来实现。   
## 编译
1.本程序使用Visual Studio 2022编写 ，编译前请将SDL检查置为否。  
2.将链接器的清单文件里的UAC执行级别改为requireAdministrator 即可，因为涉及激活操作需要管理员权限，这样就不用每次运行还要右击来运行。  
3.将“高级”“字符集”改为“使用多字节字符集”  
4.将“c/c++”"符合模式"改为“否”  
## 引用
1.本程序的离线激活模式，引用开源项目https://github.com/Wind4/vlmcsd/tree/master  的vlmcsd当作本程序的离线kms激活的本地kms服务器
