//
//  StringConstant.h
//  swipriOS
//
//  Created by Golcha on 4/27/14.
//  Copyright (c) 2014 yetistep. All rights reserved.
//

#ifndef swipriOS_StringConstant_h
#define swipriOS_StringConstant_h

#define AppDelegate1 (AppDelegate *)[[UIApplication sharedApplication] delegate]
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

//#define BackgroundColor [UIColor colorWithRed:239/255.0f green:239/255.0f blue:239/255.0f alpha:1.0f];
#define BackgroundColor UIColorFromRGB(0XF5F5F5);
#define ThemeColor [UIColor colorWithRed:255/255.0f green:146/255.0f blue:53/255.0f alpha:1.0f]
#define TextColor [UIColor colorWithRed:0.455f green:0.455f blue:0.455f alpha:1.0f]
#define CellBackground [UIColor colorWithRed:0.929f green:0.933f blue:0.941f alpha:1.00f]

//payby colour

#define StrokeColor UIColorFromRGB(0Xe7e7e7);


#define NSUSERDEFAULT [NSUserDefaults standardUserDefaults]
//#define ThemeColor [UIColorFromRGB(FF9235)]


//Font constant
#define HELVETICA @"Helvetica"
#define HELVETICABOLD @"Helvetica-Bold"
#define REGULAR_FONT @"RobotoCondensed-Regular"
#define LIGHT_FONT @"RobotoCondensed-Light"


//ECSlidingview constants
#define MENU @"Menu"
#define HOME @"Home"
#define PROFILE @"Profile"
#define TRANSACTION @"Transactions"
#define ABOUT_US @"About Us"


//#define REGULAR_FONT @"Roboto-Regular"
//#define LIGHT_FONT @"Roboto-Thin"

#define PERK_LIST @"perklist"
#define DEAL_RECEIPT @"dealReceipt"
#define RECEIPT_LIST @"receiptList"
#define NOTIFICAION_LIST @"notificationList"

#define DEAL_DETAIL_IMAGE_PREVIEW_XIB @"DealDetailImagePreviewTableViewCell"
#define PROVIDE_FEEDBACK_XIB @"ProvideFeedback"
#define CURRENT_DISCOUNT_XIB @"CurrentDiscountTableViewCell"
#define COUPON_ACTION_XIB @"CouponActionTableViewCell"
#define QRCODE_XIB @"QRCodeView"
#define CALENDAR_XIB @"CalendarView"
#define MAP_XIB @"MapView"
#define REVIEW_XIB @"ReviewView"
//#define REVIEW_XIB @"ReviewViewController"


//general constants
#define kLOGGEDOUT @"loggedOut"
#define kFIRST_LUNCH @"first_lunch"
#define kADD @"Add"
#define kHEIGHT @"height"
#define kWIDTH @"width"
#define kBRAND @"brand"
#define kMODEL @"model"
#define kUUID @"uuid"
#define kCONNECTION_TYPE @"connection_type"
#define kNETWORK @"network"
#define kDPI @"dpi"
#define kDEVICETOKEN @"deviceToken"

//Facebook constants
#define kID  @"id"
#define kEMAIL  @"email"
#define kGENDER  @"gender"
#define kLINK  @"link"
#define kUPDATED_TIME  @"updated_time"
#define kNAME  @"name"
#define kEDITEDNAME  @"editedName"


// API constants
#define SERVER_URL @"server_url"
#define SERVICE_URL @"service_url"
#define SUCCESS @"success"
#define MESSAGE @"message"
#define ERROR_CODE @"errorCode"
#define ACCESS_TOKEN @"accessToken"

#define kALLOWSHARE @"allowShare"
#define kFacebookID @"facebookId"
#define kEMAILADDRESS @"emailAddress"
#define kDEVICE @"device"
#define kPROFILE @"profile"
#define kPROFILEURL @"profileUrl"
#define kPICTURE_URL  @"picture_url"
#define kFULLNAME @"fullName"
#define kRELATIONSHIP_STATUS  @"relationship_status"
#define kMARITALSTATUS @"maritalStatus"
#define kBIRTHDAY  @"birthday"
#define kDOB @"dob"
#define kMOBILENUMBER @"mobileNumber"
#define kADDRESSES @"addresses"
#define kADDRESS @"address"

#define kCLIENTID  @"clientId" //changed

#define kMOBILE @"mobile"
#define kCURRENT_POINT @"balance"
#define kREFERRAL_POINTS @"referral_reward_point"

#define kINTEREST @"interests"
#define kINTRET_ICON @"interestIcon"
#define kINTREST_SUBJECT @"interestSubject"

