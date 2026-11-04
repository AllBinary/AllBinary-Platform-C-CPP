
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_THRUSTAIVISITOR_H
        #define ORG_ALLBINARY_GAME_AG_AI_THRUSTAIVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
class Canvas;
class BasicAI;
class LogUtil;
class BooleanFactory;
#include <org/allbinary/logic/util/visitor/Visitor.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThrustAIVisitor: public Visitor {

    /*protected*/ public: LogUtil* logUtil;

    private: bool TRUE;

public: ThrustAIVisitor();

    public: Object* visit(Object* anyType);
    public: Object* visit(const std::string& anyType) { return visit(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* visit(BoxValue anyType) { return visit(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> Object* visit(const std::vector<BoxElement>& anyType) { return visit(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_THRUSTAIVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_THRUSTAIVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_THRUSTAIVISITOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<org/allbinary/game/ai/BasicAI.h>)
#include <org/allbinary/game/ai/BasicAI.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
