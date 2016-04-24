//
//  OCTContributor.m
//  OctoKit
//
//  Created by Robert Brambley on 4/24/16.
//  Copyright © 2016 GitHub. All rights reserved.
//

#import "OCTContributor.h"

@implementation OCTContributor

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
	return [super.JSONKeyPathsByPropertyKey mtl_dictionaryByAddingEntriesFromDictionary:
			@{ @"URL": @"url",
			   @"followersURL": @"followers_url",
			   @"followingURL": @"following_url",
			   @"gistsURL": @"gists_url",
			   @"starredURL": @"starred_url",
			   @"subscriptionsURL": @"subscriptions_url",
			   @"organizationsURL": @"organizations_url",
			   @"reposURL": @"repos_url",
			   @"eventsURL": @"events_url",
			   @"receivedEventsURL": @"receivedEvents_url",
			   @"type": @"type",
			   @"siteAdmin": @"site_admin",
			   @"contributions": @"contributions",
			  }];
}

@end
