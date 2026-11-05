
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Boolean.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/ImageItem.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/form/ScreenInfo.h>

      
#include <org/allbinary/logic/VectorUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/CommandTextItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItem.h"


CommandTextItemArrayFactory::CommandTextItemArrayFactory(Visitor* visitorInterface) : list(new BasicArrayListD()){
this->visitorInterface= visitorInterface;
    
}


    auto CommandTextItemArrayFactory::getInstance(Object* vector, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) -> std::vector<ABCustomItem*>{

    VectorUtil* vectorUtil = VectorUtil::getInstance();;
    

    int32_t size = vectorUtil->getSize(vector);;
    
this->list->clear();
    

    CommandTextItem* textItem;;
    

    int32_t priorityLimit = 7;;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

    bool isLargeEnoughDisplayForBigMenu = (displayInfo->isPortrait() && displayInfo->getLastHeight() >= ScreenInfo::getInstance()->MEDIUM_WIDTH) || (!displayInfo->isPortrait() && displayInfo->getLastWidth() >= ScreenInfo::getInstance()->MEDIUM_WIDTH);;
    

                        if(!isLargeEnoughDisplayForBigMenu && size > 3)
                        
                                    {
                                    priorityLimit= 3;
    

                                    }
                                

    Command* command;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
command= dynamic_cast<Command*>(vectorUtil->elementAt(vector, index));
    

                        if(command->getPriority() < priorityLimit)
                        
                                    {
                                    
    bool aBoolean = JavaBoxes::unbox<bool>(this->visitorInterface->visit(command));;
    

                        if(aBoolean)
                        
                                    {
                                    textItem= new CommandTextItem(command, ImageItem::LAYOUT_DEFAULT, StringUtil::getInstance()->EMPTY_STRING, backgroundBasicColor, foregroundBasicColor);
    
this->list->add(textItem);
    

                                    }
                                

                                    }
                                
}


    std::vector<ABCustomItem*> textItemArray = std::vector<ABCustomItem*>(this->list->size());;
    

    int32_t size2 = textItemArray.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
textItemArray[index]= dynamic_cast<ABCustomItem*>(this->list->objectArray[index]);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return textItemArray;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_CPP