//deal
#define kPARAMS @"params"
#define kITEMS @"items"
#define kITEM @"item"
#define kITEMID @"itemId"
#define kCUSTOMITEM @"customItem"
#define kITEMSATTRIBUTE @"itemsAttribute"
#define kCATEGORIES @"categories"
#define kFEATUREDBRANDS @"featuredBrands"
#define kOTHERBRANDS @"otherBrands"
#define kRESULT @"result"
#define kCOUPONS @"coupons"
#define kGPSINFO @"gpsInfo"
#define kINTEREST_ICON @"intrestIcon"
#define kCONTACT_NO @"contactNo"
#define kSTART_DATE @"startDate"
#define kEND_DATE @"endDate"
#define kPROVIDER_LOGO @"providerLogo"
#define kDISPLAY_TIME @"displayTime"

#define kFINE_PRINT @"finePrint"
#define kBOOKMARK_STATUS @"isBookmark"
#define kPROVIDER_NAME @"providerName"
#define kBACKGROUND_IMAGE @"backgroundImage"
#define kRATING @"rating"
#define kREDEEM_TIME @"redeemTime"
#define kOFFER_NAME @"offerName"
#define kBOUGHT_COUNT @"boughtCount"
#define kAGE @"age"
#define kDESCRIPTION @"description"

#define kCLIENT_COUPON_INFO @"clientCouponInfo"
#define kFEEDBACK_LIST @"feedbackList"
#define kAVERAGE_RATING @"avgRating"

#define kBLUE_STAR @"star_blue.png"
#define kBLACK_STAR @"star_black.png"

#define kFBSHARE @"FBSHARE"
#define kQUIZ @"QUIZ"
#define kLEARNFACT @"LEARNFACT"
#define kIMAGE_SURVEY @"IMAGE_SURVEY"
#define kTEXT_SURVEY @"TEXT_SURVEY"
#define kVIDEO @"VIDEO"
#define kTWITTER @"TWITTER"

#define kMESSAGE @"message"

#define kVIEWORDER @"viewOrder"
#define kADDEDTOCART @"addedToCart"
#define kBRANDLOGO @"brandLogo"
#define kBRANDID @"brandId"
#define kBRANDNAME @"brandName"
#define kBRANDIMAGE @"brandImage"
#define kADDITIONALOFFER @"additionalOffer"
#define kNEARESTSTORELOCATION @"nearestStoreLocation"
#define kMINORDERAMOUNT @"minOrderAmount"
#define kSTORESTREET @"storeStreet"

#define kUNITPRICE @"unitPrice"
#define kTYPE @"type"
#define kNOTE @"note"
#define kSTORESBRAND @"storesBrand"
#define kCARTATTRIBUTES @"cartAttributes"
#define kORDERQUANTITY @"orderQuantity"
#define kMYCART @"myCart"
#define kCARTS @"carts"
#define kCART @"cart"
#define kIMAGEURL @"imageUrl"
#define kCARTDETAIL @"cartDetail"
#define kEMPTY @"empty"
#define kTOTALCART @"totalCart"
#define kCARTINFO @"cartInfo"
#define kMULTICARTPARAM @"multiCartParam"

#define kLASTADDRESSMOBILE @"lastAddressMobile"
#define kVERIFICATIONCODE @"verificationCode"
#define kSTREET @"street"
#define KCITY @"city"
#define kSTATE @"state"
#define KCOUNTRY @"country"
#define kCOUNTRYCODE @"countryCode"
#define kNOTES @"notes"
#define kCHECKOUTINFO @"checkOutInfo"
#define kORDERSCUSTOMERID @"ordersCustomerId"
#define kORDERSADDRESSID @"ordersAddressId"
#define kPAYMENTMOODE @"paymentMode"
#define kDELIVERYSTATUS @"deliveryStaus"
#define kGIVENLOCATION @"givenLocation"

#define kSEARCH @"search"
#define kCURRENCY @"currency"
#define kPLACEHOLDERIMAGE @"placeholderimage.png"
#define kORDERSTATUS @"orderStatus"
#define kORDERID @"orderId"
#define kORDER @"order"
#define kORDERPUSH @":order"
#define kCUSTOMER @"customer"

#define kCANCELLED @"CANCELLED"
#define kDELIVERED @"DELIVERED"

//Custom Cart
#define kCUSTOMCARTLIST @"customCartList"
#define kCARTCUSTOMITEM @"cartCustomItem"
#define kDEFAULTIMAGE @"defaultImage"
//helplineInfo
#define kHELPLINEINFO @"helplineInfo"

#define kKOOLKAT @"Koolkat"
#define kOK @"OK"
#define kCOLLECTIONS @"collections"
#define kBRANDSCOLlECTION @"brandsCollection"

#define kCLOSEDDAYS @"closedDays"
#define kSERVICECHARGEAPPLICABILITY @"serviceChargeApplicability"
#define kSERVINGDISTANCE @"servingDistance"

#define kFROMVIEWORDER @"fromViewOrder"
#define kFROMSEARCH @"fromSearch"
#define kFROMPRODUCTDETAIL  @"fromProductDetail"
#define kNAVIGATEDFROM @"navigatedFrom"
#define kFROMSTORE @"fromStore"
#define kFROMMULTICART @"fromMultiCart"
#define kATTRIBUTEID @"attributeId"

#define kINDIA @"india"
#define kNEPAL @"nepal"

#endif


