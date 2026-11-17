// Generated Code Do Not Modify
// package org.allbinary.logic.system.os.env

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/BufferedReader.h"
// #include "java/io/InputStreamReader.h"
// #include "java/util/Properties.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/logic/system/os/OperatingSystems.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct RuntimeEnvironmentVariables RuntimeEnvironmentVariables;
struct RuntimeEnvironmentVariables {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
};


RuntimeEnvironmentVariables* RuntimeEnvironmentVariables_new(void);

void RuntimeEnvironmentVariables_init(RuntimeEnvironmentVariables* this);
const char* RuntimeEnvironmentVariables_getTest1(RuntimeEnvironmentVariables* this);
const char* RuntimeEnvironmentVariables_getVariable(RuntimeEnvironmentVariables* this, const char* var);
Properties* RuntimeEnvironmentVariables_get(RuntimeEnvironmentVariables* this);
const char* RuntimeEnvironmentVariables_getTempDir(RuntimeEnvironmentVariables* this);
const char* RuntimeEnvironmentVariables_getLibraryPath(RuntimeEnvironmentVariables* this);
const char* RuntimeEnvironmentVariables_getClassPath(RuntimeEnvironmentVariables* this);
void RuntimeEnvironmentVariables_updateLibraryPath(RuntimeEnvironmentVariables* this, const char* libPath);
const char* RuntimeEnvironmentVariables_getUserHome(RuntimeEnvironmentVariables* this);
const char* RuntimeEnvironmentVariables_getUserDir(RuntimeEnvironmentVariables* this);
void RuntimeEnvironmentVariables_set(RuntimeEnvironmentVariables* this);
void RuntimeEnvironmentVariables_setVariable(RuntimeEnvironmentVariables* this, const char* var, const char* val);

static void RuntimeEnvironmentVariables_initFields(RuntimeEnvironmentVariables* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}


void RuntimeEnvironmentVariables_init(RuntimeEnvironmentVariables* this) {
    RuntimeEnvironmentVariables_initFields(this);
}

RuntimeEnvironmentVariables* RuntimeEnvironmentVariables_new(void) {
    RuntimeEnvironmentVariables* this = calloc(1, sizeof(RuntimeEnvironmentVariables));
    RuntimeEnvironmentVariables_init(this);
    return this;
}


const char* RuntimeEnvironmentVariables_getTest1(RuntimeEnvironmentVariables* this) {
        return System_getProperty("java.java.home");
}


const char* RuntimeEnvironmentVariables_getVariable(RuntimeEnvironmentVariables* this, const char* var) {
        Properties* environmentVariables = RuntimeEnvironmentVariables_get(this);
        return Properties_getProperty(environmentVariables, var);
}


Properties* RuntimeEnvironmentVariables_get(RuntimeEnvironmentVariables* this) {
        JAVA_TRY {
            Process* process = nullptr;
            Properties* environmentVariables = Properties_new();
            GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
            const char* osName = GenericOperatingSystem_getName(operatingSystemInterface);
            const char* linuxCommand = "env";
            const char* windowsCommand = "cmd.exe /c set";
            const char* solarisCommand = linuxCommand;
            OperatingSystems* operatingSystems = OperatingSystems_getInstance();
            if (strcmp(osName, operatingSystems->LINUX) == 0) {
                process = JAVA_CALL(Runtime_getRuntime(), exec, linuxCommand);
            } else if (java_string_indexOf(osName, operatingSystems->WINDOWS) >= 0) {
                process = JAVA_CALL(Runtime_getRuntime(), exec, windowsCommand);
            } else if (strcmp(osName, operatingSystems->SOLARIS) == 0) {
                process = JAVA_CALL(Runtime_getRuntime(), exec, solarisCommand);
            } else {
                java_throw(java_exception_new("Exception", ""));
            }
            InputStreamReader* processInputStreamReader = InputStreamReader_new(Process_getInputStream(process));
            BufferedReader* bufferedReader = BufferedReader_new(processInputStreamReader);
            const char* keyValuePair = nullptr;
            while (((keyValuePair = BufferedReader_readLine(bufferedReader))) != nullptr) {
                int32_t index = java_string_indexOf(keyValuePair, u'=');
                const char* key = java_substring(keyValuePair, 0, index);
                const char* value = java_substring(keyValuePair, index + 1, (int32_t) strlen(keyValuePair));
                Properties_put(environmentVariables, key, value);
            }
            return environmentVariables;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->OSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "get()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


const char* RuntimeEnvironmentVariables_getTempDir(RuntimeEnvironmentVariables* this) {
        JAVA_TRY {
            return System_getProperty("java.io.tmpdir");
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->OSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getTempDir()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


const char* RuntimeEnvironmentVariables_getLibraryPath(RuntimeEnvironmentVariables* this) {
        JAVA_TRY {
            return System_getProperty("java.library.path");
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->OSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getLibraryPath()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


const char* RuntimeEnvironmentVariables_getClassPath(RuntimeEnvironmentVariables* this) {
        JAVA_TRY {
            return System_getProperty("java.class.path");
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->OSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getClassPath()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void RuntimeEnvironmentVariables_updateLibraryPath(RuntimeEnvironmentVariables* this, const char* libPath) {
        JAVA_TRY {
            const char* existingPath = RuntimeEnvironmentVariables_getLibraryPath(this);
            System_setProperty("java.library.path", java_concat(java_concat(libPath, ":"), existingPath));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->OSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "updateLibraryPath()", e);
            }
        } JAVA_END_TRY;
}


const char* RuntimeEnvironmentVariables_getUserHome(RuntimeEnvironmentVariables* this) {
        JAVA_TRY {
            return System_getProperty("user.home");
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->OSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getUserHome()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


const char* RuntimeEnvironmentVariables_getUserDir(RuntimeEnvironmentVariables* this) {
        JAVA_TRY {
            return System_getProperty("user.dir");
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->OSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "getUserDir()", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void RuntimeEnvironmentVariables_set(RuntimeEnvironmentVariables* this) {
        JAVA_TRY {
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->OSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "get()", e);
            }
        } JAVA_END_TRY;
}


void RuntimeEnvironmentVariables_setVariable(RuntimeEnvironmentVariables* this, const char* var, const char* val) {
        JAVA_TRY {
            Process* process = nullptr;
            GenericOperatingSystem* operatingSystemInterface = OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance());
            OperatingSystems* operatingSystems = OperatingSystems_getInstance();
            const char* osName = GenericOperatingSystem_getName(operatingSystemInterface);
            const char* windowsCommand = java_concat(java_concat(java_concat("cmd.exe /c set", var), "="), val);
            if (strcmp(osName, operatingSystems->LINUX) == 0) {
                java_throw(java_exception_new("Exception", ""));
            } else if (java_string_indexOf(osName, operatingSystems->WINDOWS) >= 0) {
                process = JAVA_CALL(Runtime_getRuntime(), exec, windowsCommand);
            } else if (strcmp(osName, operatingSystems->SOLARIS) == 0) {
                java_throw(java_exception_new("Exception", ""));
            } else {
                java_throw(java_exception_new("Exception", ""));
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->OSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setVariable()", e);
            }
        } JAVA_END_TRY;
}

