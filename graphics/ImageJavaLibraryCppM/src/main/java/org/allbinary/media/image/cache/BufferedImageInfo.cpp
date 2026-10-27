
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
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BufferedImageInfo
            : public Object
         {

    private: int32_t width;

    private: int32_t height;

    private: int32_t type;

public: BufferedImageInfo(int32_t width, int32_t height, int32_t type){
this->width= width;
    
this->height= height;
    
this->type= type;
    
}


    public: int32_t getWidth(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->width;
    
}


    public: void setWidth(int32_t width){
this->width= width;
    
}


    public: int32_t getHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->height;
    
}


    public: void setHeight(int32_t height){
this->height= height;
    
}


    public: int32_t getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->type;
    
}


    public: void setType(int32_t type){
this->type= type;
    
}


    public: std::string toString(){

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("BufferedImageInfo -");
    
stringBuffer->append(commonLabels->WIDTH_LABEL);
    
stringBuffer->appendint(this->getWidth());
    
stringBuffer->append(commonLabels->HEIGHT_LABEL);
    
stringBuffer->appendint(this->getHeight());
    
stringBuffer->append(" Type: ");
    
stringBuffer->appendint(this->getType());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

