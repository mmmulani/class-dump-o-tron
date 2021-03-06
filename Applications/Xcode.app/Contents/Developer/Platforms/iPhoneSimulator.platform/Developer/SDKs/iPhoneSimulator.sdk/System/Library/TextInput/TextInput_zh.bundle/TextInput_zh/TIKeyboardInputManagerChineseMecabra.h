//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInput_zh/TIKeyboardInputManagerChinese.h>

#import "TIKeyboardInputManagerChineseCompletion.h"

@class CIMCandidateData, NSArray, NSOperationQueue, NSString, TIConversionHistory, TIKeyboardCandidate, TIMecabraIMLogger;

@interface TIKeyboardInputManagerChineseMecabra : TIKeyboardInputManagerChinese <TIKeyboardInputManagerChineseCompletion>
{
    _Bool _usesCandidateSelection;
    CIMCandidateData *_candidateData;
    NSOperationQueue *_operationQueue;
    _Bool _isCandidateSelected;
    _Bool _acceptingCandidate;
    _Bool _isInHardwareKeyboardMode;
    _Bool _isInAmbiguousMode;
    _Bool _lockingFirstPinyinSyllable;
    _Bool _filterCandidatesUsingInputIndex;
    _Bool _updateInlineContextWhenAddingCandidate;
    TIConversionHistory *_conversionHistory;
    NSString *_remainingInput;
    NSString *_replacedAmbiguousPinyinSyllable;
    NSString *_replacementUnambiguousPinyinSyllable;
    NSString *_composedTextBeforeFirstSyllableLocked;
    NSArray *_pinyinSyllableCandidates;
    unsigned long long _selectedPinyinSyllableCandidateIndex;
    TIMecabraIMLogger *_logger;
    NSString *_cachedConvertedInput;
    NSString *_currentClientIdentifier;
    NSString *_currentRecipientIdentifier;
    NSArray *_recentlyCommittedCandidatesForReanalysis;
}

