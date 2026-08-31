
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputToGameKeyMapping.h"

class InputMapping
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    private: const mappedList: BasicArrayList = new BasicArrayListD();

protected constructor ();

    public int32_t getTotalMapped();

    bool isDefaultNew();

    InputToGameKeyMapping getDefault();

    removeAll();

    public remove(Input input, Input mappedToInput);

                //@Throws(Exception.constructor)
            
    public addMapping(InputToGameKeyMapping inputToGameKeyMapping);

    public add(Input input, Input mappedToInput);

    public bool isMapped(Input input);

    public BasicArrayList getMappedInput(Input id);

    public Hashtable<any, any> getHashtable();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H
