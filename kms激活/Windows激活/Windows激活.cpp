#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

//自定义功能组
#include "menu.h"      //主菜单
#include "function.h"  //功能(通用激活流程)
#include "xz.h"       //使用须知
#include "other.h"    //其他功能
#include "custom.h"   //用户自定义激活
#include "server.h"  //选择服务器
#include "ms.h"      //提供在线状态与延时
#include "kms.h"     //提供大部分KMS指令
#include "localkms.h"     //提供离线KMS激活功能
#include "color.h"     //提供颜色功能



//--------------------------正文------------------------------------
int main()
{
	system("title 笙箫旧景 系统激活(kms)");
	system("color 0B");
	menu(); //菜单函数
}



