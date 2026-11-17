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
// package org.allbinary.input.automation.module.osgi

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/File.h"
// #include "java/io/FileFilter.h"
// #include "java/io/FileInputStream.h"
// #include "java/net/URL.h"
// #include "java/util/HashMap.h"
// #include "java/util/Set.h"
// #include "java/util/jar/JarInputStream.h"
// #include "java/util/jar/Manifest.h"
#include "org/osgi/framework/Bundle.h"
#include "org/osgi/framework/BundleContext.h"
#include "org/osgi/framework/Constants.h"
#include "bundle/input/automation/InputAutomationBundleActivator.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/file/FileWrapperUtil.h"
#include "org/allbinary/logic/io/file/directory/SubDirectory.h"
#include "org/allbinary/logic/io/file/filter/BasicFileFilterUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/thread/RunnableInterface.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct InputAutomationNewBundleRunnable InputAutomationNewBundleRunnable;
struct InputAutomationNewBundleRunnable {
    RunnableInterface RunnableInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    InputAutomationBundleActivator* inputAutomationBundleActivator;
    bool running;
    BasicArrayList* fileBasicArrayList;
};

static const char* InputAutomationNewBundleRunnable_FILE = "file:";
static const char* InputAutomationNewBundleRunnable_JAR_DIR_PROP = "org.knopflerfish.gosg.jars";
static const char* InputAutomationNewBundleRunnable_INPUT_AUTMATION_MODULE_BUNDLE_JAR_PATH = "ia/auto";
static constexpr int32_t InputAutomationNewBundleRunnable_MODULES_START_LEVEL = 8;

InputAutomationNewBundleRunnable* InputAutomationNewBundleRunnable_new(InputAutomationBundleActivator* inputAutomationBundleActivator);

void InputAutomationNewBundleRunnable_init(InputAutomationNewBundleRunnable* this, InputAutomationBundleActivator* inputAutomationBundleActivator);
void InputAutomationNewBundleRunnable_setThread(InputAutomationNewBundleRunnable* this, Thread* thread);
bool InputAutomationNewBundleRunnable_isRunning(InputAutomationNewBundleRunnable* this);
void InputAutomationNewBundleRunnable_setRunning(InputAutomationNewBundleRunnable* this, bool running);
static void InputAutomationNewBundleRunnable_updateModules(InputAutomationNewBundleRunnable* this);
static HashMap* InputAutomationNewBundleRunnable_getAllJarSymbolicNameHashMap(InputAutomationNewBundleRunnable* this);
static BasicArrayList* InputAutomationNewBundleRunnable_getJarModuleFileBasicArrayList(InputAutomationNewBundleRunnable* this);
static BasicArrayList* InputAutomationNewBundleRunnable_getInstalledJarSymbolicNameBasicArrayList(InputAutomationNewBundleRunnable* this);
static bool InputAutomationNewBundleRunnable_isInstalled(InputAutomationNewBundleRunnable* this, const char* symbolicName);
static BasicArrayList* InputAutomationNewBundleRunnable_findNewModules(InputAutomationNewBundleRunnable* this);
static Bundle* InputAutomationNewBundleRunnable_install(InputAutomationNewBundleRunnable* this, URL* url);
void InputAutomationNewBundleRunnable_run(InputAutomationNewBundleRunnable* this);

static void InputAutomationNewBundleRunnable_initFields(InputAutomationNewBundleRunnable* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
    this->running = false;
    
}


void InputAutomationNewBundleRunnable_init(InputAutomationNewBundleRunnable* this, InputAutomationBundleActivator* inputAutomationBundleActivator) {
    InputAutomationNewBundleRunnable_initFields(this);
        this->inputAutomationBundleActivator = inputAutomationBundleActivator;
        this->fileBasicArrayList = BasicArrayListD_new();
}

InputAutomationNewBundleRunnable* InputAutomationNewBundleRunnable_new(InputAutomationBundleActivator* inputAutomationBundleActivator) {
    InputAutomationNewBundleRunnable* this = calloc(1, sizeof(InputAutomationNewBundleRunnable));
    InputAutomationNewBundleRunnable_init(this, inputAutomationBundleActivator);
    return this;
}


