
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENT_H
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class InputToGameKeyMapping;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputMappingEvent: public AllBinaryEventObject {

    private: InputToGameKeyMapping* inputToGameKeyMapping;

public: InputMappingEvent(Object* anyType);
public: InputMappingEvent(const std::string& anyType) : InputMappingEvent(JavaString::box(anyType)) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> InputMappingEvent(BoxValue anyType) : InputMappingEvent(JavaBoxes::toObject(anyType)) { }
public: template<typename BoxElement> InputMappingEvent(const std::vector<BoxElement>& anyType) : InputMappingEvent(JavaBoxes::toObject(anyType)) { }

    public: void setInputToGameKeyMapping(InputToGameKeyMapping* inputToGameKeyMapping);

    public: InputToGameKeyMapping* getInputToGameKeyMapping();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/mapping/InputToGameKeyMapping.h>)
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif

        #endif
    
