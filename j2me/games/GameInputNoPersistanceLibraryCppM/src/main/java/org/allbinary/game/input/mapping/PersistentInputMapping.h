
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/Enumeration.h>
class GamePersistanceStrings;
class Input;
class InputPersistance;
class InputMappingEvent;
class InputMappingEventListenerInterface;
class NullInputMappingEventListener;
class NullUtil;
class LogUtil;
class PreLogUtil;
class StringMaker;
class AbeClientInformationInterface;
class CommonStrings;
class BasicArrayList;
class EnumerationUtil;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputToGameKeyMapping;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //GameInputNoPersistanceLibrary
class PersistentInputMapping
            : public virtual Object
         {

    public: static Object* instance;

    public: static PersistentInputMapping* getNullInstance();

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: EnumerationUtil* enumerationUtil;

    private: InputToGameKeyMapping* inputMapping;

    private: InputMappingEventListenerInterface* inputMappingEventListenerInterface;

    private: InputPersistance* inputPersistance;

/*protected*/ public: PersistentInputMapping(std::string name);

    public: int32_t getTotalMapped();

    /*protected*/ public: bool isDefaultNew();

    /*protected*/ public: InputToGameKeyMapping* getDefault();

                //@Throws(Exception.constructor)
            
    public: void setDefault(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    public: void update(AbeClientInformationInterface* abeClientInformation);

    private: InputMappingEvent* inputMappingEvent;

                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface* abeClientInformation);

    public: void setInputMappingEventListenerInterface(InputMappingEventListenerInterface* inputMappingEventListenerInterface);

    private: InputMappingEventListenerInterface* getInputMappingEventListenerInterface();

    public: InputToGameKeyMapping* getInputMapping();

                //@Throws(Exception.constructor)
            
    public: bool isDelete(Input* input);

                //@Throws(Exception.constructor)
            
    public: bool isSystemInput(Input* input);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_PERSISTENTINPUTMAPPING_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<org/allbinary/game/configuration/persistance/GamePersistanceStrings.h>)
#include <org/allbinary/game/configuration/persistance/GamePersistanceStrings.h>
#endif
#if __has_include(<org/allbinary/game/input/Input.h>)
#include <org/allbinary/game/input/Input.h>
#endif
#if __has_include(<org/allbinary/game/input/InputPersistance.h>)
#include <org/allbinary/game/input/InputPersistance.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/event/InputMappingEvent.h>)
#include <org/allbinary/game/input/mapping/event/InputMappingEvent.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h>)
#include <org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/mapping/event/NullInputMappingEventListener.h>)
#include <org/allbinary/game/input/mapping/event/NullInputMappingEventListener.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
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
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/EnumerationUtil.h>)
#include <org/allbinary/util/EnumerationUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif

        #endif
    
