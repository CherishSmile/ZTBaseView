//
//  ZTTableView.h
//  ZTCloudMirror
//
//  Created by ZWL on 2017/9/15.
//  Copyright © 2017年 中通四局. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MJRefresh/MJRefresh.h>
#import "ZTBaseView.h"

@class ZTTableView;
@protocol ZTTableViewDelegte <UITableViewDelegate>
@optional

/**
 空数据时，点击空白区域事件

 @param tableView 所在视图
 @param view 点击的view
 */
-(void)tableView:(ZTTableView*)tableView didTapEmptyDataView:(UIView*)view;

/**
 自定义空数据视图

 @param tableView 所在视图
 @return 自定义图片
 */
-(UIImage *)imageForEmptyDataSetOnTableView:(ZTTableView *)tableView;

/**
 自定义空数据标题

 @param tableView 所在视图
 @return 空数据标题
 */
-(NSAttributedString *)titleForEmptyDataSetOnTableView:(ZTTableView *)tableView;
@end

@interface ZTTableView : UITableView


@property(nonatomic, strong) NSArray * dataArr;

/**
 请求网络结果
 */
@property(nonatomic, assign) ZTRequestResult requestResult;

/**
 设置刷新
 
 @param type 刷新类型（上拉加载or下拉刷新）
 @param headerBlock 下拉刷新回调
 @param footerBlock 上拉加载回调
 */
-(void)setRefreshType:(ZTRefreshStyle)type headerBlock:(MJRefreshComponentAction)headerBlock footerBlock:(MJRefreshComponentAction)footerBlock;

/**
 停止刷新
 
 @param type 停止刷新类型
 */
-(void)stopRefrsh:(ZTRefreshStyle)type;

/**
 设置空数据视图
 */
-(void)setEmptyData;

/**
 重置tabview的contentInset（可以解决MJRefresh的顶部刷新下移的bug）
 */
-(void)resetTabContentInset;

@end


UITableView * initTabView(id instanceObject,UITableViewStyle style);

