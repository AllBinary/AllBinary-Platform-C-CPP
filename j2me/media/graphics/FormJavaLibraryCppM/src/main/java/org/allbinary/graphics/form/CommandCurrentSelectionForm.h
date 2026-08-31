
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

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/vector/RectangleAdjustedAnimation.h>

      
#include <org/allbinary/animation/vector/RectangleFilledAdjustedAnimation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/form/item/CommandTextItem.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScrollCurrentSelectionForm.h"
#include "ItemPaintableFactory.h"

class CommandCurrentSelectionForm: public ScrollCurrentSelectionForm: public UpdateMyFontInterface {
        

    const selectedAnimationArray: std::vector<Animation> = new Array(16);

    const unSelectedAnimationArray: std::vector<Animation> = new Array(16);

public constructor (string title, std::vector<ABCustomItem> items, int32_t border, bool moveForSmallScreen, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public updateMeasurement(Graphics graphics);

    initAnimations();

    addAll(std::vector<ABCustomItem> items);

    addAt(int32_t index, ABCustomItem item);

    updateAll(Graphics graphics, std::vector<ABCustomItem> items);

    updateAt(int32_t index, ABCustomItem item);

    public Command getSelectedCommand();

    public int32_t append(ABCustomItem item);

    public delete(int32_t itemNum);

    public deleteAll();

    public insert(int32_t itemNum, ABCustomItem item);

    public set(int32_t itemNum, ABCustomItem item);

    public paint(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public int32_t paintItem(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y);

                //@Throws(Exception.constructor)
            
    public int32_t paintUnselectedItem(Graphics graphics, int32_t index, ABCustomItem item, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_COMMANDCURRENTSELECTIONFORM_H
