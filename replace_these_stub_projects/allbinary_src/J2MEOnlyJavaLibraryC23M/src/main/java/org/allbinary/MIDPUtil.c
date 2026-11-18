// Generated Code Do Not Modify
#include "org/allbinary/MIDPUtil.h"
#include "javax/microedition/lcdui/Form.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/Item.h"
#include "javax/microedition/media/Manager.h"
#include "javax/microedition/media/MediaException.h"
#include "javax/microedition/media/Player.h"


static MIDPUtil* MIDPUtil_instance;







void MIDPUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MIDPUtil_instance = MIDPUtil_new();
}

void MIDPUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MIDPUtil", nullptr);
    java_register_method("MIDPUtil", "createImageWH", (void*) MIDPUtil_createImageWH);
    java_register_method("MIDPUtil", "createImageFromByteArray", (void*) MIDPUtil_createImageFromByteArray);
    java_register_method("MIDPUtil", "createImageFromInputStream", (void*) MIDPUtil_createImageFromInputStream);
    java_register_method("MIDPUtil", "createPlayerFromInputStream", (void*) MIDPUtil_createPlayerFromInputStream);
    java_register_method("MIDPUtil", "appendItem", (void*) MIDPUtil_appendItem);
}

void MIDPUtil_init(MIDPUtil* this) {
    MIDPUtil_register();
}

MIDPUtil* MIDPUtil_new(void) {
    MIDPUtil* this = java_object_alloc(sizeof(MIDPUtil), "MIDPUtil");
    MIDPUtil_init(this);
    return this;
}


MIDPUtil* MIDPUtil_getInstance(void) {
        return (MIDPUtil_staticInit(), MIDPUtil_instance);
}


Image* MIDPUtil_createImageWH(MIDPUtil* this, int32_t width, int32_t height) {
        return Image_createImageWH(width, height);
}


Image* MIDPUtil_createImageFromByteArray(MIDPUtil* this, int8_t* imageData, int32_t imageOffset, int32_t imageLength) {
        return Image_createImageFromByteArray(imageData, imageOffset, imageLength);
}


// throws IOException
Image* MIDPUtil_createImageFromInputStream(MIDPUtil* this, InputStream* inputStream) {
        return Image_createImageFromInputStream(inputStream);
}


// throws IOException, MediaException
Player* MIDPUtil_createPlayerFromInputStream(MIDPUtil* this, InputStream* inputStream, const char* type) {
        return Manager_createPlayerFromInputStream(inputStream, type);
}


int32_t MIDPUtil_appendItem(MIDPUtil* this, Form* form, Item* item) {
        return Form_append(form, item);
}

