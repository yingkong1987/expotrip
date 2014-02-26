/*
	OTA_FltSaveOrderSudzc.h
	Creates a list of the services available with the OTA_FltSaveOrder prefix.
	Generated by SudzC.com
*/
#import "OTA_FltSaveOrderOTA_FltSaveOrder.h"

@interface OTA_FltSaveOrderSudzC : NSObject {
	BOOL logging;
	NSString* server;
	NSString* defaultServer;
OTA_FltSaveOrderOTA_FltSaveOrder* oTA_FltSaveOrder;

}

-(id)initWithServer:(NSString*)serverName;
-(void)updateService:(SoapService*)service;
-(void)updateServices;
+(OTA_FltSaveOrderSudzC*)sudzc;
+(OTA_FltSaveOrderSudzC*)sudzcWithServer:(NSString*)serverName;

@property (nonatomic) BOOL logging;
@property (nonatomic, retain) NSString* server;
@property (nonatomic, retain) NSString* defaultServer;

@property (nonatomic, retain, readonly) OTA_FltSaveOrderOTA_FltSaveOrder* oTA_FltSaveOrder;

@end
			