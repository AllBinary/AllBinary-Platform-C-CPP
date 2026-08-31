
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Vector.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/ImageItem.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/form/ScreenInfo.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CommandTextItem.h"
#include "ABCustomItem.h"

class CommandTextItemArrayFactory
            : public Object
         {
        

    private: const list: BasicArrayList = new BasicArrayListD();

    private: const visitorInterface: Visitor;

public constructor (Visitor visitorInterface){

            super();
        this.visitorInterface= visitorInterface;
    
}


    public std::vector<ABCustomItem> getInstance(Vector<any> vector, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){

    size: int32_t = vector.length!;;
    
this.list.clear();
    

    textItem: CommandTextItem;;
    

    priorityLimit: int32_t = 7;;
    

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

    isLargeEnoughDisplayForBigMenu: bool = (displayInfo!.isPortrait() && displayInfo!.getLastHeight() >= ScreenInfo.getInstance()!.MEDIUM_WIDTH) || (!displayInfo!.isPortrait() && displayInfo!.getLastWidth() >= ScreenInfo.getInstance()!.MEDIUM_WIDTH);;
    

                        if(!isLargeEnoughDisplayForBigMenu && size > 3)
                        
                                    {
                                    priorityLimit= 3;
    

                                    }
                                

    command: Command;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
command= vector.elementAt(index) as Command;
    

                        if(command.getPriority() < priorityLimit)
                        
                                    {
                                    
    aBoolean: Boolean = this.visitorInterface!.visit(command) as Boolean;;
    

                        if(aBoolean.valueOf())
                        
                                    {
                                    textItem= new CommandTextItem(command, ImageItem.LAYOUT_DEFAULT, StringUtil.getInstance()!.EMPTY_STRING, backgroundBasicColor, foregroundBasicColor);
    
this.list.add(textItem);
    

                                    }
                                

                                    }
                                
}


    textItemArray: std::vector<ABCustomItem> = new Array(this.list.size());;
    

    size2: int32_t = textItemArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {
textItemArray[index]= this.list.objectArray[index]! as ABCustomItem;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return textItemArray;
    
}


};

            

