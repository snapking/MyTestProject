//
//  MWHistoryRoute.h
//  AutoNavi
//
//  Created by gaozhimin on 14-7-12.
//
//

#import <Foundation/Foundation.h>
#import "MWPathPOI.h"

@interface MWHistoryRoute : NSObject

+(MWHistoryRoute *)sharedInstance;

/**********************************************************************
 * 函数名称: MW_RemoveAllGuideRoute
 * 功能描述: 该函数用于删除所有收藏的路径线
 * 参    数:
 *           [OUT]  YES 删除成功 NO 删除失败
 *
 * 返 回 值:
 * 其它说明:
 * 修改日期			版本号		修改人		修改内容
 * ---------------------------------------------------------------------
 **********************************************************************/
- (BOOL)MW_RemoveAllGuideRoute;

/**********************************************************************
 * 函数名称: MW_RemoveGuideRouteWithIndex
 * 功能描述: 该函数用于删除收藏的路径线
 * 参    数:  [IN]   索引
 *           [OUT]  YES 删除成功 NO 删除失败
 *
 * 返 回 值:
 * 其它说明:
 * 修改日期			版本号		修改人		修改内容
 * ---------------------------------------------------------------------
 **********************************************************************/
- (BOOL)MW_RemoveGuideRouteWithTime:(NSString *)time;

/**********************************************************************
 * 函数名称: MW_GetGuideRouteList
 * 功能描述: 该函数用于获取收藏的路径线的信息
 * 参    数:
 *           [OUT]  路径列表
 *
 * 返 回 值:
 * 其它说明:
 * 修改日期			版本号		修改人		修改内容
 * ---------------------------------------------------------------------
 **********************************************************************/
- (NSMutableArray *)MW_GetGuideRouteList;

/**********************************************************************
 * 函数名称: MW_AddGuideRouteWithPathPOI
 * 功能描述: 该函数用于添加历史路线
 * 参    数:
 *
 *
 * 返 回 值:
 * 其它说明:
 * 修改日期			版本号		修改人		修改内容
 * ---------------------------------------------------------------------
 **********************************************************************/
- (void)MW_AddGuideRouteWithPathPOI:(MWPathPOI *)pathPOI;

/*!
  @brief 把routeArray中的所有任务信息保存到文件系统，一般是在退出程序时调用
  @return 成功返回 YES 失败返回 NO
  */
-(BOOL)storeRoute;

/**********************************************************************
 * 函数名称: MW_SetTrackLineInfo
 * 功能描述: 设置轨迹线信息
 * 输入参数: 1. pTrackLineInfo 轨迹线结构体
 * 输出参数:
 * 返 回 值：成功返回GD_ERR_OK ,异常情况返回 GSTATUS 对应出错码
 * 其它说明: 如果不需要显示，则将传入的点数组赋空
 **********************************************************************/
//- (GSTATUS)MW_SetTrackLineInfo:(GTRACKLINEINFO *)pTrackLineInfo;

/**********************************************************************
 * 函数名称: MW_GetUserGuideRouteList
 * 功能描述: 该函数用于获取指定用户收藏的路径线的信息
 * 参    数:
 *           [OUT]  用户路径列表
 *
 * 返 回 值:
 * 其它说明:
 * 修改日期			版本号		修改人		修改内容
 * ---------------------------------------------------------------------
 **********************************************************************/
- (NSMutableArray *)MW_GetUserGuideRouteList;
/**********************************************************************
 * 函数名称: MW_GetSyncUserGuideRouteList
 * 功能描述: 该函数用于获取指定用户收藏的路径线的信息
 * 参    数:
 *           [OUT]  用户路径列表
 *
 * 返 回 值:
 * 其它说明:
 * 修改日期			版本号		修改人		修改内容
 * ---------------------------------------------------------------------
 **********************************************************************/
- (NSMutableArray *)MW_GetSyncUserGuideRouteList;

/**********************************************************************
 * 函数名称: MW_RemoveDiskAllGuideRoute
 * 功能描述: 该函数用于删除所有收藏的路径线,全部删除，不做标记
 * 参    数:
 *           [OUT]  YES 删除成功 NO 删除失败
 *
 * 返 回 值:
 * 其它说明:
 * 修改日期			版本号		修改人		修改内容
 * ---------------------------------------------------------------------
 **********************************************************************/
- (BOOL)MW_RemoveDiskAllGuideRoute;

/**********************************************************************
 * 函数名称: SaveGuideRoute
 * 功能描述: 该函数用于保存历史路线。
 * 返 回 值: 成功返回YES, 失败返回NO
 * 其它说明:
 **********************************************************************/
- (GSTATUS)SaveHistoryRoute;

/**********************************************************************
 * 函数名称: MW_ReNameGuideRouteUserIDWithUserID
 * 功能描述:复制一份新的数据到newUserID
 * 参    数:reNameUserID 要复制的用户id
 *          newUserID  复制后的用户id
 *
 * 返 回 值:
 * 其它说明:
 * 修改日期			版本号		修改人		修改内容
 * ---------------------------------------------------------------------
 **********************************************************************/
- (BOOL)MW_ReNameGuideRouteUserIDWithUserID:(NSString *)reNameUserID NewUserID:(NSString *)newUserID;

@end
