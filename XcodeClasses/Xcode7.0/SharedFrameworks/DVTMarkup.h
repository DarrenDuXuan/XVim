//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

#pragma mark -

//
// File: /Applications/Xcode-7GM.app/Contents/SharedFrameworks/DVTMarkup.framework/Versions/A/DVTMarkup
// UUID: B9A57862-AA43-3A77-8839-57E9AE749DBC
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 8004.0.0.0.0
//       Minimum Mac OS X version: 10.10.0
//                    SDK version: 10.11.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @executable_path/../Frameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/DVTMarkup.framework/Versions/Frameworks
//                       Run path: @loader_path/Frameworks
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks/DVTMarkup.framework/Versions/A/Frameworks
//                       Run path: @loader_path/../../..
//                               = /Applications/Xcode-7GM.app/Contents/SharedFrameworks
//

@interface DVTMarkdownParser : NSObject
{
    struct cmark_node *documentNode;
    struct cmark_node *traversingNode;
}

+ (id)generateHTMLStringFromMarkdown:(id)arg1 variant:(unsigned long long)arg2 usingOptions:(unsigned long long)arg3;
+ (id)generateHTMLStringFromMarkdown:(id)arg1 usingOptions:(unsigned long long)arg2;
+ (id)generateHTMLStringFromMarkdown:(id)arg1;
- (void)traverseOutputWithDelegate:(id)arg1;
- (id)generateHTMLStringWithLanguageVariant:(unsigned long long)arg1 usingOptions:(unsigned long long)arg2;
- (id)generateHTMLStringUsingOptions:(unsigned long long)arg1;
- (id)generateHTMLString;
@property(readonly) CDStruct_33dcf794 currentSourcePosition;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)initWithData:(id)arg1;

@end
