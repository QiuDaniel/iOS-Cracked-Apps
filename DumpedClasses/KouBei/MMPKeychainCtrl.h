//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMPKeychain, NSMutableDictionary;

@interface MMPKeychainCtrl : NSObject
{
    MMPKeychain *_keychain;
    NSMutableDictionary *_valueBuffer;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 accessibleAttribute:(void *)arg3;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)values;
- (id)keychain;
- (_Bool)storeString:(id)arg1 forKey:(id)arg2 accessibleAttribute:(void *)arg3;
- (id)stringForKey:(id)arg1;
- (id)serviceName;

@end

