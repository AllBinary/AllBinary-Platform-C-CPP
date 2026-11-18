// Generated Code Do Not Modify
#include "org/allbinary/logic/io/StreamUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"


static StreamUtil* StreamUtil_instance;






void StreamUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    StreamUtil_instance = StreamUtil_new();
}

void StreamUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StreamUtil", nullptr);
    java_register_method("StreamUtil", "get", (void*) StreamUtil_get);
    java_register_method("StreamUtil", "getByteArray", (void*) StreamUtil_getByteArray);
    java_register_method("StreamUtil", "close", (void*) StreamUtil_close);
}

static void StreamUtil_initFields(StreamUtil* this) {
    this->logUtil = LogUtil_getInstance();
}


StreamUtil* StreamUtil_getInstance(void) {
        return (StreamUtil_staticInit(), StreamUtil_instance);
}


void StreamUtil_init(StreamUtil* this) {
    StreamUtil_register();
    StreamUtil_initFields(this);
}

StreamUtil* StreamUtil_new(void) {
    StreamUtil* this = java_object_alloc(sizeof(StreamUtil), "StreamUtil");
    StreamUtil_init(this);
    return this;
}


// throws Exception
OutputStream* StreamUtil_get(StreamUtil* this, InputStream* inputStream, OutputStream* outputStream, int8_t* buffer) {
        int32_t len = 0;
        while (true) {
            len = InputStream_read(inputStream, buffer, 0, java_array_length(buffer));
            if (len != -1) {
            } else {
                break;
            }
            OutputStream_write(outputStream, buffer, 0, len);
        }
        return outputStream;
}


// throws Exception
int8_t* StreamUtil_getByteArray(StreamUtil* this, InputStream* inputStream, ByteArrayOutputStream* outputStream2, int8_t* byteArray) {
        ByteArrayOutputStream* outputStream = outputStream2;
        JAVA_TRY {
            StreamUtil_get(this, inputStream, outputStream, byteArray);
            return ByteArrayOutputStream_toByteArray(outputStream);
        } JAVA_CATCH(Exception, e) {
            java_throw(e);
        } JAVA_FINALLY {
            StreamUtil_close(this, outputStream);
        } JAVA_END_TRY;
}


bool StreamUtil_close(StreamUtil* this, Closeable* closeable) {
        JAVA_TRY {
            if (closeable != nullptr) {
                Closeable_close(closeable);
            }
            return true;
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->CLOSE, e);
            return false;
        } JAVA_END_TRY;
}

