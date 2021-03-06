/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import "UIApplicationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow, UIActionSheet, NSArray, PhoneRootViewController, NSString, UIViewController;
@protocol PhoneBaseViewController;

__attribute__((visibility("hidden")))
@interface PhoneApplication : XXUnknownSuperclass <UIApplicationDelegate> {
	PhoneRootViewController* _rootController;
	UIWindow* _window;
	UIViewController<PhoneBaseViewController>* _currentController;
	UIActionSheet* _currentActionSheet;
	double _launchTime;
	unsigned _isDialingCall : 1;
	unsigned _suspendingApplication : 1;
	unsigned _resumingApplication : 1;
	unsigned _applicationResumedViaURL : 1;
	unsigned _alwaysShowVideoConferenceController : 1;
	unsigned _contentViewCanRotate : 1;
	unsigned _tabBarCanSlide : 1;
	int _userInterfaceStyle;
	NSArray* _signalHandlers;
	NSString* _cachedApplicationBadgeString;
}
@property(retain, nonatomic) UIWindow* window;
@property(assign, nonatomic) UIViewController<PhoneBaseViewController>* currentController;
@property(readonly, assign, nonatomic) NSArray* signalHandlers;
@property(readonly, assign, nonatomic) BOOL resumingApplication;
@property(readonly, assign, nonatomic) BOOL suspendingApplication;
@property(readonly, assign, nonatomic) int userInterfaceStyle;
@property(readonly, assign, nonatomic) BOOL tabBarCanSlide;
@property(readonly, assign, nonatomic) BOOL contentViewCanRotate;
@property(readonly, assign, nonatomic) BOOL alwaysShowVideoConferenceController;
@property(readonly, assign, nonatomic) BOOL applicationResumedViaURL;
+(id)sharedNumberFormatter;
+(id)viewControllerForTabViewType:(int)tabViewType;
+(id)viewControllerForRootViewType:(int)rootViewType;
+(Class)controllerClassForTabViewType:(int)tabViewType;
-(BOOL)isFaceTimeApplication;
-(BOOL)shouldHideTelephony;
-(BOOL)faceTimeIsAvailable;
-(BOOL)isDeviceCapableOfFaceTime;
-(BOOL)isDeviceCapableOfTelephony;
-(int)userInterfaceScreenType;
-(int)userInterfaceMode;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(BOOL)dialVoicemail;
-(BOOL)dialPhoneNumber:(id)number;
-(BOOL)dialPhoneNumber:(id)number dialAssist:(BOOL)assist;
-(BOOL)dialPhoneNumber:(id)number forUID:(int)uid dialAssist:(BOOL)assist;
-(BOOL)dialPhoneNumber:(id)number forUID:(int)uid dialAssist:(BOOL)assist wasAlreadyAssisted:(BOOL)assisted;
-(BOOL)shouldAttemptPhoneCall;
-(void)_performDialOfNumber:(id)number withCall:(id)call;
-(void)handleResumeEvent:(GSEventRef)event;
-(void)handleSuspendEvent:(GSEventRef)event;
-(BOOL)handleEvent:(GSEventRef)event withNewEvent:(id)newEvent;
-(BOOL)shouldHangUpOnLock;
-(void)applicationOpenURL:(id)url;
-(BOOL)openURL:(id)url;
-(void)_updateApplicationBadge;
-(void)setApplicationBadgeString:(id)string;
-(void)setIgnoresInteractionEvents:(BOOL)events;
-(BOOL)runTest:(id)test options:(id)options;
-(void)startSwitchTest;
-(void)startScrollTest;
-(void)_scroll;
-(void)_revertAddressBook;
-(void)_releaseAddressBook;
-(void*)existingAddressBook;
-(void*)addressBook;
-(void)_displayedCallsChanged:(id)changed;
-(void)_faceTimeDismissed:(id)dismissed;
-(void)didReceiveMemoryWarning;
-(id)currentViewController;
-(void)_logSwitch;
-(BOOL)handleDoubleHeightStatusBarTap:(int)tap;
-(int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
-(void)dismissActionSheet;
-(void)clearActionSheet;
-(void)presentActionSheet:(id)sheet fromToolBarItem:(id)toolBarItem;
-(void)presentActionSheet:(id)sheet;
-(BOOL)isDisplayingSheet;
-(void)_faceTimeAvailabilityChanged:(id)changed;
-(void)_localeChangedNotification:(id)notification;
-(double)launchTime;
-(void)userDefaultsDidChange:(id)userDefaults;
-(void)dealloc;
-(CGRect)phoneViewTabBarContentFrame;
-(void)showInitialView;
-(void)_initializeUI;
-(void)_handleVoicemailUIStatusChangedNotification:(id)notification;
-(id)rootViewController;
-(void)_resetCurrentViewController;
-(void)applicationDidResumeForEventsOnly;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationDidResume;
-(void)applicationDidResumeFromUnderLock;
-(void)applicationDidEndResumeAnimation;
-(void)applicationResume:(GSEventRef)resume;
-(void)handleApplicationFinishedSnapshottingNotification:(id)notification;
-(BOOL)applicationSuspend:(GSEventRef)suspend settings:(id)settings;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)prepareForDefaultImageSnapshot;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(BOOL)shouldSnapshot;
-(void)applicationDidFinishLaunching:(id)application;
-(id)localizedCarrierName;
-(void)_handleCallControlFailure:(id)failure;
-(BOOL)inAirplaneMode;
-(id)ttyTitle;
-(BOOL)promptForTTY;
-(BOOL)toggleMute;
-(BOOL)setMuted:(BOOL)muted;
-(BOOL)isMuted;
-(CTServerConnectionRef)_serverConnection;
-(void)setShouldSuspendAfterLastCall:(BOOL)suspendAfterLastCall;
-(BOOL)shouldSuspendAfterLastCall;
-(BOOL)callInterruptedAnApplication;
-(id)conferenceParticipantCalls;
-(id)incomingCall;
-(id)conferenceCall;
-(void)forceUpdateOfCallList;
-(void)forceDisconnectOfCall:(id)call;
-(void)forceCallOutOfConference:(id)conference;
-(void)forceCallIntoConference:(id)conference;
-(void)forceCallActive:(id)active;
-(void)resumeCallChangeNotifications;
-(void)suspendCallChangeNotifications;
-(id)displayedCalls;
-(id)displayedCall;
-(void)_invalidatePrivateSetting;
-(BOOL)canTakeCallsPrivate;
-(BOOL)canMergeCalls;
-(BOOL)justAnIncomingCallExists;
-(BOOL)inOutgoingCall;
-(BOOL)inCall;
-(void)updatePushReliabilityStatus;
-(void)_updateCallCount:(CTCallRef)count force:(BOOL)force;
-(void)_updateActiveCalls:(id)calls;
-(void)_setConferenceParticipants:(id)participants;
-(void)_setActiveCalls:(id)calls;
-(void)_removeActiveCall:(id)call;
-(BOOL)isAboutToIssueDisconnectOfLastCall;
-(void)_addActiveCall:(id)call;
-(void)_postConferenceParticipantsChanged;
-(void)_postDisplayedCallsChanged;
-(void)_setIncomingCall:(id)call;
-(void)_resetState;
-(void)registerForNotifications;
-(void)requestSuspendAfterLastCall;
-(void)requestSuspendWithTransparencyAfterLastCall;
-(void)_forceWindowFront;
-(BOOL)initiateFaceTimeCallForPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)shouldSuspendAfterVC;
-(BOOL)faceTimeInvitationExists;
-(BOOL)inFaceTime;
@end