// throws Exception
void InputAutomationNewBundleRunnable_setThread(InputAutomationNewBundleRunnable* this, Thread* thread) {
}


// synchronized
bool InputAutomationNewBundleRunnable_isRunning(InputAutomationNewBundleRunnable* this) {
        return this->running;
}


// synchronized
void InputAutomationNewBundleRunnable_setRunning(InputAutomationNewBundleRunnable* this, bool running) {
        this->running = running;
}


// throws Exception
static void InputAutomationNewBundleRunnable_updateModules(InputAutomationNewBundleRunnable* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "updateModules");
        BasicArrayList* list = InputAutomationNewBundleRunnable_findNewModules(this);
        int32_t size = BasicArrayList_size(list);
        Bundle* bundle = nullptr;
        for (int32_t index = 0; index < size; index++) {
            bundle = InputAutomationNewBundleRunnable_install(this, ((URL*) BasicArrayList_get(list, index)));
            if (bundle != nullptr) {
                Bundle_start(bundle, InputAutomationNewBundleRunnable_MODULES_START_LEVEL);
            }
        }
}


// throws Exception
static HashMap* InputAutomationNewBundleRunnable_getAllJarSymbolicNameHashMap(InputAutomationNewBundleRunnable* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getAllJarSymbolicNameHashMap");
        HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
        BasicArrayList* jarFileBasicArrayList = InputAutomationNewBundleRunnable_getJarModuleFileBasicArrayList(this);
        LogUtil_putF(this->logUtil, java_concat("Jar Module Files: ", java_string_of(jarFileBasicArrayList)), this, "getAllJarSymbolicNameHashMap");
        int32_t size = BasicArrayList_size(jarFileBasicArrayList);
        File* file = nullptr;
        for (int32_t index = 0; index < size; index++) {
            file = ((File*) BasicArrayList_get(jarFileBasicArrayList, index));
            if (!File_isDirectory(file)) {
                FileInputStream* fileInputStream = FileInputStream_new(file);
                JarInputStream* jarInputStream = JarInputStream_new(fileInputStream);
                Manifest* manifest = JarInputStream_getManifest(jarInputStream);
                if (manifest == nullptr) {
                } else {
                    const char* symbolicName = JAVA_CALL(Manifest_getMainAttributes(manifest), getValue, Constants_BUNDLE_SYMBOLICNAME);
                    if (symbolicName != nullptr) {
                        HashMap_put(hashMap, symbolicName, URL_new(InputAutomationNewBundleRunnable_FILE + File_getAbsolutePath(file)));
                    }
                }
            }
        }
        return hashMap;
}


static BasicArrayList* InputAutomationNewBundleRunnable_getJarModuleFileBasicArrayList(InputAutomationNewBundleRunnable* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getJarModuleFileBasicArrayList");
        const char* baseJarPath = System_getProperty(InputAutomationNewBundleRunnable_JAR_DIR_PROP);
        if ((strncmp(baseJarPath, InputAutomationNewBundleRunnable_FILE, strlen(InputAutomationNewBundleRunnable_FILE)) == 0)) {
            baseJarPath = java_substring(baseJarPath, JAVA_CALL(InputAutomationNewBundleRunnable_FILE, length), (int32_t) strlen(baseJarPath));
        }
        FileFilter* jarFileFilter = BasicFileFilterUtil_getInstance(".jar");
        const char* path = java_concat(baseJarPath, java_string_of(InputAutomationNewBundleRunnable_INPUT_AUTMATION_MODULE_BUNDLE_JAR_PATH));
        LogUtil_putF(this->logUtil, java_concat("Path: ", path), this, "getJarModuleFileBasicArrayList");
        File* file = File_new(path);
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat("File: ", java_string_of(File_getAbsolutePath(file))), " isDirectory: "), java_string_of(File_isDirectory(file))), this, "getJarModuleFileBasicArrayList");
        return SubDirectory_search(SubDirectory_getInstance(), jarFileFilter, FileWrapperUtil_wrapFile(file));
}


