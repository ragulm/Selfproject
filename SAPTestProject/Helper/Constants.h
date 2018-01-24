//
//  Constants.h
//  mSecSales
//
//  Created by Arteria on 11/04/16.
//  Copyright (c) 2016 Arteria. All rights reserved.
//

#ifndef mSecSales_Constants_h
#define mSecSales_Constants_h


#define iOS7 [[[UIDevice currentDevice]systemVersion] floatValue] >= 7.0

#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

//#define titleColor [UIColor colorWithRed:((float)((183883 & 0xFF0000) >> 16))/255.0 \
//green:((float)((183883 & 0x00FF00) >>  8))/255.0 \
//blue:((float)((183883 & 0x0000FF) >>  0))/255.0 \
//alpha:1.0]

#define UIColorFromRGB(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0x00FF00) >>  8))/255.0 \
blue:((float)((rgbValue & 0x0000FF) >>  0))/255.0 \
alpha:1.0]

//#define StyleColor UIColorFromRGB(0xF0EFF5)
#define StyleColor UIColorFromRGB(0xFFFFFF)
static NSString *rupee=@"\u20B9";
static NSString *dateFormate = @"yyyy-MM-dd HH:mm:ss.SSSS";
//Application Registration Variables
//com.arteria.sampleApplication

// mobile-ab64db6e6.hana.ondemand.com // HCPMS ID4
static NSString * const appID = @"com.NativeTest.Arteria";//HCPMS // ID4//com.arteriatech.mSFA
//Singelton class objects
static BOOL isJKCustomization = FALSE;
//Logger
static NSString* kCustomLogger = @"CustomLogger";

static NSString* kStartButton = @"Start";
static NSString* kOnBeat = @"End";
static NSString* kEndButton = @"End";



//Error Codes
static NSString* ERROR_URL_NOT_PERMITTED = @"22";
static NSString* ERROR_NO_SERVER_RESPONCE = @"-1";
static NSString* ERROR_IMO_LIB_NOT_FOUND = @"-3";
static NSString* ERROR_UNKNOWN_ERROR = @"70003";
static NSString* ERROR_NO_REG_LIS = @"70004";
static NSString* ERROR_NO_CAPTCH = @"70009";
static NSString* ERROR_HTTP = @"80001";
static NSString* ERROR_PARSER = @"80002";
static NSString* ERROR_HOST_UN_REACHABLE = @"80003";
static NSString* ERROR_USER_AUTH = @"80004";
static NSString* ERROR_BAD_REQUEST = @"400";
static NSString* ERROR_UN_AUTH = @"401";
static NSString* ERROR_FORBIDDEN = @"403";
static NSString* ERROR_SERVER_NOT_FOUND = @"404";

//Error messages
static NSString* can_not_be_register = @"Can not register. URL is not permitted, Please contact channel team";
static NSString* reg_failed_no_server_res = @"No server response, Please contact channel team";
static NSString* imo_lib_not_found = @"IMO library isn\'t found, Please contact channel team";
static NSString* reg_failed_unknown_error = @"Unknown error, Please contact channel team";
static NSString* no_reg_listner = @"No registration listener";
static NSString* no_captch_listner= @"No CAPTCHA listener, Please contact channel team";
static NSString* http_error= @"Http error, Please contact channel team";
static NSString* parser_error= @"Parser error, Please contact channel team";
static NSString* host_is_unreachable= @"Host is unreachable, Please contact channel team";
static NSString* user_auth_error= @"User authentication error, Please contact channel team";
static NSString* error_bad_req= @"Bad request, Please contact channel team";
static NSString* error_un_autorized= @"Authentication failed. User will be locked after %1$s attempt(s). Please contact channel team";
static NSString* error_forbidden_error= @"Forbidden error, Please contact channel team";
static NSString* error_not_found= @"Server not found error, Please contact channel team";
//Appointment

//static NSString* kSSROGUID = @"SSROGUID";
//static NSString* kOrderType = @"OrderType";
//static NSString* kOrderTypeDesc = @"OrderTypeDesc";
//static NSString* kOrderNo = @"OrderNo";
//static NSString* kOrderDate = @"OrderDate";
//static NSString* kDmsDivision = @"DmsDivision";
//static NSString* kDmsDivisionDesc = @"DmsDivisionDesc";


//Logger
//static NSString* kCustomLogger = @"CustomLogger";

//Bill History
static NSString* kInvoiceNo = @"InvoiceNo";
static NSString* kNetAmount = @"NetAmount";
static NSString* kCurrency = @"Currency";
static NSString* kInvoiceDate = @"InvoiceDate";
static NSString* kPaymentStatusID = @"PaymentStatusID";
static NSString* kGrossAmount = @"GrossAmount";
static NSString* kSSInvoices = @"SSInvoices";
static NSString* kBillDate = @"BillDate";
//Bill Details
static NSString* kMaterialNo = @"MaterialNo";
static NSString* kMaterialDesc = @"MaterialDesc";
static NSString* kQuantity = @"Quantity";
static NSString* kUOM = @"UOM";
static NSString* kItemNo = @"ItemNo";
static NSString* kClearedAmount = @"ClearedAmount";

