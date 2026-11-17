/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.globals

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GLOBALS2 GLOBALS2;
struct GLOBALS2 {
    char unused;
};

const char* GLOBALS2_GETCURRENTLOCATION = "Get Current Location";
const char* GLOBALS2_GETCURRENTHOMELOCATION = "Get Current Home Location";
const char* GLOBALS2_GENERATEALLSTORES = "Generate All Stores";
const char* GLOBALS2_LICENSEAGREEMENT = "License Agreement";
const char* GLOBALS2_CREATEDATABASES = "Create Databases";
const char* GLOBALS2_VIEWNAME = "VIEW_NAME";
const char* GLOBALS2_SETSHIPPINGTYPE = "Set Shipping Type";
const char* GLOBALS2_VIEWSUMMARY = "View Summary";
const char* GLOBALS2_SET = "Set";
const char* GLOBALS2_SELECT = "Select";
const char* GLOBALS2_SELECTNEW = "Select New";
const char* GLOBALS2_SELECTEXISTING = "Select Existing";
const char* GLOBALS2_PROCESS = "Process";
const char* GLOBALS2_LOGINSUCCESS = "Login Successful";
const char* GLOBALS2_LOGINFAILED = "Login Failed";
const char* GLOBALS2_NONE = "None";
const char* GLOBALS2_TOP = "Top";
const char* GLOBALS2_LEFT = "Left";
const char* GLOBALS2_RIGHT = "Right";
const char* GLOBALS2_BACK = "Back";
const char* GLOBALS2_BOTTOM = "Bottom";
const char* GLOBALS2_FRONT = "Front";
const char* GLOBALS2_AUTHORIZE = "Authorize";
const char* GLOBALS2_AUTHORIZEANDEVALBODY = "Authorize AND EVAL BODY";
const char* GLOBALS2_AUTHORIZEANDEVALBODYONERROR = "Authorize AND EVAL BODY On Error";
const char* GLOBALS2_AUTHORIZEORDEREVALBODYONERROR = "Authorize Order Eval On Error";
const char* GLOBALS2_AUTHORIZEFORMEVALBODYONERROR = "Authorize Form Eval On Error";
const char* GLOBALS2_AUTHORIZEORDERANDSKIPBODY = "Authorize Order Skip";
const char* GLOBALS2_AUTHORIZEORDERANDEVALBODY = "Authorize Order Eval";
const char* GLOBALS2_EDITPRICING = "Edit Pricing";
const char* GLOBALS2_UPDATEPRICING = "Update Pricing";
const char* GLOBALS2_SETPAYMENTMETHOD = "Set Payment Method";
const char* GLOBALS2_BACKUP = "Backup";
const char* GLOBALS2_RESTORE = "Restore";
const char* GLOBALS2_SUMMARY = "Summary";
const char* GLOBALS2_DESCRIPTION = "Description";
const char* GLOBALS2_IMG = "img";
const char* GLOBALS2_HREF = "href";
const char* GLOBALS2_KEYWORD = "keyword";
const char* GLOBALS2_TYPE = "TYPE";
const char* GLOBALS2_DATA = "DATA";
const char* GLOBALS2_NUM = "NUM";
const char* GLOBALS2_PRICE = "PRICE";
const char* GLOBALS2_REGISTER = "Register";
const char* GLOBALS2_CHECKOUT = "Checkout";
const char* GLOBALS2_ADMINCOMMAND = "AdminCommand";
const char* GLOBALS2_PROCESSBODYIFNOTAUTHENTICATED = "Not Authenticated";
const char* GLOBALS2_PROCESSBODYIFAUTHENTICATED = "Authenticated";
const char* GLOBALS2_PROCESSTRANSACTION = "Process Transaction";
const char* GLOBALS2_NEWPASSWORD = "New Password";
const char* GLOBALS2_CHANGEPASSWORD = "Change Password";
const char* GLOBALS2_JDBCDRIVER = "Jdbc Driver";
const char* GLOBALS2_WEBAPPPATH = "Webapp Path";
const char* GLOBALS2_AMOUNTVALUE = "Amount Value";
const char* GLOBALS2_GETORDERIDFROMSESSION = "Get Order Id From Session";
const char* GLOBALS2_SETUPPAYMENTMETHODS = "Setup Payment Methods";
const char* GLOBALS2_CANCELSTOREFRONT = "Cancel Store Front";
const char* GLOBALS2_ADJUST = "Adjust";
const char* GLOBALS2_ISASUBSET = "Is a Subset";
const char* GLOBALS2_NOTASUBSET = "Not a Subset";
const char* GLOBALS2_GENERATE = "Generate";
const char* GLOBALS2_VIEW = "View";
const char* GLOBALS2_EDIT = "Edit";
const char* GLOBALS2_NEW = "New";
const char* GLOBALS2_SEARCH = "Search";

GLOBALS2* GLOBALS2_new(void);

void GLOBALS2_init(GLOBALS2* this) {
}

GLOBALS2* GLOBALS2_new(void) {
    GLOBALS2* this = calloc(1, sizeof(GLOBALS2));
    GLOBALS2_init(this);
    return this;
}

