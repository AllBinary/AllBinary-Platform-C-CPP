
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_H
        #define ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Command;
#include <javax/microedition/lcdui/CommandListener.h>
class Display;
class Displayable;
class NullCanvas;
#include <javax/microedition/midlet/MIDlet.h>
class MIDletStateChangeException;
class StdUtil;
class ForcedLogUtil;
class LogUtil;
class PreLogUtil;
class StringMaker;
class StringUtil;
class EventStrings;
class CommonLabels;
class CommonStrings;
class Memory;
class NullUtil;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryMidlet: public MIDlet, public CommandListener {

    private: static Object* NULL_ALLBINARY_MIDLET;

    public: static AllBinaryMidlet* getNullInstance();

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: const std::string SET_DISPLAY = "setDisplay";

    private: const std::string SETTING_ = "Setting: ";

    private: const std::string _DISPLAY_ = " Display: ";

    private: const std::string SETTING_NO_TITLE = "Setting: No Title, Display: ";

    private: ABHashtable<Object*, Object*>* hashtable;

    private: bool midletDestroyed= false;

public: AllBinaryMidlet();

    /*protected*/ public: void setDisplay(Displayable* newDisplay);

    public: Display* getDisplay();

    /*protected*/ public: Displayable* getCurrentDisplayable();

    public: void setDestroyed(bool destroyed);

    public: bool isDestroyed();

                //@Throws(MIDletStateChangeException.constructor)
            
    /*protected*/ public: void startApp();

    /*protected*/ public: void pauseApp();

    /*protected*/ public: void destroyAppInRunnable(bool unconditional, bool isProgress);

    /*protected*/ public: void destroyApp(bool unconditional);

                //@Throws(Exception.constructor)
            
    public: void setStartStateHashtable(ABHashtable<Object*, Object*>* hashtable);

                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*>* getStartStateHashtable();

                //@Throws(Exception.constructor)
            
    public: ABHashtable<Object*, Object*>* getCurrentStateHashtable();

    public: void commandAction(Command* command, Displayable* displayable);

};

            


        #endif //ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_H_COMPLETE)
        #define ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Display.h>)
#include <javax/microedition/lcdui/Display.h>
#endif
#if __has_include(<javax/microedition/lcdui/Displayable.h>)
#include <javax/microedition/lcdui/Displayable.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullCanvas.h>)
#include <javax/microedition/lcdui/NullCanvas.h>
#endif
#if __has_include(<javax/microedition/midlet/MIDlet.h>)
#include <javax/microedition/midlet/MIDlet.h>
#endif
#if __has_include(<javax/microedition/midlet/MIDletStateChangeException.h>)
#include <javax/microedition/midlet/MIDletStateChangeException.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/system/Memory.h>)
#include <org/allbinary/system/Memory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
