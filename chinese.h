//
// Created by RUPC on 2023/11/30.
//

#ifndef UV_K5_FIRMWARE_CUSTOM_0_17_CHINESE_H
#define UV_K5_FIRMWARE_CUSTOM_0_17_CHINESE_H

#define 步进频率 "\x01\x02\x03\x04"
#define 接收数字亚音 "\x05\x06\x07\x08\x09\x0B"
#define 接收模拟亚音 "\x05\x06\x0C\x0D\x09\x0B"
#define 发送数字亚音 "\x0E\x0F\x07\x08\x09\x0B"
#define 发送模拟亚音 "\x0E\x0F\x0C\x0D\x09\x0B"
#define 频差方向 "\x03\x10\x11\x12"
#define 频差频率 "\x03\x10\x03\x04"
#define 加密通话 "\x13\x14\x15\x16"
#define 遇忙禁发 "\x17\x18\x19\x0E"
#define 压扩 "\x1A\x1B"
#define 存置信道 "\x1C\x1D\x1E\x1F"
#define 删除信道 "\x7F\x80\x1E\x1F"
#define 命名信道 "\x81\x82\x1E\x1F"
#define 信道扫描列表 "\x1E\x1F\x83\x84\x85\x86"
#define 扫描列表1 "\x83\x84\x85\x86\x31"
#define 扫描列表2 "\x83\x84\x85\x86\x32"
#define 搜索恢复模式 "\x87\x88\x89\x8A\x0C\x8B"
#define 发送超时 "\x0E\x0F\x8C\x8D"
#define 省电模式 "\x8E\x8F\x0C\x8B"
#define 麦克风增益 "\x90\x91\x92\x93\x94"
#define 信道显示模式 "\x1E\x1F\x95\x96\x0C\x8B"
#define 开机显示 "\x97\x98\x95\x96"
#define 自动背光 "\x99\x9A\x9B\x9C"
#define 背光亮度 "\x9B\x9C\x9D\x9E"
#define 发送结束音 "\x0E\x0F\x9F\xA0\x0B"
#define 尾音消除 "\xA1\x0B\xA2\x80"
#define 过中继尾音消除 "\xA3\xA4\xA5\xA1\x0B\xA2\x80"
#define 按键即呼 "\xA6\xA7\xA8\xA9"
#define 身份码 "\xAA\xAB\xAC"
#define DTMF上线码 "\x44\x54\x4D\x46\xAD\xAE\xAC"
#define DTMF下线码 "\x44\x54\x4D\x46\xAF\xAE\xAC"
#define DTMF发送 "\x44\x54\x4D\x46\x0E\x0F"
#define DTMF侧音 "\x44\x54\x4D\x46\xB0\x0B"
#define DTMF响应 "\x44\x54\x4D\x46\xB1\xB2"
#define DTMF复位 "\x44\x54\x4D\x46\x8A\xB3"
#define DTMF预载波 "\x44\x54\x4D\x46\xB4\xB5\xB6"
#define DTMF联系人 "\x44\x54\x4D\x46\xB7\xB8\xB9"
#define DTMF显示 "\x44\x54\x4D\x46\x95\x96"
#define AM自动增益 "\x41\x4D\x99\x9A\x93\x94"
#define 收发模式 "\x06\x0E\x0C\x8B"
#define 静噪等级 "\xBA\xBB\xBC\xBD"

