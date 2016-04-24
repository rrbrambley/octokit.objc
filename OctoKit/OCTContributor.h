//
//  OCTContributor.h
//  OctoKit
//
//  Created by Robert Brambley on 4/24/16.
//  Copyright © 2016 GitHub. All rights reserved.
//

#import <OctoKit/OctoKit.h>

@interface OCTContributor : OCTEntity

@property (nonatomic, copy, readonly) NSURL *URL;

@property (atomic, copy, readonly) NSURL *followersURL;

@property (atomic, copy, readonly) NSURL *followingURL;

@property (atomic, copy, readonly) NSURL *gistsURL;

@property (atomic, copy, readonly) NSURL *starredURL;

@property (atomic, copy, readonly) NSURL *subscriptionsURL;

@property (atomic, copy, readonly) NSURL *organizationsURL;

@property (atomic, copy, readonly) NSURL *reposURL;

@property (atomic, copy, readonly) NSURL *eventsURL;

@property (atomic, copy, readonly) NSURL *receivedEventsURL;

@property (atomic, copy, readonly) NSString *type;

@property (atomic, readonly) BOOL siteAdmin;

@property (atomic, readonly) NSUInteger *contributions;

@end
