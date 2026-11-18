// Generated Code Do Not Modify
#include "org/allbinary/logic/io/DataOutputStreamFactory.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/AbFileOutputStream.h"
#include "org/allbinary/logic/io/AbDataOutputStream.h"
#include "org/allbinary/logic/io/FileStreamFactory.h"


static DataOutputStreamFactory* DataOutputStreamFactory_instance;




void DataOutputStreamFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DataOutputStreamFactory_instance = DataOutputStreamFactory_new();
}

void DataOutputStreamFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DataOutputStreamFactory", nullptr);
    java_register_method("DataOutputStreamFactory", "getInstanceForAbFile", (void*) DataOutputStreamFactory_getInstanceForAbFile);
    java_register_method("DataOutputStreamFactory", "getInstance@3", (void*) DataOutputStreamFactory_getInstance3);
}

void DataOutputStreamFactory_init(DataOutputStreamFactory* this) {
    DataOutputStreamFactory_register();
}

DataOutputStreamFactory* DataOutputStreamFactory_new(void) {
    DataOutputStreamFactory* this = java_object_alloc(sizeof(DataOutputStreamFactory), "DataOutputStreamFactory");
    DataOutputStreamFactory_init(this);
    return this;
}


DataOutputStreamFactory* DataOutputStreamFactory_getInstance0(void) {
        return (DataOutputStreamFactory_staticInit(), DataOutputStreamFactory_instance);
}


// throws Exception
AbDataOutputStream* DataOutputStreamFactory_getInstanceForAbFile(DataOutputStreamFactory* this, AbFile* file) {
        AbFileOutputStream* idFileOutputStream = AbFileOutputStream_createFromAbFile(file);
        AbDataOutputStream* idOutData = AbDataOutputStream_new(idFileOutputStream);
        return idOutData;
}


// throws Exception
// Java overloaded method: C needs a different name
AbDataOutputStream* DataOutputStreamFactory_getInstance3(DataOutputStreamFactory* this, const char* filePath, const char* fileName) {
        FileStreamFactory* fileStreamFactory = FileStreamFactory_getInstance();
        AbFileOutputStream* fileOutputStream = FileStreamFactory_getFileOutputStreamInstance(fileStreamFactory, filePath, fileName);
        AbDataOutputStream* idOutData = AbDataOutputStream_new(fileOutputStream);
        return idOutData;
}