//Collection History
static NSString* kFIPDocNo = @"FIPDocNo";
static NSString* kAmount = @"Amount";
static NSString* kFIPDate = @"FIPDate";
static NSString* kPaymentModeDesc = @"PaymentModeDesc";
static NSString* kCollectionKeys = @"CollectionKeys";
static NSString* kFinancialPostings =@"FinancialPostings";
static NSString* kTime = @"Time";

//Collection Details
static NSString* kReferenceID = @"ReferenceID";
static NSString* kFIPGUID = @"FIPGUID";
static NSString* kInstrumentNo = @"InstrumentNo";
static NSString* kFIPItemNo = @"FIPItemNo";

//OutStanding List
static NSString* kOutstandingInvoices = @"OutstandingInvoices";
static NSString* kCollectionAmount = @"CollectionAmount";

//SnapShot
static NSString* kID = @"ID";
static NSString* kDescription = @"Description";
static NSString* kTypeValue = @"TypeValue";
static NSString* kMerchReviews = @"MerchReviews";
static NSString* kMerchReviewGUID = @"MerchReviewGUID";
static NSString* kLoginID = @"LoginID";
static NSString* kCPGUID = @"CPGUID";
static NSString* kCPNo = @"CPNo";
static NSString* kCPTypeID = @"CPTypeID";
static NSString* kSPGUID = @"SPGUID";
static NSString* kMerchReviewDate = @"MerchReviewDate";
static NSString* kMerchReviewType = @"MerchReviewType";
static NSString* kMerchReviewTypeDesc = @"MerchReviewTypeDesc";
static NSString* kMerchReviewLat = @"MerchReviewLat";
static NSString* kMerchReviewLong = @"MerchReviewLong";
static NSString* kMerchReviewImages = @"MerchReviewImages";
static NSString* kMerchImageGUID = @"MerchImageGUID";
static NSString* kImageMimeType = @"ImageMimeType";
static NSString* kJPEG = @"JPEG";
static NSString* kImageSize = @"ImageSize";
static NSString* kImage = @"Image";
static NSString* kRemarks = @"Remarks";


//Dealer List
static NSString* kName = @"Name";
static NSString* kCPName = @"CPName";
static NSString* kCPUID = @"CPUID";
static NSString* kGroup2Desc = @"Group2Desc";
static NSString* kAddress1 = @"Address1";
static NSString* kAddress2 = @"Address2";
static NSString* kAddress3 = @"Address3";
static NSString* kAddress4 = @"Address4";
static NSString* kLandmark = @"Landmark";
static NSString* kCityDesc = @"CityDesc";
static NSString* kDistrictDesc = @"DistrictDesc";
static NSString* kPostalCode = @"PostalCode";
static NSString* kMobile1 = @"MobileNo";

//Dealer Detail
static NSString* kEvaluationTypeDesc = @"EvaluationTypeDesc";
static NSString* kParentName = @"ParentName";
static NSString* kOwnerName = @"OwnerName";
static NSString* kEmailID = @"EmailID";
static NSString* kBTSCircle = @"BTSCircle";
static NSString* kCPTypeDesc = @"CPTypeDesc";
static NSString* kGroup3Desc = @"Group3Desc";
static NSString* kWeeklyOffDesc= @"WeeklyOffDesc";
static NSString* kDOB = @"DOB";
static NSString* kAnniversary = @"Anniversary";
static NSString* kRoutePlanGUID = @"RoutePlanGUID";
static NSString* kSPNo = @"SPNo";
static NSString* kSPName = @"SPName";
static NSString* kVisitDate = @"VisitDate";
static NSString* kStartDate = @"StartDate";
static NSString* kStartLat = @"StartLat";
static NSString* kStartLong = @"StartLong";
static NSString* kEndDate = @"EndDate";
static NSString* kEndTime = @"EndTime";
static NSString* kEndLat = @"EndLat";
static NSString* kEndLong = @"EndLong";
static NSString* kStatusID = @"StatusID";
static NSString* kStatusDesc = @"StatusDesc";
static NSString* kReason = @"Reason";
static NSString* kVisitGUID = @"VisitGUID";
static NSString* kVisitSeq = @"VisitSeq";
static NSString* kStartTime = @"StartTime";
static NSString* kCreatedBy = @"CreatedBy";
static NSString* kCreatedOn = @"CreatedOn";
static NSString* kCreatedAt = @"CreatedAt";
static NSString* kChangedBy = @"ChangedBy";
static NSString* kChangedOn = @"ChangedOn";
static NSString* kChangedAt = @"ChangedAt";
static NSString* kTestRun = @"TestRun";

//Synchronization

