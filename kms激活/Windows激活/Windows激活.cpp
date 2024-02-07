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


//--------------------------正文------------------------------------
int main()
{
	system("title 笙箫旧景 系统激活(kms)");
	system("color 0B");
	//printf("\t\t\t\t欢迎使用Windows激活工具 v1.0.7 \n");
	//printf("注意：激活期间网络环境需通畅。\n");
	menu(); //菜单函数
}



