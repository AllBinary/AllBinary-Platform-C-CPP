
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameGraphicsResourceUtil.h"

class BasicGameResources
            : public Object
         {
        

    static const stringBuffer: StringMaker = new StringMaker();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public RESOURCE: string = StringUtil.getInstance()!.EMPTY_STRING;

    public RESOURCE_DESTROY: string = StringUtil.getInstance()!.EMPTY_STRING;

protected constructor ();

    public init(string ROOT, std::vector<string> SIZE);

                //@Throws(Exception.constructor)
            
    append(string ROOT, string sizeString);

                //@Throws(Exception.constructor)
            
    string getString();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_BASICGAMERESOURCES_H
