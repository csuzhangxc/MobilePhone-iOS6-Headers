/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "PhoneViewController.h"
#import "ABPersonViewControllerDelegate.h"
#import "ABUnknownPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerPrivateMemberCellDelegate.h"

@class ABPeoplePickerNavigationController, ABFavoritesEntry, UITableView, UIActionSheet, NSDictionary;

__attribute__((visibility("hidden")))
@interface FavoritesViewController : PhoneViewController <UITableViewDataSource, UITableViewDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate, ABPeoplePickerNavigationControllerPrivateMemberCellDelegate, UIActionSheetDelegate> {
	UITableView* _table;
	ABPeoplePickerNavigationController* _peoplePickerController;
	ABFavoritesEntry* _selectedABFavoritesEntry;
	UIActionSheet* _disambiguationSheet;
	NSDictionary* _disambiguationSheetContext;
	unsigned _suspended : 1;
	unsigned _ignoreFavoritesDidChangeNotification : 1;
	unsigned _postponeTableReloadFromFavoritesChange : 1;
	unsigned _needsTableReloadFromFavoritesChange : 1;
}
+(int)favoritesMode;
+(id)tabBarIconName;
+(int)tabBarSystemItem;
+(int)tabViewType;
+(BOOL)requiresNavigationControllerContainer;
-(void)unknownPersonViewController:(id)controller didResolveToPerson:(void*)person;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(void)accessoryButtonTapped:(id)tapped withEvent:(id)event;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)deleteButtonPressedForIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)selectedIndex;
-(int)absoluteIndexOfFilteredIndex:(int)filteredIndex;
-(id)filteredFavoriesList;
-(id)predicateForFilteringOutPhoneEntries;
-(id)predicateForFilteringOutFaceTimeEntries;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)_addButtonClicked:(id)clicked;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier withMemberCell:(id)memberCell;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person withLinkedPeople:(CFArrayRef)linkedPeople memberCell:(id)cell;
-(void)peoplePickerNavigationController:(id)controller insertEditorDidConfirm:(BOOL)insertEditor forPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldShowInsertEditorForPerson:(void*)person insertProperty:(int*)property copyInsertValue:(id*)value copyInsertLabel:(id*)label;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)dismissPeoplePicker;
-(void)_addEntryFromPeoplePickerForPerson:(void*)person property:(int)property identifier:(int)identifier animateView:(id)view;
-(void)_addEntryFromPeoplePickerForPerson:(void*)person property:(int)property identifier:(int)identifier animateView:(id)view favoritesEntryType:(int)type;
-(void)showCardViewerForPerson:(void*)person withTitle:(id)title animate:(BOOL)animate;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)_updateNavButtons;
-(void)_entryChanged:(id)changed;
-(void)handlePhotosEverywhereChangedNotification;
-(void)_phoneApplicationAddressBookChangedNotification:(id)notification;
-(void)_favoritesListContentsDidChange:(id)_favoritesListContents;
-(void)restoreState;
-(BOOL)shouldSnapshot;
-(void)unloadView;
-(void)didReceiveMemoryWarning;
-(void)savePreferences;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(id)favoritesList;
-(void)dealloc;
-(id)table;
@end

