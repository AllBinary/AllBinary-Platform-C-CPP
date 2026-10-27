
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
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/cache/CacheableInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ColorDelta
            : public Object
        , public CacheableInterface {

    public: static Object* getKey(int32_t rgb1, int32_t rgb2){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(std::to_string(rgb1))->append(CommonSeps::getInstance()->UNDERSCORE)->append(std::to_string(rgb2))->toString();;
    
}


    private: int32_t rgb1= 0;

    private: int32_t rgb2= 0;

    private: Object* key;

public: ColorDelta(int32_t rgb1, int32_t rgb2){
this->setRgb1(rgb1);
    
this->setRgb2(rgb2);
    
this->key= ColorDelta::getKey(rgb1, rgb2);
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->key;
    
}


    public: int32_t getRgb1(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rgb1;
    
}


    protected: void setRgb1(int32_t rgb1){
this->rgb1= rgb1;
    
}


    public: int32_t getRgb2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rgb2;
    
}


    protected: void setRgb2(int32_t rgb2){
this->rgb2= rgb2;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append("ColorDelta: ")->append(StringUtil::getInstance()->toString(this->getKey()))->append(" RGB1: ")->appendint(this->getRgb1())->append(" RGB2: ")->appendint(this->getRgb2())->toString();;
    
}


};

            

