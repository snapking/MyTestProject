//
//  MWGPS.h
//  AutoNavi
//
//  Created by gaozhimin on 14-5-7.
//
//

#import <Foundation/Foundation.h>

@protocol MyCLControllerDelegate<NSObject>
-(void)GPSSuccess:(GGPSINFOEX )gpsInfo newLocation:(CLLocation *)newLocation oldLocation:(CLLocation *)oldLocation;
-(void)GPSFail:(NSError *)error;
@end

/*!
  @brief GPS模块
  */

@interface MWGPS : NSObject

/**
 **********************************************************************
 \brief 启动定位模块
 \details 启动定位模块
 **********************************************************************/
+ (void)StartUpWithDelegate:(id<MyCLControllerDelegate>)delegate;

/**
 **********************************************************************
 \brief 关闭定位模块
 \details 关闭定位模块
 **********************************************************************/
+ (void)CleanUp;

/**********************************************************************
 * 函数名称: Heading_Startup
 * 功能描述: 启动电子罗盘
 * 输入参数:
 * 输出参数:
 * 返 回 值:
 * 其它说明:
 * 修改日期			版本号		修改人		修改内容
 * ---------------------------------------------------------------------
 * 2012/3/26		1.0			廖宇
 **********************************************************************/
+(void)HeadingStartup;

/**********************************************************************
 * 函数名称: Heading_Cleanup
 * 功能描述: 关闭电子罗盘
 * 输入参数:
 * 输出参数:
 * 返 回 值:
 * 其它说明:
 * 修改日期			版本号		修改人		修改内容
 * ---------------------------------------------------------------------
 * 2012/3/26		1.0			廖宇
 **********************************************************************/
+(void)HeadingCleanup;
/**
 **********************************************************************
 \brief 后台定位处理
 \details 后台定位处理
 **********************************************************************/
+ (void)backgroundLocationHandle;

/**********************************************************************
\brief 获取GPS信息
\details 获取当前GPS基本信息。
\param[out]  pGpsInfo 结构体GGPSINFO指针，用于返回GPS基本信息
\retval	GD_ERR_OK 成功
\retval	GD_ERR_FAILED	操作失败
\remarks
\since 6.0
\see
**********************************************************************/
+ (GSTATUS)GetGPSInfo:(GGPSINFO *)pGpsInfo;

/**
 **********************************************************************
 \brief 获取卫星信息
 \details 获取当前卫星基本信息。
 \param[in]  pSatellite 结构体GSATELLITEINFO指针，用于返回卫星基本信息
 \retval	GD_ERR_OK 成功
 \retval	GD_ERR_FAILED	操作失败
 \remarks
 \since 6.0
 \see
 **********************************************************************/
+ (GSTATUS)GetSatelliteInfo:(GSATELLITEINFO *)pSatellite;

#if PROJECTMODE
/**
 **********************************************************************
 \brief 回放gps信号信号
 **********************************************************************/
+ (GSTATUS)replay_HMI_GPS;

/**
 **********************************************************************
 \brief 停止回放gps信号信号
 **********************************************************************/
+ (GSTATUS)stop_replay_HMI_GPS;

#endif

@end
