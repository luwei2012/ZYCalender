//
//  ZYCalendarManager.h
//  Example
//
//  Created by Daniel on 2016/10/30.
//  Copyright © 2016年 Daniel. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ZYHEXCOLOR(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0x00FF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0x0000FF))/255.0 \
alpha:1.0]

#define SelectedBgColor ZYHEXCOLOR(0x128963)
#define SelectedTextColor [UIColor whiteColor]

//#define defaultBgColor [UIColor whiteColor]
#define defaultTextColor [UIColor blackColor]

typedef NS_ENUM(NSInteger, ZYCalendarSelectionType) {
    ZYCalendarSelectionTypeSingle = 0,          // 单选
    ZYCalendarSelectionTypeMultiple = 1,        // 多选
    ZYCalendarSelectionTypeRange = 2            // 范围选择
};

@class ZYDayView,JTDateHelper,ZYDatePickerDialog;

@interface ZYCalendarManager : NSObject
@property (nonatomic, strong)JTDateHelper *helper;
@property (nonatomic, strong)NSDateFormatter *titleDateFormatter;
@property (nonatomic, strong)NSDateFormatter *dayDateFormatter;
@property (nonatomic, strong)NSDateFormatter *dateFormatter; 

// 多选模式中保存选中的时间
@property (nonatomic, strong)NSMutableArray *selectedDateArray;

// 选择模式 默认单选
@property (nonatomic, assign)ZYCalendarSelectionType selectionType;

// 之前的时间是否可以被点击选择
@property (nonatomic, assign)BOOL canSelectPastDays;
 

@end
