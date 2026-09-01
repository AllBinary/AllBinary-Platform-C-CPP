
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

            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Display.h>

      
#include <javax/microedition/lcdui/Displayable.h>

      
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <javax/microedition/midlet/MIDlet.h>

      
#include <javax/microedition/midlet/MIDletStateChangeException.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/system/Memory.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        // MIDlet methods not overridden are final
class AllBinaryMidlet: public MIDlet, public CommandListener {

    private: static Object* NULL_ALLBINARY_MIDLET = NullUtil::getInstance().NULL_OBJECT;

    public: static AllBinaryMidlet getNullInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const std::string SET_DISPLAY = "setDisplay";

    private: const std::string SETTING_ = "Setting: ";

    private: const std::string _DISPLAY_ = " Display: ";

    private: const std::string SETTING_NO_TITLE = "Setting: No Title, Display: ";

    private: Hashtable<any, any> hashtable = Hashtable<any, any>();

    private: bool midletDestroyed= false;

public: AllBinaryMidlet();

    protected: void setDisplay(Displayable newDisplay);

    public: Display getDisplay();

    protected: Displayable getCurrentDisplayable();

    public: void setDestroyed(bool destroyed);

    public: bool isDestroyed();

                //@Throws(MIDletStateChangeException.constructor)
            
    protected: void startApp();

    protected: void pauseApp();

    protected: void destroyAppInRunnable(bool unconditional, bool isProgress);

    protected: void destroyApp(bool unconditional);

                //@Throws(Exception.constructor)
            
    public: void setStartStateHashtable(Hashtable<any, any> hashtable);

                //@Throws(Exception.constructor)
            
    public: Hashtable<any, any> getStartStateHashtable();

                //@Throws(Exception.constructor)
            
    public: Hashtable<any, any> getCurrentStateHashtable();

    public: void commandAction(Command command, Displayable displayable);

};

            


        #endif //ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_H
