
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLFACTORY_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/tools/ToolFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/j2me/StatusFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/GraphicsItemInterfaceFactoryInterface.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicItemFactory.h"


ToolFactory::ToolFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()) {
        }
        auto ToolFactory::instance_owner() -> ToolFactory* { static std::unique_ptr<ToolFactory> value(new ToolFactory()); return value.get(); }
ToolFactory* ToolFactory::instance = ToolFactory::instance_owner();

    auto ToolFactory::getInstance() -> ToolFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ToolFactory::instance;
    
}


    auto ToolFactory::setSelectedTool(std::string tool) -> void{

        try {
            StatusFactory::getInstance()->setStatus(JavaString::valueOf(this->SELECTED_LABEL) +JavaString::valueOf(tool));
    
this->tool= tool;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "setSelectionTool", &e);
    
}

}


    auto ToolFactory::getSelectedToolFactory() -> GraphicsItemInterfaceFactoryInterface*{
StatusFactory::getInstance()->setStatus(JavaString::valueOf("Tool In Use: ") +JavaString::valueOf(this->tool));
    

                        if(true)
                        
                                    {
                                    this->selectedTool= GraphicItemFactory::getInstance()->getInstance(this->tool);
    
this->logUtil->putF(JavaString::valueOf("New Tool: ") +JavaString::valueOf(this->selectedTool), this, "getSelectedToolFactory");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedTool;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_TOOLFACTORY_CPP
