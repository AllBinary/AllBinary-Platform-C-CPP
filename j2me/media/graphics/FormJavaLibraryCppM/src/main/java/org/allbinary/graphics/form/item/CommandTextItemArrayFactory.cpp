
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
#include <java/util/Vector.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/ImageItem.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/form/ScreenInfo.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CommandTextItem.h"
#include "ABCustomItem.h"

class CommandTextItemArrayFactory
            : public Object
         {

    private: const BasicArrayList list = BasicArrayListD();

    private: Visitor visitorInterface;

public: CommandTextItemArrayFactory(Visitor visitorInterface){
this->visitorInterface= visitorInterface;
    
}


    public: std::vector<ABCustomItem> getInstance(Vector<any> vector, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){

    int32_t size = vector.length;;
    
this->list.clear();
    

    CommandTextItem textItem;;
    

    int32_t priorityLimit = 7;;
    

    DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();;
    

    bool isLargeEnoughDisplayForBigMenu = (displayInfo.isPortrait() && displayInfo.getLastHeight() >= ScreenInfo::getInstance().MEDIUM_WIDTH) || (!displayInfo.isPortrait() && displayInfo.getLastWidth() >= ScreenInfo::getInstance().MEDIUM_WIDTH);;
    

                        if(!isLargeEnoughDisplayForBigMenu && size > 3)
                        
                                    {
                                    priorityLimit= 3;
    

                                    }
                                

    Command command;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
command= vector.elementAt(index) as Command;
    

                        if(command.getPriority() < priorityLimit)
                        
                                    {
                                    
    Boolean aBoolean = this->visitorInterface.visit(command) as Boolean;;
    

                        if(aBoolean.valueOf())
                        
                                    {
                                    textItem= CommandTextItem(command, ImageItem::LAYOUT_DEFAULT, StringUtil::getInstance().EMPTY_STRING, backgroundBasicColor, foregroundBasicColor);
    
this->list.add(textItem);
    

                                    }
                                

                                    }
                                
}


    std::vector<ABCustomItem> textItemArray = new Array(this->list.size());;
    

    int32_t size2 = textItemArray.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
textItemArray[index]= this->list.objectArray[index]! as ABCustomItem;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return textItemArray;
    
}


};

            

