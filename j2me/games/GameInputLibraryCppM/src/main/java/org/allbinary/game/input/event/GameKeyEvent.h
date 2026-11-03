
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class NullUtil;
class StringMaker;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameKeyEvent: public AllBinaryEventObject {

    public: static GameKeyEvent* createEvent(Object* anyType, int32_t sourceId, int32_t key);
    public: static GameKeyEvent* createEvent(const std::string& anyType, int32_t sourceId, int32_t key) { return createEvent(JavaString::box(anyType), sourceId, key); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> static GameKeyEvent* createEvent(BoxValue anyType, int32_t sourceId, int32_t key) { return createEvent(JavaBoxes::toObject(anyType), sourceId, key); }
    public: template<typename BoxElement> static GameKeyEvent* createEvent(const std::vector<BoxElement>& anyType, int32_t sourceId, int32_t key) { return createEvent(JavaBoxes::toObject(anyType), sourceId, key); }

    private: static GameKeyEvent* NONE_owner();
    public: static GameKeyEvent* NONE;

    private: int32_t sourceId;

    private: bool repeated= false;

    private: int32_t key;

    private: int32_t gameActionKey= 0;

    private: int32_t originalKey= 0;

public: GameKeyEvent(Object* anyType, int32_t sourceId, int32_t originalKey, int32_t gameActionKey, int32_t key, bool repeated);

    public: void init(Object* anyType);
    public: void init(const std::string& anyType) { return init(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void init(BoxValue anyType) { return init(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> void init(const std::vector<BoxElement>& anyType) { return init(JavaBoxes::toObject(anyType)); }

    private: void setRepeatEvents(bool repeated);

    public: bool hasRepeatEvents();

    public: int32_t getKey();

    public: std::string toString();

    public: int32_t getOriginalKey();

    public: void setOriginalKey(int32_t originalKey);

    public: int32_t getGameActionKey();

    public: void setGameActionKey(int32_t gameActionKey);

    public: int32_t getSourceId();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif

        #endif
    
