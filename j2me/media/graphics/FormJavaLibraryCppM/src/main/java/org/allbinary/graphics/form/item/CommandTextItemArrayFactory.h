
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
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
        #include "CommandTextItem.h"
#include "ABCustomItem.h"

class CommandTextItemArrayFactory
            : public Object
         {

    private: const BasicArrayList list = BasicArrayListD();

    private: Visitor visitorInterface;

public: CommandTextItemArrayFactory(Visitor visitorInterface);

    public: std::vector<ABCustomItem> getInstance(Object* vector, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEMARRAYFACTORY_H
