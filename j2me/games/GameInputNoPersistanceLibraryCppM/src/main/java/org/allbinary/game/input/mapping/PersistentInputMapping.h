
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_H
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/configuration/persistance/GamePersistanceStrings.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputPersistance.h>

      
#include <org/allbinary/game/input/mapping/event/InputMappingEvent.h>

      
#include <org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h>

      
#include <org/allbinary/game/input/mapping/event/NullInputMappingEventListener.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputToGameKeyMapping.h"
//GameInputNoPersistanceLibrary
class PersistentInputMapping
            : public Object
         {
        

    public static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static PersistentInputMapping getNullInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const enumerationUtil: EnumerationUtil = EnumerationUtil.getInstance()!;

    private: const inputMapping: InputToGameKeyMapping = new InputToGameKeyMapping();

    private: inputMappingEventListenerInterface: InputMappingEventListenerInterface = NullInputMappingEventListener.NULL_INPUT_MAPPING_EVENT_LISTENER;

    private: const inputPersistance: InputPersistance;

protected constructor (string name);

    public int32_t getTotalMapped();

    bool isDefaultNew();

    InputToGameKeyMapping getDefault();

                //@Throws(Exception.constructor)
            
    public setDefault(AbeClientInformationInterface abeClientInformation);

                //@Throws(Exception.constructor)
            
    public update(AbeClientInformationInterface abeClientInformation);

    private: inputMappingEvent: InputMappingEvent = new InputMappingEvent(this);

                //@Throws(Exception.constructor)
            
    public save(AbeClientInformationInterface abeClientInformation);

                //@Throws(Exception.constructor)
            
    public init(AbeClientInformationInterface abeClientInformation);

    public setInputMappingEventListenerInterface(InputMappingEventListenerInterface inputMappingEventListenerInterface);

    InputMappingEventListenerInterface getInputMappingEventListenerInterface();

    public InputToGameKeyMapping getInputMapping();

                //@Throws(Exception.constructor)
            
    public bool isDelete(Input input);

                //@Throws(Exception.constructor)
            
    public bool isSystemInput(Input input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_H
