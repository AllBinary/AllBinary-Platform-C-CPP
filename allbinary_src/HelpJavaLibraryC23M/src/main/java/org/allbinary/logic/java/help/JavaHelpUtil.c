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
// package org.allbinary.logic.java.help

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/event/ActionEvent.h"
// #include "java/io/File.h"
// #include "java/net/URI.h"
// #include "java/net/URL.h"
// #include "javax/help/CSH.h"
// #include "javax/help/HelpBroker.h"
// #include "javax/help/HelpSet.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct JavaHelpUtil JavaHelpUtil;
struct JavaHelpUtil {
    LogUtil* logUtil;
    Point* point;
    Dimension* dimension;
    ActionEvent* contextSensitiveHelpActionEvent;
    CommonStrings* commonStrings;
};

static JavaHelpUtil* JavaHelpUtil_instance;

JavaHelpUtil* JavaHelpUtil_new(void);
JavaHelpUtil* JavaHelpUtil_getInstance(void);

void JavaHelpUtil_init(JavaHelpUtil* this);
HelpSet* JavaHelpUtil_getHelpSet(JavaHelpUtil* this, const char* filePath);
HelpSet* JavaHelpUtil_getHelpSet(JavaHelpUtil* this, URL* url);
void JavaHelpUtil_show(JavaHelpUtil* this, HelpSet* helpSet);
void JavaHelpUtil_main(const char** args);

// Static fields with runtime initializers: call this once at startup
void JavaHelpUtil_staticInit(void) {
    JavaHelpUtil_instance = JavaHelpUtil_new();
}

static void JavaHelpUtil_initFields(JavaHelpUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->point = Point_new(0, 0);
    this->dimension = Dimension_new(640, 480);
    this->contextSensitiveHelpActionEvent = ActionEvent_new(JLabel_new(), ActionEvent_ACTION_FIRST, nullptr);
    this->commonStrings = CommonStrings_getInstance();
}


JavaHelpUtil* JavaHelpUtil_getInstance(void) {
        return JavaHelpUtil_instance;
}


void JavaHelpUtil_init(JavaHelpUtil* this) {
    JavaHelpUtil_initFields(this);
}

JavaHelpUtil* JavaHelpUtil_new(void) {
    JavaHelpUtil* this = calloc(1, sizeof(JavaHelpUtil));
    JavaHelpUtil_init(this);
    return this;
}


HelpSet* JavaHelpUtil_getHelpSet(JavaHelpUtil* this, const char* filePath) {
        JAVA_TRY {
            URI* helpSetURI = File_toURI(File_new(filePath));
            URL* helpSetURL = URI_toURL(helpSetURI);
            return JavaHelpUtil_getHelpSet(this, helpSetURL);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, JavaHelpUtil_getInstance(), "set", e);
            return nullptr;
        } JAVA_END_TRY;
}


// Java overloaded method: C needs a different name
HelpSet* JavaHelpUtil_getHelpSet(JavaHelpUtil* this, URL* url) {
        JAVA_TRY {
            return HelpSet_new(nullptr, url);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, JavaHelpUtil_getInstance(), "set", e);
            return nullptr;
        } JAVA_END_TRY;
}


void JavaHelpUtil_show(JavaHelpUtil* this, HelpSet* helpSet) {
        JAVA_TRY {
            HelpBroker* helpBroker = HelpSet_createHelpBroker(helpSet);
            HelpBroker_setLocation(helpBroker, this->point);
            HelpBroker_setSize(helpBroker, this->dimension);
            DisplayHelpFromSource_actionPerformed(DisplayHelpFromSource_new(helpBroker), this->contextSensitiveHelpActionEvent);
            LogUtil_putF(this->logUtil, "CSH Action", JavaHelpUtil_getInstance(), "show");
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, JavaHelpUtil_getInstance(), "show", e);
        } JAVA_END_TRY;
}


void JavaHelpUtil_main(const char** args) {
        JAVA_TRY {
            JavaHelpUtil* javaHelpUtil = JavaHelpUtil_getInstance();
            JavaHelpUtil_show(javaHelpUtil, JavaHelpUtil_getHelpSet(javaHelpUtil, "G:/mnt/bc/mydev/working/automation/InputAutomationJavaApplication/AllBinaryInputAutomationHelp/AllBinaryInputAutomation.hs"));
        } JAVA_CATCH(Exception, e) {
        } JAVA_END_TRY;
}

