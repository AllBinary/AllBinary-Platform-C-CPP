
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScaleProperties
            : public Object
         {

    private: static ScaleProperties instance() { return ScaleProperties(); }

    public: float scaleX= 0.0;

    public: float scaleY= 0.0;

    public: int32_t scaleWidth= 0;

    public: int32_t scaleHeight= 0;

    public: bool shouldScale= false;

    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringMaker().append(CommonLabels::getInstance().COLON_SEP).appendboolean(this->shouldScale).append("scaleX: ").appendfloat(this->scaleX).append("scaleY: ").appendfloat(this->scaleY).append("scaleWidth: ").appendint(this->scaleWidth).append("scaleHeight: ").appendint(this->scaleHeight).toString();;
    
}


};

            

