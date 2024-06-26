///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBTasks.h"

@class DBNilObject;
@class DBTEAMCOMMONTimeRange;
@class DBTEAMLOGEventCategory;
@class DBTEAMLOGEventTypeArg;
@class DBTEAMLOGGetTeamEventsContinueError;
@class DBTEAMLOGGetTeamEventsError;
@class DBTEAMLOGGetTeamEventsResult;
@class DBTEAMLOGTeamEvent;

@protocol DBTransportClient;

///
/// Routes for the `TeamLog` namespace
///

NS_ASSUME_NONNULL_BEGIN

@interface DBTEAMLOGTeamAuthRoutes : NSObject

/// An instance of the networking client that each route will use to submit a
/// request.
@property (nonatomic, readonly) id<DBTransportClient> client;

/// Initializes the `DBTEAMLOGTeamAuthRoutes` namespace container object with a
/// networking client.
- (instancetype)init:(id<DBTransportClient>)client;

///
/// Retrieves team events. If the result's `hasMore` in `DBTEAMLOGGetTeamEventsResult` field is true, call
/// `getEventsContinue` with the returned cursor to retrieve more entries. If end_time is not specified in your request,
/// you may use the returned cursor to poll `getEventsContinue` for new events. Many attributes note 'may be missing due
/// to historical data gap'. Note that the file_operations category and & analogous paper events are not available on
/// all Dropbox Business plans /business/plans-comparison. Use features/get_values
/// /developers/documentation/http/teams#team-features-get_values to check for this feature. Permission : Team Auditing.
///
///
/// @return Through the response callback, the caller will receive a `DBTEAMLOGGetTeamEventsResult` object on success or
/// a `DBTEAMLOGGetTeamEventsError` object on failure.
///
- (DBRpcTask<DBTEAMLOGGetTeamEventsResult *, DBTEAMLOGGetTeamEventsError *> *)getEvents;

///
/// Retrieves team events. If the result's `hasMore` in `DBTEAMLOGGetTeamEventsResult` field is true, call
/// `getEventsContinue` with the returned cursor to retrieve more entries. If end_time is not specified in your request,
/// you may use the returned cursor to poll `getEventsContinue` for new events. Many attributes note 'may be missing due
/// to historical data gap'. Note that the file_operations category and & analogous paper events are not available on
/// all Dropbox Business plans /business/plans-comparison. Use features/get_values
/// /developers/documentation/http/teams#team-features-get_values to check for this feature. Permission : Team Auditing.
///
/// @param limit The maximal number of results to return per call. Note that some calls may not return limit number of
/// events, and may even return no events, even with `has_more` set to true. In this case, callers should fetch again
/// using `getEventsContinue`.
/// @param accountId Filter the events by account ID. Return only events with this account_id as either Actor, Context,
/// or Participants.
/// @param time Filter by time range.
/// @param category Filter the returned events to a single category. Note that category shouldn't be provided together
/// with event_type.
/// @param eventType Filter the returned events to a single event type. Note that event_type shouldn't be provided
/// together with category.
///
/// @return Through the response callback, the caller will receive a `DBTEAMLOGGetTeamEventsResult` object on success or
/// a `DBTEAMLOGGetTeamEventsError` object on failure.
///
- (DBRpcTask<DBTEAMLOGGetTeamEventsResult *, DBTEAMLOGGetTeamEventsError *> *)
    getEvents:(nullable NSNumber *)limit
    accountId:(nullable NSString *)accountId
         time:(nullable DBTEAMCOMMONTimeRange *)time
     category:(nullable DBTEAMLOGEventCategory *)category
    eventType:(nullable DBTEAMLOGEventTypeArg *)eventType;

///
/// Once a cursor has been retrieved from `getEvents`, use this to paginate through all events. Permission : Team
/// Auditing.
///
/// @param cursor Indicates from what point to get the next set of events.
///
/// @return Through the response callback, the caller will receive a `DBTEAMLOGGetTeamEventsResult` object on success or
/// a `DBTEAMLOGGetTeamEventsContinueError` object on failure.
///
- (DBRpcTask<DBTEAMLOGGetTeamEventsResult *, DBTEAMLOGGetTeamEventsContinueError *> *)getEventsContinue:
    (NSString *)cursor;

@end

NS_ASSUME_NONNULL_END
