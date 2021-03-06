/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import "UITableViewDelegate.h"
#import "PhoneViewController.h"
#import "ABPersonViewControllerDelegate.h"
#import "ABUnknownPersonViewControllerDelegate.h"

@class NSArray, NSString, VoicemailControlsView, VoicemailMailboxController, VoicemailSetupPlacard, VoicemailPlaybackController;

__attribute__((visibility("hidden")))
@interface VoicemailViewController : PhoneViewController <ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate, UITableViewDelegate> {
	VoicemailMailboxController* _mailboxController;
	VoicemailPlaybackController* _playbackController;
	NSString* _unknownCardViewerPhoneNumber;
	NSArray* _unknownCardViewerDates;
	VoicemailControlsView* _controlsView;
	VoicemailSetupPlacard* _setupPlacard;
	unsigned _isInboxController : 1;
}
+(id)contactCardDateFormatter;
+(XXStruct_ndkk2A)badge;
+(int)tabViewType;
-(void)unknownPersonViewController:(id)controller didResolveToPerson:(void*)person;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)_showCardViewerForRecord:(void*)record displayName:(id)name animate:(BOOL)animate;
-(void)voicemailMailboxController:(id)controller entryDisclosureSelected:(void*)selected usingDisplayName:(id)name;
-(void)voicemailmailboxController:(id)controller recordUntrashed:(void*)untrashed countRemaining:(int)remaining;
-(void)voicemailmailboxController:(id)controller recordDeleted:(void*)deleted countRemaining:(int)remaining;
-(void)voicemailMailboxController:(id)controller allRecordsDeletedWithCountRemaining:(int)countRemaining;
-(void)_popToInboxIfNecessaryForCurrentTrashedCount:(int)currentTrashedCount;
-(void)voicemailMailboxController:(id)controller entrySelected:(void*)selected;
-(void)_updatePlaybackControlsForNullRecord;
-(void)voicemailMailboxControllerExtraRowSelected:(id)selected;
-(void)_checkForFailedSetup;
-(void)voicemailSetupPlacardClicked:(id)clicked;
-(void)_audioButtonClicked:(id)clicked;
-(void)_greetingButtonClicked:(id)clicked;
-(void)mailboxSetupStateChanged;
-(void)_voicemailTaskStartedOrEnded:(id)ended;
-(void)_lazySync;
-(BOOL)shouldSnapshot;
-(void)unloadView;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)setShowSetupPlacard:(BOOL)placard;
-(void)_addControlsSubview;
-(void)updateNavBarButtons;
-(void)updateNavTitle;
-(id)mailboxController;
-(void)loadView;
-(void)dealloc;
-(void)destroyView;
-(BOOL)isInboxController;
-(id)initAsInboxViewController:(BOOL)controller;
@end