//隐藏菜单
#define 频段解锁 "\x03\xBE\xBF\xC0"
#define 两百M发射 "\x32\x30\x30\x4D\x0E\xC1"
#define 三百五十M发射 "\x33\x35\x30\x4D\x0E\xC1"
#define 五百M发射 "\x35\x30\x30\x4D\x0E\xC1"
#define 三百五十M接收 "\x33\x35\x30\x4D\x05\x06"
#define 电池调压 "\x8F\xC2\xC3\x1A"
#define 电池大小 "\x8F\xC2\xC4\xC5"
#define 参数复位 "\xC6\x07\x8A\xB3"
//子菜单
#define 发送等于接收 "\x0E\x0F\x3D\x05\x06"
#define 发送等于接收加偏移 "\x0E\x0F\x3D\n\x05\x06\x2B\xC7\xC8"
#define 发送等于接收减偏移 "\x0E\x0F\x3D\n\x05\x06\x2D\xC7\xC8"
#define 关闭 "\xC9\xCA"
#define 开启 "\x97\xCB"
#define 一级 "\x31\x20\xBD"
#define 二级 "\x32\x20\xBD"
#define 三级 "\x33\x20\xBD"
#define 四级 "\x34\x20\xBD"
#define 三十秒 "\x33\x30\x20\xCC"
#define 一分 "\x31\x20\xCD"
#define 两分 "\x32\x20\xCD"
#define 三分 "\x33\x20\xCD"
#define 四分 "\x34\x20\xCD"
#define 五分 "\x35\x20\xCD"
#define 六分 "\x36\x20\xCD"
#define 七分 "\x37\x20\xCD"
#define 八分 "\x38\x20\xCD"
#define 九分 "\x39\x20\xCD"
#define 十五分 "\x31\x35\x20\xCD"
#define 主信道接收发射 "\xCE\x1E\x1F\n\x05\x06\x0E\xC1"
#define 双信道接收 "\xCF\x1E\x1F\n\x05\x06"
#define 主信道发射副信道接收 "\xCE\x1E\x1F\x0E\xC1\n\xD0\x1E\x1F\x05\x06"
#define 主信道发射双信道接收 "\xCE\x1E\x1F\x0E\xC1\n\xCF\x1E\x1F\x05\x06"
#define 遇信号5秒后搜索 "\x17\x1E\xD1\n\x35\xCC\xD2\x87\x88"
#define 信号停止后搜索 "\x1E\xD1\xD3\xD4\xD2\n\x87\x88"
#define 遇信号后停止搜索 "\x17\x1E\xD1\xD2\n\xD3\xD4\x87\x88"
#define 频率 "\x03\x04"
#define 信道号 "\x1E\x1F\xD1"
#define 名称 "\x82\xD5"
#define 名称加频率 "\x82\xD5\x2B\n\x03\x04"
#define 不响应 "\xD6\xB1\xB2"
#define 本地响铃 "\xD7\xD8\xB1\xD9"
#define 回复响应 "\xDA\x8A\xB1\xB2"
#define 本地响铃回复响应 "\xD7\xD8\xB1\xD9\n\xDA\x8A\xB1\xB2"
#define 不发送 "\xD6\x0E\x0F"
#define 上线码 "\xAD\xAE\xAC"
#define 下线码 "\xAF\xAE\xAC"
#define 上线加下线码 "\xAD\xAE\x2B\xAF\xAE\xAC"
#define Quindar码 "\x51\x75\x69\x6E\x64\x61\x72\xAC"
#define 关闭结束音 "\xC9\xCA\x9F\xA0\x0B"
#define ROGER结束音 "\x52\x4F\x47\x45\x52\x9F\xA0\x0B"
#define MDC蛙叫 "\x4D\x44\x43\xDB\xDC"
#define 除信道参数 "\x80\x1E\x1F\xC6\x07"
#define 全部参数 "\xDD\xDE\xC6\x07"
#define 禁用全部 "\x19\xDF\xDD\xDE"
#define 解锁全部 "\xBF\xC0\xDD\xDE"
#define 五秒 "\x35\x20\xCC"
#define 十秒 "\x31\x30\x20\xCC"
#define 二十秒 "\x32\x30\x20\xCC"
#define 发送时 "\x0E\x0F\x8D"
#define 接收时 "\x05\x06\x8D"
#define 发送接收时 "\x0E\x0F\x2F\x05\x06\x8D"
//ui/menu.c
//！！还有一个列表
#define 全部 "\xDD\xDE"
#define 扫描 "\x83\x84"
//ui/main.c
#define 低电压 "\xE0\x8F\x1A"
#define 长按井键解锁 "\xE1\xA6\x20\x23\x20\xA7\xBF\xC0"
#define 遇忙 "\x17\x18"
#define 禁止发射 "\x19\xD4\x0E\xC1"
#define 发送超时 "\x0E\x0F\x8C\x8D"
#define 高电压 "\xE2\x8F\x1A"
//ui/helper.c
#define 按EXIT键 "\xA6\x20\x45\x58\x49\x54\x20\xA7"
#define 全部按键 "\xDD\xDE\xA6\xA7"
//ui/welcome
#define 解锁 "\xBF\xC0"
//ui/scanner.c
//！！两频率
//！！两模拟亚音
//！！一数字亚音
#define 存置问 "\x1C\x1D\x3F"
#define 存置了 "\x1C\x1D\x3A"
//!! 扫描ok
//!! 扫描fail




#endif //UV_K5_FIRMWARE_CUSTOM_0_17_CHINESE_H
