
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
class AllBinaryMidlet: public MIDlet: public CommandListener {
        

    private: static NULL_ALLBINARY_MIDLET: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static AllBinaryMidlet getNullInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const SET_DISPLAY: string = "setDisplay";

    private: const SETTING_: string = "Setting: ";

    private: const _DISPLAY_: string = " Display: ";

    private: const SETTING_NO_TITLE: string = "Setting: No Title, Display: ";

    private: hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    private: midletDestroyed: bool= false;

public constructor ();

    setDisplay(Displayable newDisplay);

    public Display getDisplay();

    Displayable getCurrentDisplayable();

    public setDestroyed(bool destroyed);

    public bool isDestroyed();

                //@Throws(MIDletStateChangeException.constructor)
            
    startApp();

    pauseApp();

    destroyAppInRunnable(bool unconditional, bool isProgress);

    destroyApp(bool unconditional);

                //@Throws(Exception.constructor)
            
    public setStartStateHashtable(Hashtable<any, any> hashtable);

                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getStartStateHashtable();

                //@Throws(Exception.constructor)
            
    public Hashtable<any, any> getCurrentStateHashtable();

    public commandAction(Command command, Displayable displayable);

};

            


        #endif //ORG_ALLBINARY_MIDLET_ALLBINARYMIDLET_H
