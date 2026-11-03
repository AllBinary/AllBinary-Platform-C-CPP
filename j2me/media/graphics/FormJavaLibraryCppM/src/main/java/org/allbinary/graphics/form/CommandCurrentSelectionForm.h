
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_COMMANDCURRENTSELECTIONFORM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_COMMANDCURRENTSELECTIONFORM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Command;
class Graphics;
class J2MEUtil;
class Animation;
class NullAnimationFactory;
class RectangleAdjustedAnimation;
class RectangleFilledAdjustedAnimation;
class BasicColor;
class BasicColorFactory;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class CommandTextItem;
class ABCustomItem;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"
class ItemPaintableFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CommandCurrentSelectionForm: public ScrollCurrentSelectionForm, public virtual UpdateMyFontInterface {

    /*protected*/ public: std::vector<Animation*> selectedAnimationArray;

    /*protected*/ public: std::vector<Animation*> unSelectedAnimationArray;

public: CommandCurrentSelectionForm(std::string title, std::vector<ABCustomItem*> items, int32_t border, bool moveForSmallScreen, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void updateMeasurement(Graphics* graphics);

    private: void initAnimations();

    private: void addAll(std::vector<ABCustomItem*> items);

    private: void addAt(int32_t index, ABCustomItem* item);

    private: void updateAll(Graphics* graphics, std::vector<ABCustomItem*> items);

    private: void updateAt(int32_t index, ABCustomItem* item);

    public: Command* getSelectedCommand();

    public: int32_t append(ABCustomItem* item);

    public: void delete_(int32_t itemNum);

    public: void deleteAll();

    public: void insert(int32_t itemNum, ABCustomItem* item);

    public: void set(int32_t itemNum, ABCustomItem* item);

    public: void paint(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: int32_t paintItem(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public: int32_t paintUnselectedItem(Graphics* graphics, int32_t index, ABCustomItem* item, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_COMMANDCURRENTSELECTIONFORM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_COMMANDCURRENTSELECTIONFORM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_COMMANDCURRENTSELECTIONFORM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/animation/vector/RectangleAdjustedAnimation.h>)
#include <org/allbinary/animation/vector/RectangleAdjustedAnimation.h>
#endif
#if __has_include(<org/allbinary/animation/vector/RectangleFilledAdjustedAnimation.h>)
#include <org/allbinary/animation/vector/RectangleFilledAdjustedAnimation.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/CommandTextItem.h>)
#include <org/allbinary/graphics/form/item/CommandTextItem.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include("org/allbinary/graphics/form/ScrollCurrentSelectionForm.h")
#include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"
#endif
#if __has_include("org/allbinary/graphics/form/ItemPaintableFactory.h")
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"
#endif

        #endif
    
