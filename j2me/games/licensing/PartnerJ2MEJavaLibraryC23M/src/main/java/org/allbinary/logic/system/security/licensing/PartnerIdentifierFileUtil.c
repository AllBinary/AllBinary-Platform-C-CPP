// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/PartnerIdentifierFileUtil.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static PartnerIdentifierFileUtil* PartnerIdentifierFileUtil_instance;



void PartnerIdentifierFileUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PartnerIdentifierFileUtil_instance = PartnerIdentifierFileUtil_new();
}

void PartnerIdentifierFileUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PartnerIdentifierFileUtil", nullptr);
    java_register_method("PartnerIdentifierFileUtil", "get", (void*) PartnerIdentifierFileUtil_get);
}

static void PartnerIdentifierFileUtil_initFields(PartnerIdentifierFileUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->FILE_NAME = "partner.txt";
}

void PartnerIdentifierFileUtil_init(PartnerIdentifierFileUtil* this) {
    PartnerIdentifierFileUtil_register();
    PartnerIdentifierFileUtil_initFields(this);
}

PartnerIdentifierFileUtil* PartnerIdentifierFileUtil_new(void) {
    PartnerIdentifierFileUtil* this = java_object_alloc(sizeof(PartnerIdentifierFileUtil), "PartnerIdentifierFileUtil");
    PartnerIdentifierFileUtil_init(this);
    return this;
}


PartnerIdentifierFileUtil* PartnerIdentifierFileUtil_getInstance(void) {
        return (PartnerIdentifierFileUtil_staticInit(), PartnerIdentifierFileUtil_instance);
}


const char* PartnerIdentifierFileUtil_get(PartnerIdentifierFileUtil* this) {
        JAVA_TRY {
            ResourceUtil* resourceUtil = ResourceUtil_getInstance();
            InputStream* inputStream = ResourceUtil_getResourceAsStream(resourceUtil, this->FILE_NAME);
            InputStreamReader* inputStreamReader = InputStreamReader_new(inputStream);
            uint16_t* chars = ((uint16_t*) java_array_new(sizeof(uint16_t), 30));
            int32_t size = InputStreamReader_read(inputStreamReader, chars);
            const char* partnerString = StringUtil_getInstance()->EMPTY_STRING;
            if (size > 0) {
                partnerString = java_string_new(chars, 0, size);
            }
            InputStreamReader_close(inputStreamReader);
            return partnerString;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->GET, e);
            return StringUtil_getInstance()->NULL_STRING;
        } JAVA_END_TRY;
}

