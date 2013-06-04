/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "DialerViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "PhoneViewController.h"
#import "MobilePhone-Structs.h"

@class NSTimer, NSString, UINavigationController, DialerView;

__attribute__((visibility("hidden")))
@interface DialerController : PhoneViewController <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, DialerViewDelegate, UIActionSheetDelegate> {
	DialerView* _dialerView;
	UINavigationController* _newContactNavigationController;
	NSTimer* _deleteTimer;
	NSTimer* _lookupTimer;
	NSString* _lastDialedNumberCache;
	NSString* _myPrefix;
	int _shouldUseMyPrefixAsHint;
	unsigned _calledNumber : 1;
	unsigned _didDeleteRepeat : 1;
}
@property(retain) NSString* lastDialedNumber;
+(id)defaultPNGName;
+(id)tabBarIconName;
+(id)tabBarIconImage;
+(id)tabBarIconImageName;
+(int)tabViewType;
-(void)_statusBarHeightChanged:(id)changed;
-(void)_handleSIMInsertionOrRemoval;
-(void)_deleteButtonDown:(id)down;
-(void)_deleteButtonClicked:(id)clicked;
-(void)_stopDeleteTimer;
-(void)_startDeleteTimer;
-(void)_deleteRepeat;
-(void)peoplePickerNavigationController:(id)controller insertEditorDidConfirm:(BOOL)insertEditor forPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldShowInsertEditorForPerson:(void*)person insertProperty:(int*)property copyInsertValue:(id*)value copyInsertLabel:(id*)label;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void*)newPerson;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)_dismissNewContactView:(BOOL)view;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)_addButtonClicked:(id)clicked;
-(void)_addToExistingContact;
-(void)_addToNewContact;
-(id)_qualifyNumberIfNecessary:(id)necessary;
-(void*)_newPersonWithValue:(id)value forMultiValueProperty:(int)multiValueProperty;
-(void)_hideNewContactView;
-(void)_showNewContactView;
-(void)_cancelVoicemailDial;
-(void)_dialVoicemail;
-(void)phonePad:(id)pad keyUp:(BOOL)up;
-(void)phonePad:(id)pad keyDown:(BOOL)down;
-(id)_myPrefix;
-(BOOL)_shouldUseMyPrefixAsHint;
-(void)phonePadDeleteLastDigit:(id)digit;
-(void)_phonePad:(id)pad appendString:(id)string suppressClearingDialedNumber:(BOOL)number;
-(void)phonePad:(id)pad appendString:(id)string;
-(void)_callButtonPressed:(id)pressed;
-(void)_updateCallButtonEnabledState:(id)state;
-(void)_updateLCDNameLabelWithOriginallyPastedString:(id)originallyPastedString;
-(void)_updateLCDNameLabelWithAMatchingName:(BOOL)amatchingName;
-(void)_updateCallButtonEnabledState:(id)state updateNameNow:(BOOL)now;
-(void)dialerView:(id)view stringWasPasted:(id)pasted;
-(void)dialerViewTextDidChange:(id)dialerViewText;
-(void)_getPersonName:(id*)name personLabel:(id*)label personUID:(int*)uid forPhoneNumberString:(id)phoneNumberString;
-(void)_updateName;
-(void)_stopLookupTimer;
-(BOOL)shouldSnapshot;
-(void)prepareForSnapshot;
-(void)_clearDisplayIfNecessary;
-(void)dealloc;
-(id)init;
-(void)applicationDidResume;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)isShowingDoubleHeightStatusBar;
-(void)unloadView;
-(void)didReceiveMemoryWarning;
-(void)loadView;
@end
