
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
        
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/util/visitor/VisitorInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BooleanFileVisitor
            : public Object
        , public VisitorInterface {

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: BasicArrayList* filterStringBasicArrayList;

public: BooleanFileVisitor(BasicArrayList* filterStringBasicArrayList){
this->setFilterStringBasicArrayList(filterStringBasicArrayList);
    
PreLogUtil::put("Filter BasicArrayList: " +this->getFilterStringBasicArrayList()->toString(), this, this->commonStrings->CONSTRUCTOR);
    
}


    public: Object* visit(Object* anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->visit(dynamic_cast<AbFile*>(anyType));
    
}


    public: bool visit(AbFile* file){

    BasicArrayList* list = this->getFilterStringBasicArrayList();;
    

    int32_t size = list->size();;
    

    std::string nextFileFilterString;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextFileFilterString= list->get(index);
    

                        if(this->visit(file, nextFileFilterString).valueOf())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}


    public: BasicArrayList* getFilterStringBasicArrayList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->filterStringBasicArrayList;
    
}


    public: void setFilterStringBasicArrayList(BasicArrayList* filterStringBasicArrayList){
this->filterStringBasicArrayList= filterStringBasicArrayList;
    
}


    public: bool visit(AbFile* file, std::string fileNameString){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}


};

            

