
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

class ToolFactory
            : public Object
         {

    private: static ToolFactory* instance() { static std::unique_ptr<ToolFactory> value(new ToolFactory()); return value.get(); }

    public: static ToolFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ToolFactory::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: GraphicsItemInterfaceFactoryInterface* selectedTool = 
                null
            ;

    private: std::string tool = 
                null
            ;

    private: const std::string SELECTED_LABEL = "Selected: ";

    public: void setSelectedTool(std::string tool){

        try {
            StatusFactory::getInstance()->setStatus(this->SELECTED_LABEL +tool);
    
this->tool= tool;
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, "setSelectionTool", &e);
    
}

}


    public: GraphicsItemInterfaceFactoryInterface* getSelectedToolFactory(){
StatusFactory::getInstance()->setStatus("Tool In Use: " +this->tool);
    

                        if(true)
                        
                                    {
                                    this->selectedTool= GraphicItemFactory::getInstance()->getInstance(this->tool);
    
this->logUtil->putF("New Tool: " +this->selectedTool, this, "getSelectedToolFactory");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedTool;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


};

            

