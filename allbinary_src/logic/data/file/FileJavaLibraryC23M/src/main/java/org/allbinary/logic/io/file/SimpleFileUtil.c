// Generated Code Do Not Modify
#include "org/allbinary/logic/io/file/SimpleFileUtil.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/io/NullOutputStream.h"
#include "org/allbinary/logic/io/NullReader.h"
#include "org/allbinary/logic/io/NullWriter.h"
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"


static SimpleFileUtil* SimpleFileUtil_instance;








void SimpleFileUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SimpleFileUtil_instance = SimpleFileUtil_new();
}

void SimpleFileUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimpleFileUtil", nullptr);
    java_register_method("SimpleFileUtil", "loadFileAsList", (void*) SimpleFileUtil_loadFileAsList);
    java_register_method("SimpleFileUtil", "loadFileAsListReturnLine", (void*) SimpleFileUtil_loadFileAsListReturnLine);
    java_register_method("SimpleFileUtil", "createStringFromArrayOfStrings", (void*) SimpleFileUtil_createStringFromArrayOfStrings);
}

static void SimpleFileUtil_initFields(SimpleFileUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->NULL_WRITER = SimpleFileUtil_nullWriter();
    this->NULL_READER = SimpleFileUtil_nullReader();
    this->commonStrings = CommonStrings_getInstance();
    this->nullUtil = NullUtil_getInstance();
    this->streamUtil = StreamUtil_getInstance();
}

void SimpleFileUtil_init(SimpleFileUtil* this) {
    SimpleFileUtil_register();
    SimpleFileUtil_initFields(this);
}

SimpleFileUtil* SimpleFileUtil_new(void) {
    SimpleFileUtil* this = java_object_alloc(sizeof(SimpleFileUtil), "SimpleFileUtil");
    SimpleFileUtil_init(this);
    return this;
}


SimpleFileUtil* SimpleFileUtil_getInstance(void) {
        return (SimpleFileUtil_staticInit(), SimpleFileUtil_instance);
}


OutputStream* SimpleFileUtil_nullOutputStream(void) {
        return (NullOutputStream_staticInit(), NullOutputStream_NULL_OUTPUT_STREAM);
}


Writer* SimpleFileUtil_nullWriter(void) {
        return (NullWriter_staticInit(), NullWriter_NULL_WRITER);
}


Reader* SimpleFileUtil_nullReader(void) {
        return (NullReader_staticInit(), NullReader_NULL_READER);
}


BasicArrayList* SimpleFileUtil_loadFileAsList(SimpleFileUtil* this, InputStream* inputStream, int32_t max, int8_t* byteArray1) {
        return SimpleFileUtil_loadFileAsListReturnLine(this, inputStream, max, byteArray1, 0);
}


BasicArrayList* SimpleFileUtil_loadFileAsListReturnLine(SimpleFileUtil* this, InputStream* inputStream, int32_t max, int8_t* byteArray1, int32_t includeReturnLine) {
        BasicArrayList* stringList = BasicArrayListD_new();
        if (inputStream == nullptr) {
            return stringList;
        }
        int8_t* byteArray = this->nullUtil->NULL_BYTE_ARRAY;
        JAVA_TRY {
            ByteArrayOutputStream* outputStream2 = ByteArrayOutputStream_new(max);
            byteArray = StreamUtil_getByteArray(this->streamUtil, inputStream, outputStream2, byteArray1);
            StreamUtil_close(this->streamUtil, inputStream);
        } JAVA_CATCH(Exception, e) {
            StreamUtil_close(this->streamUtil, inputStream);
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->ADD, e);
        } JAVA_END_TRY;
        if (byteArray == nullptr) {
            return stringList;
        }
        int32_t size = java_array_length(byteArray);
        int32_t index = 0;
        int32_t startIndex = 0;
        int32_t returnLine = 0;
        while (index < size) {
            startIndex = index;
            while (index < size - 1 && byteArray[index] != ((int8_t) u'\n')) {
                index++;
            }
            if (includeReturnLine == 0) {
                if (index > 0 && byteArray[index - 1] == ((int8_t) u'\r')) {
                    returnLine = 1;
                } else {
                    returnLine = 0;
                }
            }
            const char* s = java_string_new(byteArray, startIndex, (index + includeReturnLine - returnLine - startIndex));
            BasicArrayList_add(stringList, s);
            index++;
        }
        return stringList;
}


const char* SimpleFileUtil_createStringFromArrayOfStrings(SimpleFileUtil* this, const char** stringArray) {
        StringMaker* stringMaker = StringMaker_new();
        int32_t size = java_array_length(stringArray);
        for (int32_t index = 0; index < size; index++) {
            StringMaker_append(stringMaker, stringArray[index]);
        }
        return java_string_of(stringMaker);
}

