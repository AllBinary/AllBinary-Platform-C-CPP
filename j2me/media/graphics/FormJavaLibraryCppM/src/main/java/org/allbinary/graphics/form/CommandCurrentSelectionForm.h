
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/ScrollCurrentSelectionForm.h"
#include "org/allbinary/graphics/form/ItemPaintableFactory.h"

class CommandCurrentSelectionForm: public ScrollCurrentSelectionForm, public UpdateMyFontInterface {

    protected: const std::vector<Animation*> selectedAnimationArray = std::vector<Animation*>(16);

    protected: const std::vector<Animation*> unSelectedAnimationArray = std::vector<Animation*>(16);

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
