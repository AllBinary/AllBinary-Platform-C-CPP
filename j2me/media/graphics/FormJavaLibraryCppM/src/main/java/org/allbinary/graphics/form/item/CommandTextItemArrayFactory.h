
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Boolean.h"
        
class Command;
class ImageItem;
class BasicColor;
class DisplayInfoSingleton;
class ScreenInfo;
class VectorUtil;
class StringUtil;
class Visitor;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CommandTextItem;
class ABCustomItem;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommandTextItemArrayFactory
            : public virtual Object
         {

    private: BasicArrayList* list;

    private: Visitor* visitorInterface;

public: CommandTextItemArrayFactory(Visitor* visitorInterface);

    public: std::vector<ABCustomItem*> getInstance(Object* vector, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
    public: std::vector<ABCustomItem*> getInstance(const std::string& vector, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) { return getInstance(JavaString::box(vector), backgroundBasicColor, foregroundBasicColor); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> std::vector<ABCustomItem*> getInstance(BoxValue vector, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) { return getInstance(JavaBoxes::toObject(vector), backgroundBasicColor, foregroundBasicColor); }
    public: template<typename BoxElement> std::vector<ABCustomItem*> getInstance(const std::vector<BoxElement>& vector, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) { return getInstance(JavaBoxes::toObject(vector), backgroundBasicColor, foregroundBasicColor); }

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/ImageItem.h>)
#include <javax/microedition/lcdui/ImageItem.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScreenInfo.h>)
#include <org/allbinary/graphics/form/ScreenInfo.h>
#endif
#if __has_include(<org/allbinary/logic/VectorUtil.h>)
#include <org/allbinary/logic/VectorUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/graphics/form/item/CommandTextItem.h")
#include "org/allbinary/graphics/form/item/CommandTextItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABCustomItem.h")
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#endif

        #endif
    
