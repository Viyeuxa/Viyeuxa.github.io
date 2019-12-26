#import "PSDetailController.h"

@interface DevicePINController : PSDetailController {
    BOOL _allowOptionsButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    NSString *_doneButtonTitle;
    NSString *_error1;
    NSString *_error2;
    BOOL _hasBeenDismissed;
    BOOL _hidesCancelButton;
    BOOL _hidesNavigationButtons;
    NSString *_lastEntry;
    int _mode;
    UIBarButtonItem *_nextButton;
    NSNumber *_numericPIN;
    NSString *_oldPassword;
    id _pinDelegate;
    NSNumber *_pinLength;
    NSNumber *_requiresKeyboard;
    NSDictionary *_sepLockInfo;
    long _sepOnceToken;
    BOOL _shouldDismissWhenDone;
    NSNumber *_simplePIN;
    int _substate;
    BOOL _success;
    BOOL _useSEPLockInfo;
}

@property (nonatomic) BOOL allowOptionsButton;
@property (nonatomic, copy) NSString *doneButtonTitle;
@property (nonatomic) BOOL hidesCancelButton;
@property (nonatomic) BOOL hidesNavigationButtons;
@property (getter=isNumericPIN, nonatomic) BOOL numericPIN;
@property (nonatomic) id pinDelegate;
@property (nonatomic) int pinLength;
@property (nonatomic) BOOL requiresKeyboard;
@property (nonatomic) BOOL shouldDismissWhenDone;
@property (nonatomic) BOOL simplePIN;

+ (BOOL)settingEnabled;

- (void)_adjustUnblockTime;
- (BOOL)_asyncSetPinCompatible;
- (void)_clearBlockedState;
- (void)_dismiss;
- (int)_getScreenType;
- (void)_invalidateSEPLockInfo;
- (void)_preflightPasswordForWeakness:(id)arg1 withCompletion:(id)arg2;
- (void)_rereadBlockedState;
- (double)_secondsToBlockForFailedAttempts:(long)arg1;
- (id)_sepLockInfo;
- (void)_setNumberOfFailedAttempts:(long)arg1;
- (void)_setPINPaneToSimple:(BOOL)arg1 simpleLength:(int)arg2 numeric:(BOOL)arg3 requiresKeyboard:(int)arg4;
- (void)_setUnblockTime:(double)arg1;
- (BOOL)_shouldCheckForWeakness;
- (BOOL)_shouldShowOptionsButton;
- (void)_showFailedAttempts;
- (void)_showPINConfirmationError;
- (void)_showUnacceptablePINError:(id)arg1 password:(id)arg2;
- (int)_simplePasscodeType;
- (void)_slidePasscodeFieldLeft:(BOOL)arg1;
- (void)_updateErrorTextAndFailureCount:(BOOL)arg1;
- (void)_updatePINButtons;
- (void)_updateUI;
- (BOOL)_useSEPLockInfo;
- (void)adjustButtonsForPasswordLength:(unsigned int)arg1;
- (BOOL)allowOptionsButton;
- (BOOL)attemptValidationWithPIN:(id)arg1;
- (struct __CFString)blockTimeIntervalKey;
- (struct __CFString)blockedStateKey;
- (double)blockedTimeRemaining;
- (void)cancelButtonTapped;
- (BOOL)completedInputIsValid:(id)arg1;
- (void)dealloc;
- (struct __CFString)defaultsID;
- (NSString *)doneButtonTitle;
- (struct __CFString)failedAttemptsKey;
- (BOOL)hidesCancelButton;
- (BOOL)hidesNavigationButtons;
- (id)init;
- (BOOL)isBlocked;
- (BOOL)isCreatingPasscode;
- (BOOL)isNumericPIN;
- (void)loadView;
- (int)mode;
- (long)numberOfFailedAttempts;
- (struct CGSize)overallContentSizeForViewInPopover;
- (id)passcodeOptionsAlertController;
- (void)performActionAfterPINEntry;
- (void)performActionAfterPINRemove;
- (void)performActionAfterPINSet;
- (id)pinDelegate;
- (void)pinEntered:(id)arg1;
- (id)pinInstructionsPrompt;
- (id)pinInstructionsPromptFont;
- (BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2;
- (int)pinLength;
- (id)pinPane;
- (BOOL)requiresKeyboard;
- (void)setAllowOptionsButton:(BOOL)arg1;
- (void)setDoneButtonTitle:(NSString *)arg1;
- (void)setHidesCancelButton:(BOOL)arg1;
- (void)setHidesNavigationButtons:(BOOL)arg1;
- (void)setLastEntry:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setNumericPIN:(BOOL)arg1;
- (void)setOldPassword:(id)arg1;
- (void)setPIN:(id)arg1;
- (void)setPIN:(id)arg1 completion:(id)arg2;
- (void)setPane:(id)arg1;
- (void)setPinDelegate:(id)arg1;
- (void)setPinLength:(int)arg1;
- (void)setRequiresKeyboard:(BOOL)arg1;
- (void)setShouldDismissWhenDone:(BOOL)arg1;
- (void)setSimplePIN:(BOOL)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setSuccess:(BOOL)arg1;
- (BOOL)shouldDismissWhenDone;
- (void)showPasscodeOptions:(id)arg1;
- (BOOL)showSimplePINCancelButtonOnLeft;
- (BOOL)simplePIN;
- (id)stringsBundle;
- (id)stringsTable;
- (BOOL)success;
- (void)suspend;
- (id)title;
- (double)unblockTime;
- (BOOL)useProgressiveDelays;
- (BOOL)validatePIN:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willUnlock;

@end