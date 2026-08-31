
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_H
        #define ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_H

            #include "../../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameNotificationEvent: public AllBinaryEventObject {
        

    private: string: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const seconds: Integer;

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.BLACK;

    private: const removeable: Boolean;

public constructor (any = {} anyType, string string, Integer seconds, BasicColor basicColor, Boolean permanent);

    public string getString();

    public Integer getSeconds();

    public BasicColor getBasicColorP();

    public Boolean getPermanent();

    public setString(string string);

    public setBasicColorP(BasicColor basicColor);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_H
