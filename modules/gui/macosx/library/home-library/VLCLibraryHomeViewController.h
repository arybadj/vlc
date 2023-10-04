/*****************************************************************************
 * VLCLibraryHomeViewController.h: MacOS X interface module
 *****************************************************************************
 * Copyright (C) 2023 VLC authors and VideoLAN
 *
 * Authors: Claudio Cambra <developer@claudiocambra.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>

@class VLCLibraryWindow;
@class VLCLibraryVideoCollectionViewsStackViewController;

@protocol VLCMediaLibraryItemProtocol;

NS_ASSUME_NONNULL_BEGIN

// Controller for the home library views

@interface VLCLibraryHomeViewController : NSObject

@property (readonly) VLCLibraryWindow *libraryWindow;
@property (readonly) NSView *libraryTargetView;
@property (readonly) NSView *homeLibraryView;
@property (readonly) NSScrollView *homeLibraryStackViewScrollView;
@property (readonly) NSStackView *homeLibraryStackView;
@property (readonly) NSSegmentedControl *segmentedTitleControl;
@property (readonly) NSImageView *placeholderImageView;
@property (readonly) NSTextField *placeholderLabel;
@property (readonly) NSView *emptyLibraryView;

@property (readonly) VLCLibraryVideoCollectionViewsStackViewController *stackViewController;

@property (readonly) NSArray<NSLayoutConstraint *> *homePlaceholderImageViewSizeConstraints;

- (instancetype)initWithLibraryWindow:(VLCLibraryWindow *)libraryWindow;
- (void)presentHomeView;

@end

NS_ASSUME_NONNULL_END