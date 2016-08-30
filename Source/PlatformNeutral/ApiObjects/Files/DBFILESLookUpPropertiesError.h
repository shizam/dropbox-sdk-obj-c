///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBSerializableProtocol.h"

@class DBFILESLookUpPropertiesError;

#pragma mark - API Object

/// 
/// The LookUpPropertiesError union.
/// 
/// This class implements the DBSerializable protocol (serialize and deserialize
/// instance methods), which is required for all Obj-C SDK API route objects.
/// 
@interface DBFILESLookUpPropertiesError : NSObject <DBSerializable> 

#pragma mark - Instance fields

/// The DBFILESLookUpPropertiesErrorTag enum type represents the possible tag
/// states with which the DBFILESLookUpPropertiesError union can exist.
typedef NS_ENUM(NSInteger, DBFILESLookUpPropertiesErrorTag) {
    /// This property group does not exist for this file.
    DBFILESLookUpPropertiesErrorPropertyGroupNotFound,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBFILESLookUpPropertiesErrorTag tag;

#pragma mark - Constructors

/// 
/// Initializes union class with tag state of PropertyGroupNotFound.
/// 
/// About the PropertyGroupNotFound tag state: This property group does not
/// exist for this file.
/// 
/// @return An initialized DBFILESLookUpPropertiesError instance.
/// 
- (nonnull instancetype)initWithPropertyGroupNotFound;

#pragma mark - Tag state methods

/// 
/// Retrieves whether the union's current tag state has value
/// PropertyGroupNotFound.
/// 
/// @return Whether the union's current tag state has value
/// PropertyGroupNotFound.
/// 
- (BOOL)isPropertyGroupNotFound;

/// 
/// Retrieves string value of union's current tag state.
/// 
/// @return A human-readable string representing the union's current tag state.
/// 
- (NSString * _Nonnull)tagName;

@end


#pragma mark - Serializer Object

/// 
/// The serialization class for the DBFILESLookUpPropertiesError union.
/// 
@interface DBFILESLookUpPropertiesErrorSerializer : NSObject 

/// 
/// Serializes DBFILESLookUpPropertiesError instances.
/// 
/// @param instance An instance of the DBFILESLookUpPropertiesError API object.
/// 
/// @return A json-compatible dictionary representation of the
/// DBFILESLookUpPropertiesError API object.
/// 
+ (NSDictionary * _Nonnull)serialize:(DBFILESLookUpPropertiesError * _Nonnull)instance;

/// 
/// Deserializes DBFILESLookUpPropertiesError instances.
/// 
/// @param dict A json-compatible dictionary representation of the
/// DBFILESLookUpPropertiesError API object.
/// 
/// @return An instantiation of the DBFILESLookUpPropertiesError object.
/// 
+ (DBFILESLookUpPropertiesError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end