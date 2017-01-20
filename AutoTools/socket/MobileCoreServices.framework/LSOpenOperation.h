/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSOpenOperation : NSOperation {
    NSXPCConnection * _XPCConnection;
    NSString * _applicationIdentifier;
    <LSOpenResourceOperationDelegate> * _delegate;
    bool  _didSucceed;
    NSString * _documentIdentifier;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    NSDictionary * _options;
    NSURL * _resourceURL;
    bool  _sourceIsManaged;
    NSDictionary * _userInfoPlist;
    bool  _userSpecifiedApp;
}

@property (nonatomic, retain) NSXPCConnection *XPCConnection;
@property (nonatomic) bool didSucceed;
@property (nonatomic, copy) NSError *error;

+ (id)queue;

- (id)XPCConnection;
- (void)completeOperation;
- (void)dealloc;
- (bool)didSucceed;
- (id)error;
- (id)initForOpeningResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(bool)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (bool)performAppLinkOpen;
- (void)setDidSucceed:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setXPCConnection:(id)arg1;
- (void)start;

@end
