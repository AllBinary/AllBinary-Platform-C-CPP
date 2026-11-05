
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Boolean.h"
        
class BasicColor;
class BasicColorFactory;
class StringUtil;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameNotificationEvent: public AllBinaryEventObject {

    private: std::string string;

    private: int32_t seconds;

    private: BasicColor* basicColor;

    private: bool removeable;

public: GameNotificationEvent(Object* anyType, std::string string, int32_t seconds, BasicColor* basicColor, bool permanent);
public: GameNotificationEvent(const std::string& anyType, std::string string, int32_t seconds, BasicColor* basicColor, bool permanent) : GameNotificationEvent(JavaString::box(anyType), string, seconds, basicColor, permanent) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> GameNotificationEvent(BoxValue anyType, std::string string, int32_t seconds, BasicColor* basicColor, bool permanent) : GameNotificationEvent(JavaBoxes::toObject(anyType), string, seconds, basicColor, permanent) { }
public: template<typename BoxElement> GameNotificationEvent(const std::vector<BoxElement>& anyType, std::string string, int32_t seconds, BasicColor* basicColor, bool permanent) : GameNotificationEvent(JavaBoxes::toObject(anyType), string, seconds, basicColor, permanent) { }

    public: std::string getString();

    public: int32_t getSeconds();

    public: BasicColor* getBasicColorP();

    public: bool getPermanent();

    public: void setString(std::string string);

    public: void setBasicColorP(BasicColor* basicColor);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_HUD_EVENT_GAMENOTIFICATIONEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif

        #endif
    
