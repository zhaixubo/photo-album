//
//  ViewController.h
//  调用相册换图片
//
//  Created by 翟旭博 on 2022/11/8.
//

#import <UIKit/UIKit.h>
// 系统相机
#import <AVFoundation/AVFoundation.h>
// 系统相册
#import <AssetsLibrary/AssetsLibrary.h>
@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UIImagePickerController *imagePicker;
@end

