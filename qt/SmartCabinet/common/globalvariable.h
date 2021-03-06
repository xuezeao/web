#ifndef GLOBALVARIABLE_H
#define GLOBALVARIABLE_H

#include <QString>
#include "common/serialportworking.h"

//#define TEST //test mode


#define OPEN_THREAD 1
#define CLOSE_THREAD 0

#define NETWORK_OFFLINE 0
#define NETWORK_ONLINE  1
/*********************/
#define RESETTIMER 1
#define HALTQUITPROCESS 2
#define STARTTIMER 3
/************定时***************/
#define POSTINFO2SERVER 30
#define QUITOPTPAGE     60
#define UPDATEDATA      120
/*************显示切换************/
#define ONLINE_SUPER 4
#define ONLINE_GUEST 3
#define ONLINE_ADMIN 2
#define OFFLINE_MODL 1
/***********用户权限**********/
#define USER_SUPER 2
#define USER_ADMIN 1
#define USER_GUEST 0

/**************任务选择***************/
#define TASK_TAKEIN  0
#define TASK_TAKEOUT 1
#define TASK_RETURN  2

/**************任务反馈*********************/
#define ACT_INTODRAWER_SUCCESS 10
#define ACT_INTODRAWER_FAIL    11
#define ACT_CREATESERIALPORT_SUCCESS   20
#define ACT_CREATESERIALPORT_FAIL      21
#define ACT_SENDTASK_SUCCESS   30
#define ACT_SENDTASK_FAIL      31
#define ACT_WORKOVER_SUCCESS   41
#define ACT_WORKVOER_FAIL      42
#define ACT_TASK_OK            51


/******************************************/
#define CREATESERIALPORT 0
#define CLOSESERIALPORT  1
#define ACT_TASK_OVER     2
/*****************查询任务**************************/
#define TASK_ERROR         0
#define TASK_HAVENOTEXEC   1
#define TASK_OVER          2
#define TASK_NOTREPLY      -1
#define TASK_OFFWORKING    -2
/****************抽屉状态**************************/
#define DRAWEROPEN  1
#define DRAWERCLOSE 0
/******************锁状态********************************/
#define LOCK_CURRENT_STATUS_FAIL -1
#define LOCK_CURRENT_STATUS_OPEN 1
#define LOCK_CURRENT_STATUS_CLOSE 0

/********************任务类型********************************/
#define TASKTYPE_SHOWALL -1
#define TASKTYPE_TAKEIN  0
#define TASKTYPE_TAKEOUT 1
#define TASKTYPE_RETURN  2
#define TASKTYPE_REPLACE 3
#define TASKTYPE_SCRAP   4
#define TASKTYPE_CHECK   5

/***************************************************/
#define SERIALLOOP_TIMER 1000 // 暂时1S**********************
/***************************************************/
extern QString userName;
extern int userId;
extern int userRole;

extern int NetWorkStatus;
extern int resetSignal;//重置信号
extern int SerialPortStatus;//判断网络创建

extern bool isQuitLoopRequestAgentiaStatus;//false 退出 true 继续
extern bool isClickReturnPB;

extern int groupId;
extern QString CABINETNO;
extern QString VERSION;

/*************serialport*******************/
extern SerialPortWorking *serialPortControl_G;
extern bool is_ARM_receivedReply_from_MCU;
extern bool is_OpenSerialPort;
extern int currentLockStatus;
extern int is_MCU_taskExecuteStatus;
extern int send_positionNo_G[64];
extern int cabinet_drawer_num;
extern bool is_MCU_Completesendcommandtask;
extern bool is_MCU_CompleteCheckLockStatus;



/******************************/





#endif // GLOBALVARIABLE_H
