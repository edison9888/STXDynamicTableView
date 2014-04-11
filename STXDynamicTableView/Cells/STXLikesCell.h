//
//  STXLikesCell.h
//  STXDynamicTableViewExample
//
//  Created by Jesse Armand on 10/4/14.
//  Copyright (c) 2014 2359 Media Pte Ltd. All rights reserved.
//

@import UIKit;

@class STXLikesCell;

@protocol STXLikesCellDelegate <NSObject>

@optional

- (void)likesCellWillShowLikes:(STXLikesCell *)likesCell;
- (void)likesCellDidSelectLiker:(NSString *)liker;

@end

@interface STXLikesCell : UITableViewCell

@property (copy, nonatomic) NSDictionary *likes;

@property (weak, nonatomic) id <STXLikesCellDelegate> delegate;

- (instancetype)initWithLikes:(NSDictionary *)likes reuseIdentifier:(NSString *)reuseIdentifier;

@end
