#import <Foundation/Foundation.h>
#import "GHResource.h"
#import "GHUser.h"
#import "GHFeed.h"


@class GHIssues, GHNetworks, GHBranches;

@interface GHRepository : GHResource {
	NSString *name;
	NSString *owner;
	NSString *descriptionText;
	NSURL *githubURL;
	NSURL *homepageURL;
	NSInteger forks;
	NSInteger watchers;
    GHIssues *openIssues;
    GHIssues *closedIssues;
    GHNetworks *networks;
    GHBranches *branches;
	BOOL isPrivate;
	BOOL isFork;
}

@property(nonatomic,retain)NSString *name;
@property(nonatomic,retain)NSString *owner;
@property(nonatomic,retain)NSString *descriptionText;
@property(nonatomic,retain)NSURL *githubURL;
@property(nonatomic,retain)NSURL *homepageURL;
@property(nonatomic,retain)GHIssues *openIssues;
@property(nonatomic,retain)GHIssues *closedIssues;
@property(nonatomic,retain)GHNetworks *networks;
@property(nonatomic,retain)GHBranches *branches;
@property(nonatomic,readonly)GHUser *user;
@property(nonatomic,readwrite)NSInteger forks;
@property(nonatomic,readwrite)NSInteger watchers;
@property(nonatomic,readwrite)BOOL isPrivate;
@property(nonatomic,readwrite)BOOL isFork;

- (id)initWithOwner:(NSString *)theOwner andName:(NSString *)theName;
- (void)setOwner:(NSString *)theOwner andName:(NSString *)theName;
- (int)compareByName:(GHRepository*)repo;

@end