+ (id)stringFallBackForTenKeyInput:(id)arg1 range:(struct _NSRange)arg2;
+ (id)directlyCommittedCharacterSetForEmptyInline;
+ (id)ambiguousDefaults;
+ (id)ambiguousPinyinSet;
+ (Class)wordSearchClass;
@property(copy, nonatomic) NSArray *recentlyCommittedCandidatesForReanalysis; // @synthesize recentlyCommittedCandidatesForReanalysis=_recentlyCommittedCandidatesForReanalysis;
@property(copy, nonatomic) NSString *currentRecipientIdentifier; // @synthesize currentRecipientIdentifier=_currentRecipientIdentifier;
@property(copy, nonatomic) NSString *currentClientIdentifier; // @synthesize currentClientIdentifier=_currentClientIdentifier;
@property(copy, nonatomic) NSString *cachedConvertedInput; // @synthesize cachedConvertedInput=_cachedConvertedInput;
@property(nonatomic) _Bool updateInlineContextWhenAddingCandidate; // @synthesize updateInlineContextWhenAddingCandidate=_updateInlineContextWhenAddingCandidate;
@property(nonatomic) _Bool filterCandidatesUsingInputIndex; // @synthesize filterCandidatesUsingInputIndex=_filterCandidatesUsingInputIndex;
@property(retain, nonatomic) TIMecabraIMLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) unsigned long long selectedPinyinSyllableCandidateIndex; // @synthesize selectedPinyinSyllableCandidateIndex=_selectedPinyinSyllableCandidateIndex;
@property(retain, nonatomic) NSArray *pinyinSyllableCandidates; // @synthesize pinyinSyllableCandidates=_pinyinSyllableCandidates;
@property(copy, nonatomic) NSString *composedTextBeforeFirstSyllableLocked; // @synthesize composedTextBeforeFirstSyllableLocked=_composedTextBeforeFirstSyllableLocked;
@property(copy, nonatomic) NSString *replacementUnambiguousPinyinSyllable; // @synthesize replacementUnambiguousPinyinSyllable=_replacementUnambiguousPinyinSyllable;
@property(copy, nonatomic) NSString *replacedAmbiguousPinyinSyllable; // @synthesize replacedAmbiguousPinyinSyllable=_replacedAmbiguousPinyinSyllable;
@property(copy, nonatomic) NSString *remainingInput; // @synthesize remainingInput=_remainingInput;
@property(retain, nonatomic) TIConversionHistory *conversionHistory; // @synthesize conversionHistory=_conversionHistory;
- (_Bool)generateReanalysisCandidatesIfAppropriate;
- (id)locale;
- (id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2;
- (_Bool)firstSyllableLocked;
- (id)segmentedPinyinStringFromString:(id)arg1;
- (int)inputMethodType;
@property(readonly, nonatomic) TIKeyboardCandidate *candidateForInlineTextSegmentation;
@property(readonly, nonatomic, getter=isPhraseBoundarySet) _Bool phraseBoundarySet;
- (void)updateComposedText;
- (void)wordSearchEngineDidFindCandidates:(id)arg1 forOperation:(id)arg2;
- (id)stringByPrependingConvertedCandidateTextToString:(id)arg1;
- (id)stringByStrippingConvertedCandidateTextFromString:(id)arg1;
@property(readonly, nonatomic) NSString *convertedInput;
@property(readonly, nonatomic) NSString *unconvertedInput;
- (id)inputStringForSearch;
- (_Bool)updateCandidates;
- (id)keyEventMap;
- (_Bool)shouldLookForCompletionCandidates;
- (void)clearDynamicDictionary;
- (void)lastAcceptedCandidateCorrected;
- (id)didAcceptCandidate:(id)arg1;
- (void)addCandidateToAdaptationContext:(void *)arg1;
- (_Bool)canStartSentenceAfterString:(id)arg1;
- (id)sentenceDelimitingCharacters;
- (void)handleAcceptedPinyinDisambiguationCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2;
- (id)defaultCandidate;
- (_Bool)ignoresDeadKeys;
- (id)keyboardBehaviors;
- (void)_nop;
- (_Bool)shouldExtendPriorWord;
- (_Bool)commitsAcceptedCandidate;
- (_Bool)supportsSetPhraseBoundary;
- (_Bool)suppressCompletionsForFieldEditor;
- (_Bool)suppliesCompletions;
- (_Bool)usesCandidateSelection;
- (_Bool)usesAutoDeleteWord;
- (id)geometryModelData;
@property(readonly, nonatomic) _Bool usesGeometryModelData;
- (id)phoneticSortingMethod;
- (id)sortingMethods;
- (_Bool)hasExtensionEmojiCandidates;
- (id)candidateResultSet;
- (unsigned long long)phraseBoundary;
- (void)setPhraseBoundary:(unsigned long long)arg1;
- (void)setAutoCorrects:(_Bool)arg1;
- (_Bool)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1;
- (_Bool)shouldAddModifierSymbolsToWordCharacters;
- (id)searchStringForMarkedText;
- (void)inputLocationChanged;
- (void)clearInput;
- (void)resume;
- (id)deleteFromInput:(unsigned long long *)arg1;
- (unsigned long long)internalInputIndex;
- (unsigned long long)internalInputCount;
- (unsigned int)inputIndex;
- (unsigned int)inputCount;
- (id)inputString;
- (void)setInput:(id)arg1;
- (void)addInputToInternal:(id)arg1;
- (_Bool)handleDirectlyCommitForInput:(id)arg1 withContext:(id)arg2;
- (id)adaptationContextReadingForReanalysisString:(id)arg1;
- (id)remapInput:(id)arg1;
- (void)addInput:(id)arg1 withContext:(id)arg2;
- (void)adjustAdaptationContextIfNecessary;
- (id)addInput:(id)arg1 flags:(unsigned int)arg2 point:(struct CGPoint)arg3 firstDelete:(unsigned long long *)arg4 fromVariantKey:(_Bool)arg5;
- (_Bool)_shouldCommitInputDirectly:(id)arg1;
- (_Bool)inputContinuesGB18030OrUnicodeLookupKey:(id)arg1;
- (id)handleKeyboardInput:(id)arg1;
- (void)setInHardwareKeyboardMode:(_Bool)arg1;
- (id)keyboardConfigurationLayoutTag;
- (void)syncToLayoutState:(id)arg1;
- (unsigned int)externalIndexToInternal:(unsigned int)arg1;
- (unsigned int)internalIndexToExternal:(unsigned int)arg1;
- (id)internalStringToExternal:(id)arg1;
- (id)externalStringToInternal:(id)arg1;
- (_Bool)doesComposeText;
- (id)rawInputString;
- (id)internalInputString;
- (void)revertToAmbiguousPinyinSyllable;
- (void)clearPinyinSyllableSelection;
- (void)storeLanguageModelDynamicDataIncludingCache;
- (void)syncToKeyboardState:(id)arg1 afterContextChange:(_Bool)arg2;
- (id)newInputManagerState;
- (void)setLanguageModelContext;
- (void)didDeleteCandidates:(id)arg1;
- (void)loadAddressBook;
- (void)suspend;
- (void)dealloc;
- (_Bool)supportsNumberKeySelection;
- (id)initWithInputMode:(id)arg1;
- (void)checkAutocorrectionDictionaries;
- (void)setCollatorLocale;
- (void)loadDictionaries;

@end