// throws Exception
static BasicArrayList* InputAutomationNewBundleRunnable_getInstalledJarSymbolicNameBasicArrayList(InputAutomationNewBundleRunnable* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "getInstalledJarSymbolicNameBasicArrayList");
        BasicArrayList* vector = BasicArrayListD_new();
        BundleContext* bundleContext = InputAutomationBundleActivator_getBundleContext();
        Bundle** bundleArray = BundleContext_getBundles(bundleContext);
        if (bundleArray != nullptr) {
            LogUtil_putF(this->logUtil, java_concat("bundleArray: ", java_string_of(java_array_length(bundleArray))), this, "getInputAutomationModuleServices");
            for (int32_t index = 0; index < java_array_length(bundleArray); index++) {
                Bundle* bundle = bundleArray[index];
                BasicArrayList_add(vector, Bundle_getSymbolicName(bundle));
            }
        }
        return vector;
}


// throws Exception
static bool InputAutomationNewBundleRunnable_isInstalled(InputAutomationNewBundleRunnable* this, const char* symbolicName) {
        LogUtil_putF(this->logUtil, java_concat(java_string_of(CommonLabels_getInstance()->START), symbolicName), this, "isInstalled");
        BasicArrayList* list = InputAutomationNewBundleRunnable_getInstalledJarSymbolicNameBasicArrayList(this);
        int32_t size = BasicArrayList_size(list);
        const char* nextSymbolicName = nullptr;
        for (int32_t index = 0; index < size; index++) {
            nextSymbolicName = ((const char*) BasicArrayList_get(list, index));
            if (strcmp(nextSymbolicName, symbolicName) == 0) {
                return true;
            }
        }
        return false;
}


// throws Exception
static BasicArrayList* InputAutomationNewBundleRunnable_findNewModules(InputAutomationNewBundleRunnable* this) {
        LogUtil_putF(this->logUtil, this->commonStrings->START, this, "findNewModules");
        BasicArrayList* vector = BasicArrayListD_new();
        HashMap* hashMap = InputAutomationNewBundleRunnable_getAllJarSymbolicNameHashMap(this);
        LogUtil_putF(this->logUtil, java_concat("All: ", java_string_of(hashMap)), this, "findNewModules");
        Set* set = HashMap_keySet(hashMap);
        Any** symbolicNameArray = Set_toArray(set);
        int32_t size = java_array_length(symbolicNameArray);
        for (int32_t index = 0; index < size; index++) {
            const char* symbolicName = ((const char*) symbolicNameArray[index]);
            if (!InputAutomationNewBundleRunnable_isInstalled(this, symbolicName)) {
                BasicArrayList_add(vector, HashMap_get(hashMap, symbolicName));
            }
        }
        return vector;
}


// throws Exception
static Bundle* InputAutomationNewBundleRunnable_install(InputAutomationNewBundleRunnable* this, URL* url) {
        LogUtil_putF(this->logUtil, CommonLabels_getInstance()->START + url, this, "install");
        BundleContext* bundleContext = InputAutomationBundleActivator_getBundleContext();
        return BundleContext_installBundle(bundleContext, URL_toString(url));
}


void InputAutomationNewBundleRunnable_run(InputAutomationNewBundleRunnable* this) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->RUN);
            InputAutomationNewBundleRunnable_setRunning(this, true);
            TimeDelayHelper* timeHelper = TimeDelayHelper_new(1000);
            while (InputAutomationNewBundleRunnable_isRunning(this)) {
                TimeDelayHelper_setStartTimeTNT(timeHelper);
                LogUtil_putF(this->logUtil, CommonLabels_getInstance()->ELAPSED + TimeDelayHelper_getElapsedTNT(timeHelper), this, this->commonStrings->RUN);
                InputAutomationNewBundleRunnable_updateModules(this);
                break;
            }
            LogUtil_putF(this->logUtil, this->commonStrings->END, this, this->commonStrings->RUN);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->RUN, e);
        } JAVA_END_TRY;
}

