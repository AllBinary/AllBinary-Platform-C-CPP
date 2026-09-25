
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
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DefaultListModel.h"
#include "ListModel.h"

class DefaultListModelHelper
            : public Object
         {

    private: DefaultListModel defaultListModel;

    private: BasicArrayList vector;

public: DefaultListModelHelper(){
this->vector= BasicArrayListD();
    
this->defaultListModel= DefaultListModel();
    
}


    public: void initDefaultModelList(){
this->defaultListModel= DefaultListModel();
    

    int32_t size = this->vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string moduleName = this->vector.get(index) as string;;
    
this->defaultListModel.addElement(moduleName);
    
}

}


    public: ListModel getListModel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->defaultListModel as ListModel;
    
}


    public: void add(std::string string){
this->vector.add(string);
    
}


    public: void remove(std::string string){
this->vector.remove(string);
    
}


};

            

