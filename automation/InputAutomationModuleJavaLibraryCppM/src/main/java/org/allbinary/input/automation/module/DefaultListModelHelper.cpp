
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_DEFAULTLISTMODELHELPER_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_DEFAULTLISTMODELHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/DefaultListModelHelper.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/DefaultListModel.h"
#include "org/allbinary/input/automation/module/ListModel.h"


DefaultListModelHelper::DefaultListModelHelper(){
this->vector= new BasicArrayListD();
    
this->defaultListModel= new DefaultListModel();
    
}


    auto DefaultListModelHelper::initDefaultModelList() -> void{
this->defaultListModel= new DefaultListModel();
    

    int32_t size = this->vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string moduleName = this->vector->get(index);;
    
this->defaultListModel->addElement(moduleName);
    
}

}


    auto DefaultListModelHelper::getListModel() -> ListModel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<ListModel*>(this->defaultListModel);
    
}


    auto DefaultListModelHelper::add(std::string string) -> void{
this->vector->add(string);
    
}


    auto DefaultListModelHelper::remove(std::string string) -> void{
this->vector->remove(string);
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_DEFAULTLISTMODELHELPER_CPP