static NSString* kSOItems = @"SOItems";
static NSString* kInvoiceGUID= @"InvoiceGUID";
static NSString* kSoldToCPGUID = @"SoldToCPGUID";
static NSString* kInvoiceTypeID = @"InvoiceTypeID";
static NSString* kShipToCPGUID = @"ShipToCPGUID";
static NSString* kShipToID = @"ShipToID";
static NSString* kSoldToID = @"SoldToID";
static NSString* kSerialNos = @"SerialNos";
static NSString* kSPSNoGUID = @"SPSNoGUID";
static NSString* kInvoiceItemGUID = @"InvoiceItemGUID";
static NSString* kInvoiceItemSNoGUID = @"InvoiceItemSNoGUID";
static NSString* kSerialNoFrom = @"SerialNoFrom";
static NSString* kSerialNoTo = @"SerialNoTo";
static NSString* kOption = @"Option";
static NSString* kFIPDocType = @"FIPDocType";
static NSString* kParentNo = @"ParentNo";
static NSString* kSPFirstName = @"SPFirstName";
static NSString* kPaymentModeID = @"PaymentModeID";
static NSString* kBankID = @"BankID";
static NSString* kBankName = @"BankName";
static NSString* kBranchName = @"BranchName";
static NSString* kFIPAmount = @"FIPAmount";
static NSString* kFIPItemGUID = @"FIPItemGUID";
static NSString* kDebitCredit = @"DebitCredit";
static NSString* kReferenceTypeID = @"ReferenceTypeID";
static NSString* kPaymentMode = @"PaymentMode";
static NSString* kFeedbacks = @"Feedbacks";
static NSString* kFeebackGUID = @"FeebackGUID";
static NSString* kFeedbackType = @"FeedbackType";
static NSString* kLocation1= @"Location1";
static NSString* kLocation = @"Location";
static NSString* kBTSID = @"BTSID";
static NSString* kFeebackItemGUID = @"FeebackItemGUID";
static NSString* kStockGuid = @"StockGuid";
static NSString* kUnitPrice = @"UnitPrice";
static NSString* kSPStockItemGUID = @"SPStockItemGUID";
static NSString* kPrefixLength = @"PrefixLength";
static NSString* kRequestID= @"RequestID";
static NSString* kRepeatabilityCreation = @"RepeatabilityCreation";
static NSString* kVisitActivityGUID = @"VisitActivityGUID";
static NSString* kActivityType = @"ActivityType";
static NSString* kActivityRefID = @"ActivityRefID";
static NSString* kVisitActivities = @"VisitActivities";
static NSString* kVisitCatID = @"VisitCatID";
static NSString* kVisitCatDesc = @"VisitCatDesc";
static NSString* kVisitTypeID = @"VisitTypeID";
static NSString* kVisitTypeDesc = @"VisitTypeDesc";



// FeedBack
static NSString* kFeedbackItemDetail = @"FeedbackItemDetails";
static NSString* kFeedbackNo = @"FeedbackNo";
static NSString* kFeedbackTypeDesc = @"FeedbackTypeDesc";

//static NSString* kFeedbacks = @"Feedbacks";


//CompetitorInfo
static NSString* kCompetitorInfo = @"CompetitorInfos";




//Bundle Names

static NSString* kSSInvoiceSNo = @"SSInvoiceSNo";
static NSString* kCollectionCreate = @"CollectionCreate";
static NSString* kInvoiceHistory = @"InvoiceHistory";
static NSString* kValueSelection =  @"ValueSelection";
static NSString* kFeedbackListViewController =  @"FeedbackListViewController";
//FontNames
static NSString* kHelveticaNeue = @"Helvetica Neue";



//Return Order Create
static NSString* kSSROGUID = @"SSROGUID";
static NSString* kOrderType = @"OrderType";
static NSString* kOrderTypeDesc = @"OrderTypeDesc";
static NSString* kOrderNo = @"OrderNo";
static NSString* kOrderDate = @"OrderDate";
static NSString* kDmsDivision = @"DmsDivision";
static NSString* kDmsDivisionDesc = @"DmsDivisionDesc";
static NSString* kFromCPGUID = @"FromCPGUID";
static NSString* kFromCPNo = @"FromCPNo";
static NSString* kFromCPName = @"FromCPName";
static NSString* kFromCPTypId = @"FromCPTypId";
static NSString* kFromCPTypDs = @"FromCPTypDs";
static NSString* kSoldToIDReturnOrder = @"SoldToId";
static NSString* kSoldToUID = @"SoldToUID";
static NSString* kSoldToDesc = @"SoldToDesc";
static NSString* kSoldToTypeID = @"SoldToTypeID";
static NSString* kSoldToTypDesc = @"SoldToTypDesc";
static NSString* kFirstName = @"FirstName";
static NSString* kApprovalStatusID = @"ApprovalStatusID";

// Retailer List Drop Down
static NSString* kRegion = @"Region";
static NSString* kZone = @"Zone";
static NSString* kSD = @"SD";
static NSString* kDistributor = @"Distributor";

#endif





