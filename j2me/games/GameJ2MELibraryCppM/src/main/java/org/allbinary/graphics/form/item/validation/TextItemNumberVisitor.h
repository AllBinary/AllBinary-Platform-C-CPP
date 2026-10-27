
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class TextNotificationUtil;
class LogUtil;
class BooleanFactory;
class StringValidationUtil;
#include <org/allbinary/logic/util/visitor/Visitor.h>
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TextItemNumberVisitor: public Visitor {

    /*protected*/ public: LogUtil* logUtil;

public: TextItemNumberVisitor();

    public: Object* visit(Object* anyType);
    public: Object* visit(const std::string& anyType) { return visit(JavaString::box(anyType)); }

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_VALIDATION_TEXTITEMNUMBERVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/TextNotificationUtil.h>)
#include <org/allbinary/game/input/TextNotificationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
